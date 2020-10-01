#TBC, the line start whit !*! is important/useful infomation
#This file contains the tests I have done to understand NWChem's work flow. 

src/nwdft/coulomb/dft_fitvc.F:
line 325-328:
test the dbl_mb data 
#(removed)

src/nwdft/scf_dft/dft_fockbld.F
line 363-367
test the output control (succeed!!!) 
#(removed)

#!*!NOTE: Once commit any changes, go to the directory holding the changed file, type "make" in terminal, then return to the src directory type "make link".

src/nwdft/scf_dft/coulomb/dft_getvc  line 41-45
#(removed)
src/nwdft/scf_dft/coulomb/dft_fitvc  line 61-65
#(removed)
# For my test job (H20 DFT Task), iVcoul_opt==0 which means dft_getvc does not call dft_fitvc

#TEST=================> which subroutine actually calculates the coulomb energy
src/nwdft/scf_dft/dft_fockbld.F
#Updates(2020/9/30): write(luout,*) directives for test have been changed to annotation
#TEST=================>
#!*!Important fact: both Coulomb and XC are calculated in subroutine xc_getv 

src/nwdft/scf_dft/xc/xc_getv.F:
C> Calculate exchange-correlation energy
C> Calculate the exchange-correlation(Coulomb) energy and Fock matrix contributions
#fock_2e is the key to generate the potential and density, thus the fock matrix can be worked out? Go check it!
#After fock_2e is called, Exc(1) and ecoul can be calculated by using ga_ddot function

src/ddscf/fock_2e.F: Following above analysis
Figure out how ao_fock_2e.F construct Coulomb potential and it's Fock matrix part
#Question: 1.How does nwchem recognize the dft choice? 2.Try to add the "Thomas-Fermi hybrid" choice. 3.Find the how to get the electron number N.
#Answer for q1: cdft contains variables related to "xc" input such as cfac, xfac (Include it into the ao_fock_2e.F). Check xc_inp.F and xc_util.F
#Answer for q2: Look into xc_inp. Two choices to be tested:(1)Add key_word 'Fermi-Amaldi' in sic_input subroutine. (2)Add key_word 'Fermi-Amaldi' in xc_input.
#==================================Choice(1)=====================================
#Explore choice (1): Step1 -> Edit subroutine sic_input,add key_word 'Fermi-Amaldi'. Step2 -> In order to get the parameter test_sic, call xc_sicinit(rtdb, test_sic, condfukui, exact_pot, l_degen, i_degen, noc, act_levels). Must include the following lib {#include "rtdb.fh",#include "cdft.fh"} and define following vars {[integer test_sic, condfukui, l_degen, i_degen(2)],[integer exact_pot, act_levels]} in ao_fock_2e.F. 
#The modification history of choice (1):  The vars defined in subroutine ao_fock_2e will controdict the one defined in cdft.fh (try to rename the vars in ao_fock_2e)
/src/nwdft/input_dft/xc_inp.F:
***************************
*Origin version saved here*
***************************
      subroutine sic_input(rtdb, module)
      implicit none
#include "errquit.fh"
#include "inp.fh"
#include "rtdb.fh"
#include "mafdecls.fh"
#include "stdio.fh"
      integer rtdb
      character*(*) module
c     
c     Parse the sic directive which specifies how to construct the
c     sic/oep approach is used.
c     
c     Possible variables are:
c
c     perturbative
c     oep
c     oep-loc
c     
      integer num_dirs, ind, mlen, test_sic
      parameter (num_dirs = 3)
      character*12 dirs(num_dirs)
      character*255 test
c
c
      data dirs /'perturbative', 'oep', 'oep-loc'/
c     
      mlen = inp_strlen(module)
      test_sic = 1
c     
 10   if (.not.inp_a(test)) goto 1999
c     
      if (.not. inp_match(num_dirs, .false., test, dirs, ind)) then
c     
c        Does not match a keyword ... 
c     
         goto 10000
      endif
c
      goto (100, 200, 300, 1999) ind
      call errquit('sic_inp: unimplemented directive', ind, INPUT_ERR)
c     
  100 if (.not.inp_a(test)) then
        test_sic = 1
      else
        goto 10000
      end if            
c
      goto 10
  200 if (.not.inp_a(test)) then
        test_sic = 2
      else
        goto 10000
      end if
c
      goto 10
  300 if (.not.inp_a(test)) then
        test_sic = 4
      else
        goto 10000
      end if
c
      goto 10
c             
 1999 continue
c
      if (.not. rtdb_put(rtdb, 'dft:test_sic', mt_int, 1,test_sic))
     &     call errquit('sic_inp: rtdb_put failed', 1, RTDB_ERR)
c     
      return
c     
10000 write(LuOut,10001)

10001 format(/,' sic [[perturbative], [oep], [oep-loc]]')
      call util_flush(LuOut)
      call errquit('sic_input: invalid format', 0, INPUT_ERR)
c     
      end
#**********************************************************************
ao_fock_2e.F has been changed a lot
upload to github,trace the changes!
next step: study the fermi-amaldi paper, compare the result to see whether my implmentation is correct!!
#=================================EndChoice(1)===================================

