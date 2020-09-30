/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define to name of caxpy routine to call from C */
#define BLAS_CAXPY 

/* Define to name of ccopy routine to call from C */
#define BLAS_CCOPY 

/* Define to name of daxpy routine to call from C */
#define BLAS_DAXPY 

/* Define to name of dcopy routine to call from C */
#define BLAS_DCOPY 

/* Define to name of saxpy routine to call from C */
#define BLAS_SAXPY 

/* Define to name of scopy routine to call from C */
#define BLAS_SCOPY 

/* Define to sizeof(INTEGER) used to compile BLAS */
#define BLAS_SIZE 4

/* Define to name of zaxpy routine to call from C */
#define BLAS_ZAXPY 

/* Define to name of zcopy routine to call from C */
#define BLAS_ZCOPY 

/* Define to 1 if the network is DMAPP */
#define COMEX_NETWORK_DMAPP 0

/* Define to 1 if the network is MPI3 */
#define COMEX_NETWORK_MPI3 0

/* Define to 1 if the network is MPI_MT */
#define COMEX_NETWORK_MPI_MT 0

/* Define to 1 if the network is MPI_PR */
#define COMEX_NETWORK_MPI_PR 0

/* Define to 1 if the network is MPI_PT */
#define COMEX_NETWORK_MPI_PT 0

/* Define to 1 if the network is MPI_TS */
#define COMEX_NETWORK_MPI_TS 1

/* Define to 1 if the network is OFA */
#define COMEX_NETWORK_OFA 0

/* Define to 1 if the network is OFI */
#define COMEX_NETWORK_OFI 0

/* Define to 1 if the network is PORTALS4 */
#define COMEX_NETWORK_PORTALS4 0

/* Define if ARMCI profiling is enabled */
/* #undef COMEX_PROFILING_ARMCI */

/* CPP symbol for function name, if available */
#define FUNCTION_NAME __func__

/* Define to 1 if you have AC_header, 0 if you don't */
#define HAVE_ASSERT_H 1

/* Define to 1 if using external BLAS library */
#define HAVE_BLAS 0

/* Define to 1 if you have AC_func, 0 if you don't */
#define HAVE_BZERO 1

/* Define to 1 if you have the <dirent.h> header file, and it defines `DIR'.
   */
#define HAVE_DIRENT_H 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if the system has the type `dmapp_lock_desc_t'. */
/* #undef HAVE_DMAPP_LOCK_DESC_T */

/* Define to 1 if the system has the type `dmapp_lock_handle_t'. */
/* #undef HAVE_DMAPP_LOCK_HANDLE_T */

/* Define to 1 if you have AC_header, 0 if you don't */
#define HAVE_ERRNO_H 1

/* Define to 1 if you have AC_header, 0 if you don't */
#define HAVE_GETOPT_H 1

/* Define to 1 if you have the `getpagesize' function. */
#define HAVE_GETPAGESIZE 1

/* Define to 1 if you have AC_func, 0 if you don't */
#define HAVE_GETTIMEOFDAY 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `hugetlbfs' library. */
/* #undef HAVE_LIBHUGETLBFS */

/* Define to 1 if you have AC_header, 0 if you don't */
#define HAVE_MATH_H 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have AC_func, 0 if you don't */
#define HAVE_MEMSET 1

/* Define to 1 if you have a working `mmap' system call. */
#define HAVE_MMAP 1

/* Define to 1 if you have AC_func, 0 if you don't */
#define HAVE_MPIX_IBARRIER 0

/* Define to 1 if you have AC_func, 0 if you don't */
#define HAVE_MPI_IBARRIER 1

/* Define to 1 if you have AC_func, 0 if you don't */
#define HAVE_MUNMAP 1

/* Define to 1 if you have the <ndir.h> header file, and it defines `DIR'. */
/* #undef HAVE_NDIR_H */

/* Define to 1 if you have AC_header, 0 if you don't */
#define HAVE_PTHREAD_H 1

/* Define to 1 if you have AC_func, 0 if you don't */
#define HAVE_PTHREAD_SETAFFINITY_NP 1

/* Define to 1 if the system has the type `ptrdiff_t'. */
#define HAVE_PTRDIFF_T 1

/* Define to 1 if you have the <rdma/fabric.h> header file. */
/* #undef HAVE_RDMA_FABRIC_H */

/* Define to 1 if you have the <rdma/fi_domain.h> header file. */
/* #undef HAVE_RDMA_FI_DOMAIN_H */

/* Define to 1 if you have AC_header, 0 if you don't */
#define HAVE_SCHED_H 1

/* Define to 1 if you have AC_func, 0 if you don't */
#define HAVE_SCHED_SETAFFINITY 1

/* Define to 1 if you have AC_header, 0 if you don't */
#define HAVE_SEMAPHORE_H 1

/* Define to 1 if stdbool.h conforms to C99. */
#define HAVE_STDBOOL_H 1

/* Define to 1 if you have AC_header, 0 if you don't */
#define HAVE_STDINT_H 1

/* Define to 1 if you have AC_header, 0 if you don't */
#define HAVE_STDIO_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have AC_func, 0 if you don't */
#define HAVE_STRCHR 1

/* Define to 1 if you have AC_func, 0 if you don't */
#define HAVE_STRDUP 1

/* Define to 1 if you have AC_header, 0 if you don't */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have AC_header, 0 if you don't */
#define HAVE_STRING_H 1

/* Define to 1 if you have AC_func, 0 if you don't */
#define HAVE_STRNCASECMP 1

/* Define to 1 if you have AC_func, 0 if you don't */
#define HAVE_STRSTR 1

/* Define to 1 if you have the <sys/dir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_DIR_H */

/* Define to 1 if you have the <sys/ndir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_NDIR_H */

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have AC_header, 0 if you don't */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have AC_header, 0 if you don't */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have <sys/wait.h> that is POSIX.1 compatible. */
#define HAVE_SYS_WAIT_H 1

/* Define this if weak aliases may be created with #pragma weak */
#define HAVE_SYS_WEAK_ALIAS_PRAGMA 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if the system has the type `_Bool'. */
#define HAVE__BOOL 1

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* Define to 1 if assertions should be disabled. */
/* #undef NDEBUG */

/* Name of package */
#define PACKAGE "comex"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "hpctools@pnl.gov"

/* Define to the full name of this package. */
#define PACKAGE_NAME "Communication Runtime for Extreme Scale (comex)"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "Communication Runtime for Extreme Scale (comex) 1.1"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "comex"

/* Define to the home page for this package. */
#define PACKAGE_URL "http://www.emsl.pnl.gov/docs/global/"

/* Define to the version of this package. */
#define PACKAGE_VERSION "1.1"

/* Define to 1 if you have the `sem_open' function. */
#define SEM_OPEN 1

/* Define to 1 if you have the `shm_open' function. */
#define SHM_OPEN 1

/* Define to 1 if you have the `shm_unlink' function. */
#define SHM_UNLINK 1

/* The size of `char', as computed by sizeof. */
#define SIZEOF_CHAR 1

/* The size of `double', as computed by sizeof. */
#define SIZEOF_DOUBLE 8

/* The size of `float', as computed by sizeof. */
#define SIZEOF_FLOAT 4

/* The size of `int', as computed by sizeof. */
#define SIZEOF_INT 4

/* The size of `long', as computed by sizeof. */
#define SIZEOF_LONG 8

/* The size of `long long', as computed by sizeof. */
#define SIZEOF_LONG_LONG 8

/* The size of `MPI_Aint', as computed by sizeof. */
#define SIZEOF_MPI_AINT 8

/* The size of `short', as computed by sizeof. */
#define SIZEOF_SHORT 2

/* The size of `void*', as computed by sizeof. */
#define SIZEOF_VOIDP 8

/* Define to 1 if you have the `sqrt' function. */
#define SQRT 1

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# define _ALL_SOURCE 1
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif
/* Enable threading extensions on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# define _POSIX_PTHREAD_SEMANTICS 1
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# define _TANDEM_SOURCE 1
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# define __EXTENSIONS__ 1
#endif


/* Version number of package */
#define VERSION "1.1"

/* Define to 1 if on MINIX. */
/* #undef _MINIX */

/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
/* #undef _POSIX_1_SOURCE */

/* Define to 1 if you need to in order for `stat' and other things to work. */
/* #undef _POSIX_SOURCE */

/* Define for Solaris 2.5.1 so the uint32_t typedef from <sys/synch.h>,
   <pthread.h>, or <semaphore.h> is not used. If the typedef were allowed, the
   #define below would cause a syntax error. */
/* #undef _UINT32_T */

/* Define for Solaris 2.5.1 so the uint64_t typedef from <sys/synch.h>,
   <pthread.h>, or <semaphore.h> is not used. If the typedef were allowed, the
   #define below would cause a syntax error. */
/* #undef _UINT64_T */

/* Define for Solaris 2.5.1 so the uint8_t typedef from <sys/synch.h>,
   <pthread.h>, or <semaphore.h> is not used. If the typedef were allowed, the
   #define below would cause a syntax error. */
/* #undef _UINT8_T */

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to the type of a signed integer type of width exactly 16 bits if
   such a type exists and the standard includes do not define it. */
/* #undef int16_t */

/* Define to the type of a signed integer type of width exactly 32 bits if
   such a type exists and the standard includes do not define it. */
/* #undef int32_t */

/* Define to the type of a signed integer type of width exactly 64 bits if
   such a type exists and the standard includes do not define it. */
/* #undef int64_t */

/* Define to the type of a signed integer type of width exactly 8 bits if such
   a type exists and the standard includes do not define it. */
/* #undef int8_t */

/* Define to `long int' if <sys/types.h> does not define. */
/* #undef off_t */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef pid_t */

/* Define to the equivalent of the C99 'restrict' keyword, or to
   nothing if this is not supported.  Do not define if restrict is
   supported directly.  */
#define restrict __restrict
/* Work around a bug in Sun C++: it does not support _Restrict or
   __restrict__, even though the corresponding Sun C compiler ends up with
   "#define restrict _Restrict" or "#define restrict __restrict__" in the
   previous line.  Perhaps some future version of Sun C++ will work with
   restrict; if so, hopefully it defines __RESTRICT like Sun C does.  */
#if defined __SUNPRO_CC && !defined __RESTRICT
# define _Restrict
# define __restrict__
#endif

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */

/* Define to the type of an unsigned integer type of width exactly 16 bits if
   such a type exists and the standard includes do not define it. */
/* #undef uint16_t */

/* Define to the type of an unsigned integer type of width exactly 32 bits if
   such a type exists and the standard includes do not define it. */
/* #undef uint32_t */

/* Define to the type of an unsigned integer type of width exactly 64 bits if
   such a type exists and the standard includes do not define it. */
/* #undef uint64_t */

/* Define to the type of an unsigned integer type of width exactly 8 bits if
   such a type exists and the standard includes do not define it. */
/* #undef uint8_t */

/* Define to empty if the keyword `volatile' does not work. Warning: valid
   code using `volatile' can become incorrect without. Disable with care. */
/* #undef volatile */
