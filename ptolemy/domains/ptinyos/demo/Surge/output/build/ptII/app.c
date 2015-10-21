#define nx_struct struct
#define nx_union union
# 37 "/usr/include/stdint.h"
typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;

typedef long int int64_t;







typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;



typedef unsigned long int uint64_t;









typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;

typedef long int int_least64_t;






typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;

typedef unsigned long int uint_least64_t;









typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;








typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
# 120 "/usr/include/stdint.h" 3
typedef long int intptr_t;


typedef unsigned long int uintptr_t;
#line 135
typedef long int intmax_t;
typedef unsigned long int uintmax_t;
# 35 "/usr/include/inttypes.h"
typedef int __gwchar_t;
#line 283
#line 279
typedef struct __nesc_unnamed4242 {

  long int quot;
  long int rem;
} imaxdiv_t;
# 385 "/usr/local/lib/ncc/nesc_nx.h"
typedef struct { char data[1]; } __attribute__((packed)) nx_int8_t;typedef int8_t __nesc_nxbase_nx_int8_t  ;
typedef struct { char data[2]; } __attribute__((packed)) nx_int16_t;typedef int16_t __nesc_nxbase_nx_int16_t  ;
typedef struct { char data[4]; } __attribute__((packed)) nx_int32_t;typedef int32_t __nesc_nxbase_nx_int32_t  ;
typedef struct { char data[8]; } __attribute__((packed)) nx_int64_t;typedef int64_t __nesc_nxbase_nx_int64_t  ;
typedef struct { char data[1]; } __attribute__((packed)) nx_uint8_t;typedef uint8_t __nesc_nxbase_nx_uint8_t  ;
typedef struct { char data[2]; } __attribute__((packed)) nx_uint16_t;typedef uint16_t __nesc_nxbase_nx_uint16_t  ;
typedef struct { char data[4]; } __attribute__((packed)) nx_uint32_t;typedef uint32_t __nesc_nxbase_nx_uint32_t  ;
typedef struct { char data[8]; } __attribute__((packed)) nx_uint64_t;typedef uint64_t __nesc_nxbase_nx_uint64_t  ;


typedef struct { char data[1]; } __attribute__((packed)) nxle_int8_t;typedef int8_t __nesc_nxbase_nxle_int8_t  ;
typedef struct { char data[2]; } __attribute__((packed)) nxle_int16_t;typedef int16_t __nesc_nxbase_nxle_int16_t  ;
typedef struct { char data[4]; } __attribute__((packed)) nxle_int32_t;typedef int32_t __nesc_nxbase_nxle_int32_t  ;
typedef struct { char data[8]; } __attribute__((packed)) nxle_int64_t;typedef int64_t __nesc_nxbase_nxle_int64_t  ;
typedef struct { char data[1]; } __attribute__((packed)) nxle_uint8_t;typedef uint8_t __nesc_nxbase_nxle_uint8_t  ;
typedef struct { char data[2]; } __attribute__((packed)) nxle_uint16_t;typedef uint16_t __nesc_nxbase_nxle_uint16_t  ;
typedef struct { char data[4]; } __attribute__((packed)) nxle_uint32_t;typedef uint32_t __nesc_nxbase_nxle_uint32_t  ;
typedef struct { char data[8]; } __attribute__((packed)) nxle_uint64_t;typedef uint64_t __nesc_nxbase_nxle_uint64_t  ;
# 211 "/usr/lib/gcc/x86_64-redhat-linux/4.4.7/include/stddef.h" 3
typedef long unsigned int size_t;
# 44 "/usr/include/string.h"
extern void *memcpy(void *__restrict __dest, 
const void *__restrict __src, size_t __n) 
__attribute((__nothrow__)) __attribute((__nonnull__(1, 2))) ;
#line 65
extern void *memset(void *__s, int __c, size_t __n) __attribute((__nothrow__)) __attribute((__nonnull__(1))) ;
# 131 "/usr/include/string.h" 3
extern char *strncpy(char *__restrict __dest, 
const char *__restrict __src, size_t __n) 
__attribute((__nothrow__)) __attribute((__nonnull__(1, 2))) ;









extern int strcmp(const char *__s1, const char *__s2) 
__attribute((__nothrow__)) __attribute((__pure__)) __attribute((__nonnull__(1, 2))) ;

extern int strncmp(const char *__s1, const char *__s2, size_t __n) 
__attribute((__nothrow__)) __attribute((__pure__)) __attribute((__nonnull__(1, 2))) ;
# 40 "/usr/include/xlocale.h"
#line 28
typedef struct __locale_struct {


  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
# 348 "/usr/include/string.h" 3
extern char *strtok(char *__restrict __s, const char *__restrict __delim) 
__attribute((__nothrow__)) __attribute((__nonnull__(2))) ;
#line 413
extern char *strerror(int __errnum) __attribute((__nothrow__)) ;
#line 459
extern void bzero(void *__s, size_t __n) __attribute((__nothrow__)) __attribute((__nonnull__(1))) ;
# 323 "/usr/lib/gcc/x86_64-redhat-linux/4.4.7/include/stddef.h" 3
typedef int wchar_t;
# 67 "/usr/include/bits/waitstatus.h"
union wait {

  int w_status;
  struct __nesc_unnamed4243 {


    unsigned int __w_termsig : 7;
    unsigned int __w_coredump : 1;
    unsigned int __w_retcode : 8;
    unsigned int  : 16;
  } 






  __wait_terminated;
  struct __nesc_unnamed4244 {


    unsigned int __w_stopval : 8;
    unsigned int __w_stopsig : 8;
    unsigned int  : 16;
  } 





  __wait_stopped;
};
# 72 "/usr/include/stdlib.h"
#line 68
typedef union __nesc_unnamed4245 {

  union wait *__uptr;
  int *__iptr;
} __WAIT_STATUS __attribute((__transparent_union__)) ;
# 102 "/usr/include/stdlib.h" 3
#line 98
typedef struct __nesc_unnamed4246 {

  int quot;
  int rem;
} div_t;







#line 106
typedef struct __nesc_unnamed4247 {

  long int quot;
  long int rem;
} ldiv_t;







__extension__ 



#line 118
typedef struct __nesc_unnamed4248 {

  long long int quot;
  long long int rem;
} lldiv_t;
#line 145
extern double atof(const char *__nptr) 
__attribute((__nothrow__)) __attribute((__pure__)) __attribute((__nonnull__(1))) ;

extern int atoi(const char *__nptr) 
__attribute((__nothrow__)) __attribute((__pure__)) __attribute((__nonnull__(1))) ;








__extension__ 
#line 195
__extension__ 




__extension__ 








__extension__ 




__extension__ 
# 31 "/usr/include/bits/types.h"
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
#line 134
typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct __nesc_unnamed4249 {
#line 144
  int __val[2];
} 
#line 144
__fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef long int __swblk_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void *__timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;

typedef long int __ssize_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;
# 34 "/usr/include/sys/types.h"
typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;
#line 61
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;
#line 99
typedef __pid_t pid_t;





typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 60 "/usr/include/time.h"
typedef __clock_t clock_t;
#line 76
typedef __time_t time_t;
#line 92
typedef __clockid_t clockid_t;
#line 104
typedef __timer_t timer_t;
# 151 "/usr/include/sys/types.h"
typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
# 201 "/usr/include/sys/types.h" 3
typedef unsigned int u_int8_t __attribute((__mode__(__QI__))) ;
typedef unsigned int u_int16_t __attribute((__mode__(__HI__))) ;
typedef unsigned int u_int32_t __attribute((__mode__(__SI__))) ;
typedef unsigned int u_int64_t __attribute((__mode__(__DI__))) ;

typedef int register_t __attribute((__mode__(__word__))) ;
# 24 "/usr/include/bits/sigset.h"
typedef int __sig_atomic_t;







#line 29
typedef struct __nesc_unnamed4250 {

  unsigned long int __val[1024 / (8 * sizeof(unsigned long int ))];
} __sigset_t;
# 38 "/usr/include/sys/select.h"
typedef __sigset_t sigset_t;
# 120 "/usr/include/time.h"
struct timespec {

  __time_t tv_sec;
  long int tv_nsec;
};
# 75 "/usr/include/bits/time.h"
struct timeval {

  __time_t tv_sec;
  __suseconds_t tv_usec;
};
# 49 "/usr/include/sys/select.h"
typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
#line 78
#line 67
typedef struct __nesc_unnamed4251 {







  __fd_mask __fds_bits[1024 / (8 * (int )sizeof(__fd_mask ))];
} 

fd_set;






typedef __fd_mask fd_mask;
# 30 "/usr/include/sys/sysmacros.h"
__extension__ 


__extension__ 


__extension__ 
# 229 "/usr/include/sys/types.h"
typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 50 "/usr/include/bits/pthreadtypes.h" 3
typedef unsigned long int pthread_t;






#line 53
typedef union __nesc_unnamed4252 {

  char __size[56];
  long int __align;
} pthread_attr_t;







#line 61
typedef struct __pthread_internal_list {

  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
#line 104
#line 76
typedef union __nesc_unnamed4253 {

  struct __pthread_mutex_s {

    int __lock;
    unsigned int __count;
    int __owner;

    unsigned int __nusers;



    int __kind;

    int __spins;
    __pthread_list_t __list;
  } 








  __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;





#line 106
typedef union __nesc_unnamed4254 {

  char __size[4];
  int __align;
} pthread_mutexattr_t;
#line 130
#line 115
typedef union __nesc_unnamed4255 {

  struct __nesc_unnamed4256 {

    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;





#line 132
typedef union __nesc_unnamed4257 {

  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;
#line 189
#line 150
typedef union __nesc_unnamed4258 {


  struct __nesc_unnamed4259 {

    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;
    int __writer;
    int __shared;
    unsigned long int __pad1;
    unsigned long int __pad2;


    unsigned int __flags;
  } __data;
#line 187
  char __size[56];
  long int __align;
} pthread_rwlock_t;





#line 191
typedef union __nesc_unnamed4260 {

  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;








#line 206
typedef union __nesc_unnamed4261 {

  char __size[32];
  long int __align;
} pthread_barrier_t;





#line 212
typedef union __nesc_unnamed4262 {

  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 349 "/usr/include/stdlib.h"
struct random_data {

  int32_t *fptr;
  int32_t *rptr;
  int32_t *state;
  int rand_type;
  int rand_deg;
  int rand_sep;
  int32_t *end_ptr;
};
#line 380
extern int rand(void ) __attribute((__nothrow__)) ;

extern void srand(unsigned int __seed) __attribute((__nothrow__)) ;
#line 418
struct drand48_data {

  unsigned short int __x[3];
  unsigned short int __old_x[3];
  unsigned short int __c;
  unsigned short int __init;
  unsigned long long int __a;
};
#line 471
extern void *malloc(size_t __size) __attribute((__nothrow__)) __attribute((__malloc__)) ;

extern void *calloc(size_t __nmemb, size_t __size) 
__attribute((__nothrow__)) __attribute((__malloc__)) ;
#line 488
extern void free(void *__ptr) __attribute((__nothrow__)) ;
# 544 "/usr/include/stdlib.h" 3
extern void exit(int __status) __attribute((__nothrow__)) __attribute((__noreturn__)) ;
#line 567
extern char *getenv(const char *__name) __attribute((__nothrow__)) __attribute((__nonnull__(1))) ;
#line 742
typedef int (*__compar_fn_t)(const void *, const void *);
#line 761
extern void qsort(void *__base, size_t __nmemb, size_t __size, 
__compar_fn_t __compar) __attribute((__nonnull__(1, 4))) ;
#line 776
__extension__ 
#line 793
__extension__ 
# 31 "/usr/include/bits/mathdef.h"
typedef float float_t;
typedef double double_t;
# 198 "/usr/include/math.h"
enum __nesc_unnamed4263 {

  FP_NAN, 

  FP_INFINITE, 

  FP_ZERO, 

  FP_SUBNORMAL, 

  FP_NORMAL
};
#line 298
#line 291
typedef enum __nesc_unnamed4264 {

  _IEEE_ = -1, 
  _SVID_, 
  _XOPEN_, 
  _POSIX_, 
  _ISOC_
} _LIB_VERSION_TYPE;
#line 316
struct exception {


  int type;
  char *name;
  double arg1;
  double arg2;
  double retval;
};
# 149 "/usr/lib/gcc/x86_64-redhat-linux/4.4.7/include/stddef.h" 3
typedef long int ptrdiff_t;
# 48 "/usr/include/ctype.h"
enum __nesc_unnamed4265 {

  _ISupper = 0 < 8 ? (1 << 0) << 8 : (1 << 0) >> 8, 
  _ISlower = 1 < 8 ? (1 << 1) << 8 : (1 << 1) >> 8, 
  _ISalpha = 2 < 8 ? (1 << 2) << 8 : (1 << 2) >> 8, 
  _ISdigit = 3 < 8 ? (1 << 3) << 8 : (1 << 3) >> 8, 
  _ISxdigit = 4 < 8 ? (1 << 4) << 8 : (1 << 4) >> 8, 
  _ISspace = 5 < 8 ? (1 << 5) << 8 : (1 << 5) >> 8, 
  _ISprint = 6 < 8 ? (1 << 6) << 8 : (1 << 6) >> 8, 
  _ISgraph = 7 < 8 ? (1 << 7) << 8 : (1 << 7) >> 8, 
  _ISblank = 8 < 8 ? (1 << 8) << 8 : (1 << 8) >> 8, 
  _IScntrl = 9 < 8 ? (1 << 9) << 8 : (1 << 9) >> 8, 
  _ISpunct = 10 < 8 ? (1 << 10) << 8 : (1 << 10) >> 8, 
  _ISalnum = 11 < 8 ? (1 << 11) << 8 : (1 << 11) >> 8
};
# 91 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/tos.h"
typedef unsigned char bool;






enum __nesc_unnamed4266 {
  FALSE = 0, 
  TRUE = 1
};

uint16_t TOS_LOCAL_ADDRESS = 1;

enum __nesc_unnamed4267 {
  FAIL = 0, 
  SUCCESS = 1
};


static inline uint8_t rcombine(uint8_t r1, uint8_t r2);
typedef uint8_t result_t  ;







static inline result_t rcombine(result_t r1, result_t r2);







static inline result_t rcombine3(result_t r1, result_t r2, result_t r3);




static inline result_t rcombine4(result_t r1, result_t r2, result_t r3, 
result_t r4);





enum __nesc_unnamed4268 {
  NULL = 0x0
};
# 45 "/usr/include/stdio.h"
struct _IO_FILE;



typedef struct _IO_FILE FILE;
#line 65
typedef struct _IO_FILE __FILE;
# 95 "/usr/include/wchar.h" 3
#line 83
typedef struct __nesc_unnamed4269 {

  int __count;
  union __nesc_unnamed4270 {


    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;
# 26 "/usr/include/_G_config.h"
#line 22
typedef struct __nesc_unnamed4271 {

  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;




#line 27
typedef struct __nesc_unnamed4272 {

  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 53 "/usr/include/_G_config.h" 3
typedef int _G_int16_t __attribute((__mode__(__HI__))) ;
typedef int _G_int32_t __attribute((__mode__(__SI__))) ;
typedef unsigned int _G_uint16_t __attribute((__mode__(__HI__))) ;
typedef unsigned int _G_uint32_t __attribute((__mode__(__SI__))) ;
# 40 "/usr/lib/gcc/x86_64-redhat-linux/4.4.7/include/stdarg.h"
typedef __builtin_va_list __gnuc_va_list;
# 170 "/usr/include/libio.h" 3
struct _IO_jump_t;
#line 170
struct _IO_FILE;









typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
};
#line 206
enum __codecvt_result {

  __codecvt_ok, 
  __codecvt_partial, 
  __codecvt_error, 
  __codecvt_noconv
};
#line 271
struct _IO_FILE {
  int _flags;




  char *_IO_read_ptr;
  char *_IO_read_end;
  char *_IO_read_base;
  char *_IO_write_base;
  char *_IO_write_ptr;
  char *_IO_write_end;
  char *_IO_buf_base;
  char *_IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;








  __off64_t _offset;








  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;

  int _mode;

  char _unused2[15 * sizeof(int ) - 4 * sizeof(void *) - sizeof(size_t )];
};



typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

struct _IO_FILE_plus;
struct _IO_FILE_plus;
struct _IO_FILE_plus;
#line 364
typedef __ssize_t __io_read_fn(void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn(void *__cookie, const char *__buf, 
size_t __n);







typedef int __io_seek_fn(void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn(void *__cookie);
#line 460
extern int _IO_getc(_IO_FILE *__fp);
# 80 "/usr/include/stdio.h"
typedef __gnuc_va_list va_list;
# 111 "/usr/include/stdio.h" 3
typedef _G_fpos_t fpos_t;
# 165 "/usr/include/stdio.h"
struct _IO_FILE;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;
# 236 "/usr/include/stdio.h" 3
extern int fclose(FILE *__stream);
#line 271
extern FILE *fopen(const char *__restrict __filename, 
const char *__restrict __modes);
#line 305
extern FILE *fdopen(int __fd, const char *__modes) __attribute((__nothrow__)) ;
#line 355
extern int fprintf(FILE *__restrict __stream, 
const char *__restrict __format, ...);




extern int printf(const char *__restrict __format, ...);








extern int vfprintf(FILE *__restrict __s, const char *__restrict __format, 
__gnuc_va_list __arg);
#line 385
extern int snprintf(char *__restrict __s, size_t __maxlen, 
const char *__restrict __format, ...) 
__attribute((__nothrow__)) __attribute((__format__(__printf__, 3, 4))) ;

extern int vsnprintf(char *__restrict __s, size_t __maxlen, 
const char *__restrict __format, __gnuc_va_list __arg) 
__attribute((__nothrow__)) __attribute((__format__(__printf__, 3, 0))) ;
#line 429
extern int fscanf(FILE *__restrict __stream, 
const char *__restrict __format, ...);
#line 447
extern int fscanf(FILE *__restrict __stream, const char *__restrict __format, ...) __asm ("""__isoc99_fscanf");
# 41 "/usr/include/signal.h"
typedef __sig_atomic_t sig_atomic_t;
# 37 "/usr/include/bits/siginfo.h"
#line 33
typedef union sigval {

  int sival_int;
  void *sival_ptr;
} sigval_t;
#line 108
#line 51
typedef struct siginfo {

  int si_signo;
  int si_errno;

  int si_code;

  union __nesc_unnamed4273 {

    int _pad[128 / sizeof(int ) - 4];


    struct __nesc_unnamed4274 {

      __pid_t si_pid;
      __uid_t si_uid;
    } _kill;


    struct __nesc_unnamed4275 {

      int si_tid;
      int si_overrun;
      sigval_t si_sigval;
    } _timer;


    struct __nesc_unnamed4276 {

      __pid_t si_pid;
      __uid_t si_uid;
      sigval_t si_sigval;
    } _rt;


    struct __nesc_unnamed4277 {

      __pid_t si_pid;
      __uid_t si_uid;
      int si_status;
      __clock_t si_utime;
      __clock_t si_stime;
    } _sigchld;


    struct __nesc_unnamed4278 {

      void *si_addr;
    } _sigfault;


    struct __nesc_unnamed4279 {

      long int si_band;
      int si_fd;
    } _sigpoll;
  } _sifields;
} siginfo_t;
#line 129
enum __nesc_unnamed4280 {

  SI_ASYNCNL = -60, 

  SI_TKILL = -6, 

  SI_SIGIO, 

  SI_ASYNCIO, 

  SI_MESGQ, 

  SI_TIMER, 

  SI_QUEUE, 

  SI_USER, 

  SI_KERNEL = 0x80
};




enum __nesc_unnamed4281 {

  ILL_ILLOPC = 1, 

  ILL_ILLOPN, 

  ILL_ILLADR, 

  ILL_ILLTRP, 

  ILL_PRVOPC, 

  ILL_PRVREG, 

  ILL_COPROC, 

  ILL_BADSTK
};



enum __nesc_unnamed4282 {

  FPE_INTDIV = 1, 

  FPE_INTOVF, 

  FPE_FLTDIV, 

  FPE_FLTOVF, 

  FPE_FLTUND, 

  FPE_FLTRES, 

  FPE_FLTINV, 

  FPE_FLTSUB
};



enum __nesc_unnamed4283 {

  SEGV_MAPERR = 1, 

  SEGV_ACCERR
};



enum __nesc_unnamed4284 {

  BUS_ADRALN = 1, 

  BUS_ADRERR, 

  BUS_OBJERR
};



enum __nesc_unnamed4285 {

  TRAP_BRKPT = 1, 

  TRAP_TRACE
};



enum __nesc_unnamed4286 {

  CLD_EXITED = 1, 

  CLD_KILLED, 

  CLD_DUMPED, 

  CLD_TRAPPED, 

  CLD_STOPPED, 

  CLD_CONTINUED
};



enum __nesc_unnamed4287 {

  POLL_IN = 1, 

  POLL_OUT, 

  POLL_MSG, 

  POLL_ERR, 

  POLL_PRI, 

  POLL_HUP
};
#line 293
#line 273
typedef struct sigevent {

  sigval_t sigev_value;
  int sigev_signo;
  int sigev_notify;

  union __nesc_unnamed4288 {

    int _pad[64 / sizeof(int ) - 4];



    __pid_t _tid;

    struct __nesc_unnamed4289 {

      void (*_function)(sigval_t );
      void *_attribute;
    } _sigev_thread;
  } _sigev_un;
} sigevent_t;






enum __nesc_unnamed4290 {

  SIGEV_SIGNAL = 0, 

  SIGEV_NONE, 

  SIGEV_THREAD, 


  SIGEV_THREAD_ID = 4
};
# 84 "/usr/include/signal.h"
typedef void (*__sighandler_t)(int );
#line 101
extern __sighandler_t signal(int __sig, __sighandler_t __handler) 
__attribute((__nothrow__)) ;
# 216 "/usr/include/signal.h" 3
typedef __sighandler_t sig_t;





extern int sigemptyset(sigset_t *__set) __attribute((__nothrow__)) __attribute((__nonnull__(1))) ;
# 25 "/usr/include/bits/sigaction.h"
struct sigaction {



  union __nesc_unnamed4291 {


    __sighandler_t sa_handler;

    void (*sa_sigaction)(int , siginfo_t *, void *);
  } 
  __sigaction_handler;







  __sigset_t sa_mask;


  int sa_flags;


  void (*sa_restorer)(void );
};
# 266 "/usr/include/signal.h"
extern int sigaction(int __sig, const struct sigaction *__restrict __act, 
struct sigaction *__restrict __oact) __attribute((__nothrow__)) ;
#line 314
struct sigvec {

  __sighandler_t sv_handler;
  int sv_mask;

  int sv_flags;
};
# 28 "/usr/include/bits/sigcontext.h"
struct _fpreg {

  unsigned short significand[4];
  unsigned short exponent;
};

struct _fpxreg {

  unsigned short significand[4];
  unsigned short exponent;
  unsigned short padding[3];
};

struct _xmmreg {

  __uint32_t element[4];
};
# 109 "/usr/include/bits/sigcontext.h" 3
struct _fpstate {


  __uint16_t cwd;
  __uint16_t swd;
  __uint16_t ftw;
  __uint16_t fop;
  __uint64_t rip;
  __uint64_t rdp;
  __uint32_t mxcsr;
  __uint32_t mxcr_mask;
  struct _fpxreg _st[8];
  struct _xmmreg _xmm[16];
  __uint32_t padding[24];
};

struct sigcontext {

  unsigned long r8;
  unsigned long r9;
  unsigned long r10;
  unsigned long r11;
  unsigned long r12;
  unsigned long r13;
  unsigned long r14;
  unsigned long r15;
  unsigned long rdi;
  unsigned long rsi;
  unsigned long rbp;
  unsigned long rbx;
  unsigned long rdx;
  unsigned long rax;
  unsigned long rcx;
  unsigned long rsp;
  unsigned long rip;
  unsigned long eflags;
  unsigned short cs;
  unsigned short gs;
  unsigned short fs;
  unsigned short __pad0;
  unsigned long err;
  unsigned long trapno;
  unsigned long oldmask;
  unsigned long cr2;
  struct _fpstate *fpstate;
  unsigned long __reserved1[8];
};
# 26 "/usr/include/bits/sigstack.h"
struct sigstack {

  void *ss_sp;
  int ss_onstack;
};



enum __nesc_unnamed4292 {

  SS_ONSTACK = 1, 

  SS_DISABLE
};
#line 55
#line 50
typedef struct sigaltstack {

  void *ss_sp;
  int ss_flags;
  size_t ss_size;
} stack_t;
# 33 "/usr/include/sys/ucontext.h"
typedef long int greg_t;





typedef greg_t gregset_t[23];
# 94 "/usr/include/sys/ucontext.h" 3
struct _libc_fpxreg {

  unsigned short int significand[4];
  unsigned short int exponent;
  unsigned short int padding[3];
};

struct _libc_xmmreg {

  __uint32_t element[4];
};

struct _libc_fpstate {


  __uint16_t cwd;
  __uint16_t swd;
  __uint16_t ftw;
  __uint16_t fop;
  __uint64_t rip;
  __uint64_t rdp;
  __uint32_t mxcsr;
  __uint32_t mxcr_mask;
  struct _libc_fpxreg _st[8];
  struct _libc_xmmreg _xmm[16];
  __uint32_t padding[24];
};


typedef struct _libc_fpstate *fpregset_t;








#line 126
typedef struct __nesc_unnamed4293 {

  gregset_t gregs;

  fpregset_t fpregs;
  unsigned long __reserved1[8];
} mcontext_t;










#line 135
typedef struct ucontext {

  unsigned long int uc_flags;
  struct ucontext *uc_link;
  stack_t uc_stack;
  mcontext_t uc_mcontext;
  __sigset_t uc_sigmask;
  struct _libc_fpstate __fpregs_mem;
} ucontext_t;
# 62 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/contrib/ptII/ptinyos/beta/TOSSIM-packet/nido.h"
enum __nesc_unnamed4294 {
  TOSNODES = 1000, 
  DEFAULT_EEPROM_SIZE = 512 * 1024
};

enum __nesc_unnamed4295 {
  TOSSIM_RADIO_MODEL_SIMPLE = 0, 
  TOSSIM_RADIO_MODEL_LOSSY = 1, 
  TOSSIM_RADIO_MODEL_PACKET = 2
};
# 55 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/heap_array.h"
#line 51
typedef struct __nesc_unnamed4296 {
  int size;
  void *data;
  int private_size;
} heap_t;

static inline void init_heap(heap_t *heap);

static inline int heap_is_empty(heap_t *heap);

static inline long long heap_get_min_key(heap_t *heap);

static void *heap_pop_min_data(heap_t *heap, long long *key);
static inline void heap_insert(heap_t *heap, void *data, long long key);
# 64 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/event_queue.h"
struct TOS_state;







#line 66
typedef struct event_queue {
  int pause;
  heap_t heap;


  void *lock;
} event_queue_t;
#line 84
#line 74
typedef struct event {
  long long time;
  int mote;
  int pause;
  int force;

  void *data;

  void (*handle)(struct event *, struct TOS_state *);
  void (*cleanup)(struct event *);
} event_t;


static inline void queue_init(event_queue_t *queue, int fpause);
static void queue_insert_event(event_queue_t *queue, event_t *event);
static inline event_t *queue_pop_event(event_queue_t *queue);
static inline void queue_handle_next_event(event_queue_t *queue);
static int queue_is_empty(event_queue_t *queue);
static long long queue_peek_event_time(event_queue_t *queue);
# 62 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/contrib/ptII/ptinyos/beta/TOSSIM-packet/adjacency_list.h"
enum __nesc_unnamed4297 {
  NUM_NODES_ALLOC = 200
};









#line 67
typedef struct link {
  int mote;
  double data;
  double neg;
  double pos;
  char bit;
  struct link *next_link;
} link_t;


link_t *free_list;
int num_free_links;

static link_t *allocate_link(int mote);

static int adjacency_list_init(void);
# 69 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/rfm_model.h"
#line 62
typedef struct __nesc_unnamed4298 {
  void (*init)(void);
  void (*transmit)(int , char );
  void (*stop_transmit)(int );
  char (*hears)(int );
  bool (*connected)(int , int );
  link_t *(*neighbors)(int );
} rfm_model;


static inline rfm_model *create_simple_model(void);





static inline rfm_model *create_lossy_model(char *file);

static void static_one_cell_init(void);



static inline void set_link_prob_value(uint16_t moteID1, uint16_t moteID2, double prob);



extern link_t *radio_connectivity[TOSNODES];
# 63 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/adc_model.h"
#line 59
typedef struct __nesc_unnamed4299 {
  void (*init)(void);

  uint16_t (*read)(int , uint8_t , long long );
} adc_model;

static inline adc_model *create_random_adc_model(void);
static inline adc_model *create_generic_adc_model(void);
static inline void set_adc_value(int moteID, uint8_t port, uint16_t value);
# 62 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/spatial_model.h"
#line 58
typedef struct __nesc_unnamed4300 {
  double xCoordinate;
  double yCoordinate;
  double zCoordinate;
} point3D;






#line 64
typedef struct __nesc_unnamed4301 {
  void (*init)(void);
  void (*get_position)(int , long long , point3D *);
} 

spatial_model;



static inline spatial_model *create_simple_spatial_model(void);
# 64 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/nido_eeprom.h"
static inline int anonymousEEPROM(int numMotes, int eepromSize);
static inline int namedEEPROM(char *name, int numMotes, int eepromSize);
# 60 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/events.h"
#line 55
typedef struct __nesc_unnamed4302 {
  int interval;
  int mote;
  int valid;
  int disabled;
} clock_tick_data_t;




#line 62
typedef struct __nesc_unnamed4303 {
  int valid;
  char port;
} adc_tick_data_t;





#line 67
typedef struct __nesc_unnamed4304 {
  int interval;
  int mote;
  int valid;
} radio_tick_data_t;





#line 73
typedef struct __nesc_unnamed4305 {
  int interval;
  int mote;
  int valid;
} channel_mon_data_t;







#line 79
typedef struct __nesc_unnamed4306 {
  int interval;
  int mote;
  int valid;
  int count;
  int ending;
} spi_byte_data_t;





#line 87
typedef struct __nesc_unnamed4307 {
  int interval;
  int mote;
  int valid;
} radio_timing_data_t;





static inline void event_default_cleanup(event_t *event);

static void event_total_cleanup(event_t *event);

static void event_clocktick_create(event_t *event, 
int mote, 
long long eventTime, 
int interval);

static inline void event_clocktick_handle(event_t *event, 
struct TOS_state *state);

static inline void event_clocktick_invalidate(event_t *event);
#line 122
static inline void event_adc_update(event_t *event, int mote, uint8_t port, long long eventTime, int interval);

static inline void event_adc_create(event_t *event, int mote, uint8_t port, long long eventTime, int interval);









void event_spi_byte_create(event_t *event, int mote, long long ftime, int interval, int count);
#line 146
static inline void event_cleanup(event_t *fevent);
# 49 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/types/AM.h"
enum __nesc_unnamed4308 {
  TOS_BCAST_ADDR = 0xffff, 
  TOS_UART_ADDR = 0x007e
};





enum __nesc_unnamed4309 {
  TOS_DEFAULT_AM_GROUP = 0x7d
};

uint8_t TOS_AM_GROUP = TOS_DEFAULT_AM_GROUP;
#line 105
#line 84
typedef struct TOS_Msg {


  uint16_t addr;
  uint8_t type;
  uint8_t group;
  uint8_t length;
  int8_t data[29];
  uint16_t crc;







  uint16_t strength;
  uint8_t ack;
  uint16_t time;
  uint8_t sendSecurityMode;
  uint8_t receiveSecurityMode;
} TOS_Msg;
#line 129
#line 107
typedef struct TOS_Msg_TinySecCompat {


  uint16_t addr;
  uint8_t type;

  uint8_t length;
  uint8_t group;
  int8_t data[29];
  uint16_t crc;







  uint16_t strength;
  uint8_t ack;
  uint16_t time;
  uint8_t sendSecurityMode;
  uint8_t receiveSecurityMode;
} TOS_Msg_TinySecCompat;
#line 150
#line 131
typedef struct TinySec_Msg {

  uint16_t addr;
  uint8_t type;
  uint8_t length;

  uint8_t iv[4];

  uint8_t enc[29];

  uint8_t mac[4];


  uint8_t calc_mac[4];
  uint8_t ack_byte;
  bool cryptoDone;
  bool receiveDone;

  bool MACcomputed;
} __attribute((packed))  TinySec_Msg;



enum __nesc_unnamed4310 {
  MSG_DATA_SIZE = (unsigned long )& ((struct TOS_Msg *)0)->crc + sizeof(uint16_t ), 
  TINYSEC_MSG_DATA_SIZE = (unsigned long )& ((struct TinySec_Msg *)0)->mac + 4, 
  DATA_LENGTH = 29, 
  LENGTH_BYTE_NUMBER = (unsigned long )& ((struct TOS_Msg *)0)->length + 1, 
  TINYSEC_NODE_ID_SIZE = sizeof(uint16_t )
};

enum __nesc_unnamed4311 {
  TINYSEC_AUTH_ONLY = 1, 
  TINYSEC_ENCRYPT_AND_AUTH = 2, 
  TINYSEC_DISABLED = 3, 
  TINYSEC_RECEIVE_AUTHENTICATED = 4, 
  TINYSEC_RECEIVE_CRC = 5, 
  TINYSEC_RECEIVE_ANY = 6, 
  TINYSEC_ENABLED_BIT = 128, 
  TINYSEC_ENCRYPT_ENABLED_BIT = 64
} __attribute((packed)) ;


typedef TOS_Msg *TOS_MsgPtr;
# 57 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/contrib/ptII/ptinyos/beta/TOSSIM-packet/packet_sim.h"
static inline void packet_sim_init(char *cFile);
static inline result_t packet_sim_transmit(TOS_MsgPtr msg);
void packet_sim_transmit_done(TOS_MsgPtr msg)   ;
TOS_MsgPtr packet_sim_receive_msg(TOS_MsgPtr msg)   ;
# 57 "/usr/include/sys/time.h" 3
struct timezone {

  int tz_minuteswest;
  int tz_dsttime;
};

typedef struct timezone *__restrict __timezone_ptr_t;









extern int gettimeofday(struct timeval *__restrict __tv, 
__timezone_ptr_t __tz) __attribute((__nothrow__)) __attribute((__nonnull__(1))) ;
#line 93
enum __itimer_which {


  ITIMER_REAL = 0, 


  ITIMER_VIRTUAL = 1, 



  ITIMER_PROF = 2
};




struct itimerval {


  struct timeval it_interval;

  struct timeval it_value;
};






typedef int __itimer_which_t;
# 86 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/contrib/ptII/ptinyos/beta/TOSSIM-packet/nido.h"
#line 83
typedef struct TOS_node_state {
  long long time;
  int pot_setting;
} TOS_node_state_t;
#line 111
#line 88
typedef struct TOS_state {
  long long tos_time;
  int radio_kb_rate;
  short num_nodes;
  short current_node;
  TOS_node_state_t node_state[TOSNODES];
  event_queue_t queue;
  uint8_t radioModel;
  rfm_model *rfm;
  adc_model *adc;
  spatial_model *space;
  bool moteOn[TOSNODES];
  bool cancelBoot[TOSNODES];


  bool paused;



  void *pause_lock;
} 


TOS_state_t;






extern TOS_state_t tos_state;




void set_sim_rate(uint32_t );
uint32_t get_sim_rate(void);
static void __nesc_nido_initialise(int mote);
# 54 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/types/dbg_modes.h"
typedef long long TOS_dbg_mode;



enum __nesc_unnamed4312 {
  DBG_ALL = ~0ULL, 


  DBG_BOOT = 1ULL << 0, 
  DBG_CLOCK = 1ULL << 1, 
  DBG_TASK = 1ULL << 2, 
  DBG_SCHED = 1ULL << 3, 
  DBG_SENSOR = 1ULL << 4, 
  DBG_LED = 1ULL << 5, 
  DBG_CRYPTO = 1ULL << 6, 


  DBG_ROUTE = 1ULL << 7, 
  DBG_AM = 1ULL << 8, 
  DBG_CRC = 1ULL << 9, 
  DBG_PACKET = 1ULL << 10, 
  DBG_ENCODE = 1ULL << 11, 
  DBG_RADIO = 1ULL << 12, 


  DBG_LOG = 1ULL << 13, 
  DBG_ADC = 1ULL << 14, 
  DBG_I2C = 1ULL << 15, 
  DBG_UART = 1ULL << 16, 
  DBG_PROG = 1ULL << 17, 
  DBG_SOUNDER = 1ULL << 18, 
  DBG_TIME = 1ULL << 19, 
  DBG_POWER = 1ULL << 20, 



  DBG_SIM = 1ULL << 21, 
  DBG_QUEUE = 1ULL << 22, 
  DBG_SIMRADIO = 1ULL << 23, 
  DBG_HARD = 1ULL << 24, 
  DBG_MEM = 1ULL << 25, 



  DBG_USR1 = 1ULL << 27, 
  DBG_USR2 = 1ULL << 28, 
  DBG_USR3 = 1ULL << 29, 
  DBG_TEMP = 1ULL << 30, 

  DBG_ERROR = 1ULL << 31, 
  DBG_NONE = 0, 

  DBG_DEFAULT = DBG_ALL
};
# 132 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/contrib/ptII/ptinyos/beta/TOSSIM-packet/nido.h"
static inline void tos_state_model_init(void );
#line 145
void ptII_cleanup(void);
extern void ptII_updateLeds(int moteID, short red, short green, short yellow);
extern void ptII_send_packet(TOS_MsgPtr msg);


extern void ptII_MonitorNotify(void *monitorObject);
extern void ptII_MonitorWait(void *monitorObject);
# 48 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/hardware.nido.h"
static inline void init_hardware(void);

static short set_io_bit(char port, char bit);
static inline short clear_io_bit(char port, char bit);
#line 219
enum __nesc_unnamed4313 {
  TOSH_period16 = 0x00, 
  TOSH_period32 = 0x01, 
  TOSH_period64 = 0x02, 
  TOSH_period128 = 0x03, 
  TOSH_period256 = 0x04, 
  TOSH_period512 = 0x05, 
  TOSH_period1024 = 0x06, 
  TOSH_period2048 = 0x07
};



enum __nesc_unnamed4314 {

  TOSH_ACTUAL_CC_RSSI_PORT = 0, 
  TOSH_ACTUAL_VOLTAGE_PORT = 7, 
  TOSH_ACTUAL_BANDGAP_PORT = 30, 
  TOSH_ACTUAL_GND_PORT = 31
};

enum __nesc_unnamed4315 {

  TOS_ADC_CC_RSSI_PORT = 0, 
  TOS_ADC_VOLTAGE_PORT = 7, 
  TOS_ADC_BANDGAP_PORT = 10, 
  TOS_ADC_GND_PORT = 11
};
#line 265
static __inline void TOSH_SET_INT1_PIN(void);
#line 265
static __inline void TOSH_CLR_INT1_PIN(void);
#line 265
static __inline void TOSH_MAKE_INT1_OUTPUT(void);
#line 265
static __inline void TOSH_MAKE_INT1_INPUT(void);
static __inline void TOSH_SET_INT2_PIN(void);
#line 266
static __inline void TOSH_CLR_INT2_PIN(void);
#line 266
static __inline void TOSH_MAKE_INT2_OUTPUT(void);
#line 266
static __inline void TOSH_MAKE_INT2_INPUT(void);









static __inline void TOSH_SET_PW2_PIN(void);
#line 276
static __inline void TOSH_CLR_PW2_PIN(void);
# 44 "/usr/include/bits/uio.h"
struct iovec {

  void *iov_base;
  size_t iov_len;
};
# 35 "/usr/include/bits/socket.h"
typedef __socklen_t socklen_t;




enum __socket_type {

  SOCK_STREAM = 1, 


  SOCK_DGRAM = 2, 


  SOCK_RAW = 3, 

  SOCK_RDM = 4, 

  SOCK_SEQPACKET = 5, 


  SOCK_DCCP = 6, 

  SOCK_PACKET = 10, 







  SOCK_CLOEXEC = 02000000, 


  SOCK_NONBLOCK = 04000
};
# 29 "/usr/include/bits/sockaddr.h"
typedef unsigned short int sa_family_t;
# 174 "/usr/include/bits/socket.h"
struct sockaddr {

  sa_family_t sa_family;
  char sa_data[14];
};








struct sockaddr_storage {

  sa_family_t ss_family;
  unsigned long int __ss_align;
  char __ss_padding[128 - 2 * sizeof(unsigned long int )];
};



enum __nesc_unnamed4316 {

  MSG_OOB = 0x01, 

  MSG_PEEK = 0x02, 

  MSG_DONTROUTE = 0x04, 






  MSG_CTRUNC = 0x08, 

  MSG_PROXY = 0x10, 

  MSG_TRUNC = 0x20, 

  MSG_DONTWAIT = 0x40, 

  MSG_EOR = 0x80, 

  MSG_WAITALL = 0x100, 

  MSG_FIN = 0x200, 

  MSG_SYN = 0x400, 

  MSG_CONFIRM = 0x800, 

  MSG_RST = 0x1000, 

  MSG_ERRQUEUE = 0x2000, 

  MSG_NOSIGNAL = 0x4000, 

  MSG_MORE = 0x8000, 

  MSG_WAITFORONE = 0x10000, 


  MSG_CMSG_CLOEXEC = 0x40000000
};







struct msghdr {

  void *msg_name;
  socklen_t msg_namelen;

  struct iovec *msg_iov;
  size_t msg_iovlen;

  void *msg_control;
  size_t msg_controllen;




  int msg_flags;
};
# 274 "/usr/include/bits/socket.h" 3
struct cmsghdr {

  size_t cmsg_len;




  int cmsg_level;
  int cmsg_type;

  __extension__ unsigned char __cmsg_data[];
};
#line 304
struct cmsghdr;
#line 331
enum __nesc_unnamed4317 {

  SCM_RIGHTS = 0x01
};
#line 411
struct linger {

  int l_onoff;
  int l_linger;
};
# 45 "/usr/include/sys/socket.h"
struct osockaddr {

  unsigned short int sa_family;
  unsigned char sa_data[14];
};




enum __nesc_unnamed4318 {

  SHUT_RD = 0, 

  SHUT_WR, 

  SHUT_RDWR
};
# 32 "/usr/include/netinet/in.h"
typedef uint32_t in_addr_t;
struct in_addr {

  in_addr_t s_addr;
};
# 111 "/usr/include/bits/in.h"
struct ip_opts {

  struct in_addr ip_dst;
  char ip_opts[40];
};


struct ip_mreqn {

  struct in_addr imr_multiaddr;
  struct in_addr imr_address;
  int imr_ifindex;
};


struct in_pktinfo {

  int ipi_ifindex;
  struct in_addr ipi_spec_dst;
  struct in_addr ipi_addr;
};
# 42 "/usr/include/netinet/in.h"
enum __nesc_unnamed4319 {

  IPPROTO_IP = 0, 

  IPPROTO_ICMP = 1, 

  IPPROTO_IGMP = 2, 

  IPPROTO_IPIP = 4, 

  IPPROTO_TCP = 6, 

  IPPROTO_EGP = 8, 

  IPPROTO_PUP = 12, 

  IPPROTO_UDP = 17, 

  IPPROTO_IDP = 22, 

  IPPROTO_TP = 29, 

  IPPROTO_DCCP = 33, 

  IPPROTO_IPV6 = 41, 

  IPPROTO_RSVP = 46, 

  IPPROTO_GRE = 47, 

  IPPROTO_ESP = 50, 

  IPPROTO_AH = 51, 

  IPPROTO_MTP = 92, 

  IPPROTO_BEETPH = 94, 

  IPPROTO_ENCAP = 98, 

  IPPROTO_PIM = 103, 

  IPPROTO_COMP = 108, 

  IPPROTO_SCTP = 132, 

  IPPROTO_UDPLITE = 136, 

  IPPROTO_RAW = 255, 

  IPPROTO_MAX
};





enum __nesc_unnamed4320 {

  IPPROTO_HOPOPTS = 0, 

  IPPROTO_ROUTING = 43, 

  IPPROTO_FRAGMENT = 44, 

  IPPROTO_ICMPV6 = 58, 

  IPPROTO_NONE = 59, 

  IPPROTO_DSTOPTS = 60, 

  IPPROTO_MH = 135
};




typedef uint16_t in_port_t;


enum __nesc_unnamed4321 {

  IPPORT_ECHO = 7, 
  IPPORT_DISCARD = 9, 
  IPPORT_SYSTAT = 11, 
  IPPORT_DAYTIME = 13, 
  IPPORT_NETSTAT = 15, 
  IPPORT_FTP = 21, 
  IPPORT_TELNET = 23, 
  IPPORT_SMTP = 25, 
  IPPORT_TIMESERVER = 37, 
  IPPORT_NAMESERVER = 42, 
  IPPORT_WHOIS = 43, 
  IPPORT_MTP = 57, 

  IPPORT_TFTP = 69, 
  IPPORT_RJE = 77, 
  IPPORT_FINGER = 79, 
  IPPORT_TTYLINK = 87, 
  IPPORT_SUPDUP = 95, 


  IPPORT_EXECSERVER = 512, 
  IPPORT_LOGINSERVER = 513, 
  IPPORT_CMDSERVER = 514, 
  IPPORT_EFSSERVER = 520, 


  IPPORT_BIFFUDP = 512, 
  IPPORT_WHOSERVER = 513, 
  IPPORT_ROUTESERVER = 520, 


  IPPORT_RESERVED = 1024, 


  IPPORT_USERRESERVED = 5000
};
#line 211
struct in6_addr {

  union __nesc_unnamed4322 {

    uint8_t __u6_addr8[16];

    uint16_t __u6_addr16[8];
    uint32_t __u6_addr32[4];
  } 
  __in6_u;
};







struct in6_addr;
struct in6_addr;








struct sockaddr_in {

  sa_family_t sin_family;
  in_port_t sin_port;
  struct in_addr sin_addr;


  unsigned char sin_zero

  [
#line 246
  sizeof(struct sockaddr ) - 
  sizeof(unsigned short int ) - 
  sizeof(in_port_t ) - 
  sizeof(struct in_addr )];
};



struct sockaddr_in6 {

  sa_family_t sin6_family;
  in_port_t sin6_port;
  uint32_t sin6_flowinfo;
  struct in6_addr sin6_addr;
  uint32_t sin6_scope_id;
};




struct ip_mreq {


  struct in_addr imr_multiaddr;


  struct in_addr imr_interface;
};

struct ip_mreq_source {


  struct in_addr imr_multiaddr;


  struct in_addr imr_interface;


  struct in_addr imr_sourceaddr;
};




struct ipv6_mreq {


  struct in6_addr ipv6mr_multiaddr;


  unsigned int ipv6mr_interface;
};




struct group_req {


  uint32_t gr_interface;


  struct sockaddr_storage gr_group;
};

struct group_source_req {


  uint32_t gsr_interface;


  struct sockaddr_storage gsr_group;


  struct sockaddr_storage gsr_source;
};



struct ip_msfilter {


  struct in_addr imsf_multiaddr;


  struct in_addr imsf_interface;


  uint32_t imsf_fmode;


  uint32_t imsf_numsrc;

  struct in_addr imsf_slist[1];
};





struct group_filter {


  uint32_t gf_interface;


  struct sockaddr_storage gf_group;


  uint32_t gf_fmode;


  uint32_t gf_numsrc;

  struct sockaddr_storage gf_slist[1];
};
#line 377
extern uint16_t ntohs(uint16_t __netshort) 
__attribute((__nothrow__)) __attribute((const)) ;


extern uint16_t htons(uint16_t __hostshort) 
__attribute((__nothrow__)) __attribute((const)) ;
# 256 "/usr/include/unistd.h" 3
typedef __useconds_t useconds_t;
#line 331
extern __off_t lseek(int __fd, __off_t __offset, int __whence) __attribute((__nothrow__)) ;
#line 363
extern ssize_t write(int __fd, const void *__buf, size_t __n);
#line 441
extern unsigned int sleep(unsigned int __seconds);
#line 457
extern int usleep(__useconds_t __useconds);
# 26 "/usr/include/bits/confname.h"
enum __nesc_unnamed4323 {

  _PC_LINK_MAX, 

  _PC_MAX_CANON, 

  _PC_MAX_INPUT, 

  _PC_NAME_MAX, 

  _PC_PATH_MAX, 

  _PC_PIPE_BUF, 

  _PC_CHOWN_RESTRICTED, 

  _PC_NO_TRUNC, 

  _PC_VDISABLE, 

  _PC_SYNC_IO, 

  _PC_ASYNC_IO, 

  _PC_PRIO_IO, 

  _PC_SOCK_MAXBUF, 

  _PC_FILESIZEBITS, 

  _PC_REC_INCR_XFER_SIZE, 

  _PC_REC_MAX_XFER_SIZE, 

  _PC_REC_MIN_XFER_SIZE, 

  _PC_REC_XFER_ALIGN, 

  _PC_ALLOC_SIZE_MIN, 

  _PC_SYMLINK_MAX, 

  _PC_2_SYMLINKS
};



enum __nesc_unnamed4324 {

  _SC_ARG_MAX, 

  _SC_CHILD_MAX, 

  _SC_CLK_TCK, 

  _SC_NGROUPS_MAX, 

  _SC_OPEN_MAX, 

  _SC_STREAM_MAX, 

  _SC_TZNAME_MAX, 

  _SC_JOB_CONTROL, 

  _SC_SAVED_IDS, 

  _SC_REALTIME_SIGNALS, 

  _SC_PRIORITY_SCHEDULING, 

  _SC_TIMERS, 

  _SC_ASYNCHRONOUS_IO, 

  _SC_PRIORITIZED_IO, 

  _SC_SYNCHRONIZED_IO, 

  _SC_FSYNC, 

  _SC_MAPPED_FILES, 

  _SC_MEMLOCK, 

  _SC_MEMLOCK_RANGE, 

  _SC_MEMORY_PROTECTION, 

  _SC_MESSAGE_PASSING, 

  _SC_SEMAPHORES, 

  _SC_SHARED_MEMORY_OBJECTS, 

  _SC_AIO_LISTIO_MAX, 

  _SC_AIO_MAX, 

  _SC_AIO_PRIO_DELTA_MAX, 

  _SC_DELAYTIMER_MAX, 

  _SC_MQ_OPEN_MAX, 

  _SC_MQ_PRIO_MAX, 

  _SC_VERSION, 

  _SC_PAGESIZE, 


  _SC_RTSIG_MAX, 

  _SC_SEM_NSEMS_MAX, 

  _SC_SEM_VALUE_MAX, 

  _SC_SIGQUEUE_MAX, 

  _SC_TIMER_MAX, 




  _SC_BC_BASE_MAX, 

  _SC_BC_DIM_MAX, 

  _SC_BC_SCALE_MAX, 

  _SC_BC_STRING_MAX, 

  _SC_COLL_WEIGHTS_MAX, 

  _SC_EQUIV_CLASS_MAX, 

  _SC_EXPR_NEST_MAX, 

  _SC_LINE_MAX, 

  _SC_RE_DUP_MAX, 

  _SC_CHARCLASS_NAME_MAX, 


  _SC_2_VERSION, 

  _SC_2_C_BIND, 

  _SC_2_C_DEV, 

  _SC_2_FORT_DEV, 

  _SC_2_FORT_RUN, 

  _SC_2_SW_DEV, 

  _SC_2_LOCALEDEF, 


  _SC_PII, 

  _SC_PII_XTI, 

  _SC_PII_SOCKET, 

  _SC_PII_INTERNET, 

  _SC_PII_OSI, 

  _SC_POLL, 

  _SC_SELECT, 

  _SC_UIO_MAXIOV, 

  _SC_IOV_MAX = _SC_UIO_MAXIOV, 

  _SC_PII_INTERNET_STREAM, 

  _SC_PII_INTERNET_DGRAM, 

  _SC_PII_OSI_COTS, 

  _SC_PII_OSI_CLTS, 

  _SC_PII_OSI_M, 

  _SC_T_IOV_MAX, 



  _SC_THREADS, 

  _SC_THREAD_SAFE_FUNCTIONS, 

  _SC_GETGR_R_SIZE_MAX, 

  _SC_GETPW_R_SIZE_MAX, 

  _SC_LOGIN_NAME_MAX, 

  _SC_TTY_NAME_MAX, 

  _SC_THREAD_DESTRUCTOR_ITERATIONS, 

  _SC_THREAD_KEYS_MAX, 

  _SC_THREAD_STACK_MIN, 

  _SC_THREAD_THREADS_MAX, 

  _SC_THREAD_ATTR_STACKADDR, 

  _SC_THREAD_ATTR_STACKSIZE, 

  _SC_THREAD_PRIORITY_SCHEDULING, 

  _SC_THREAD_PRIO_INHERIT, 

  _SC_THREAD_PRIO_PROTECT, 

  _SC_THREAD_PROCESS_SHARED, 


  _SC_NPROCESSORS_CONF, 

  _SC_NPROCESSORS_ONLN, 

  _SC_PHYS_PAGES, 

  _SC_AVPHYS_PAGES, 

  _SC_ATEXIT_MAX, 

  _SC_PASS_MAX, 


  _SC_XOPEN_VERSION, 

  _SC_XOPEN_XCU_VERSION, 

  _SC_XOPEN_UNIX, 

  _SC_XOPEN_CRYPT, 

  _SC_XOPEN_ENH_I18N, 

  _SC_XOPEN_SHM, 


  _SC_2_CHAR_TERM, 

  _SC_2_C_VERSION, 

  _SC_2_UPE, 


  _SC_XOPEN_XPG2, 

  _SC_XOPEN_XPG3, 

  _SC_XOPEN_XPG4, 


  _SC_CHAR_BIT, 

  _SC_CHAR_MAX, 

  _SC_CHAR_MIN, 

  _SC_INT_MAX, 

  _SC_INT_MIN, 

  _SC_LONG_BIT, 

  _SC_WORD_BIT, 

  _SC_MB_LEN_MAX, 

  _SC_NZERO, 

  _SC_SSIZE_MAX, 

  _SC_SCHAR_MAX, 

  _SC_SCHAR_MIN, 

  _SC_SHRT_MAX, 

  _SC_SHRT_MIN, 

  _SC_UCHAR_MAX, 

  _SC_UINT_MAX, 

  _SC_ULONG_MAX, 

  _SC_USHRT_MAX, 


  _SC_NL_ARGMAX, 

  _SC_NL_LANGMAX, 

  _SC_NL_MSGMAX, 

  _SC_NL_NMAX, 

  _SC_NL_SETMAX, 

  _SC_NL_TEXTMAX, 


  _SC_XBS5_ILP32_OFF32, 

  _SC_XBS5_ILP32_OFFBIG, 

  _SC_XBS5_LP64_OFF64, 

  _SC_XBS5_LPBIG_OFFBIG, 


  _SC_XOPEN_LEGACY, 

  _SC_XOPEN_REALTIME, 

  _SC_XOPEN_REALTIME_THREADS, 


  _SC_ADVISORY_INFO, 

  _SC_BARRIERS, 

  _SC_BASE, 

  _SC_C_LANG_SUPPORT, 

  _SC_C_LANG_SUPPORT_R, 

  _SC_CLOCK_SELECTION, 

  _SC_CPUTIME, 

  _SC_THREAD_CPUTIME, 

  _SC_DEVICE_IO, 

  _SC_DEVICE_SPECIFIC, 

  _SC_DEVICE_SPECIFIC_R, 

  _SC_FD_MGMT, 

  _SC_FIFO, 

  _SC_PIPE, 

  _SC_FILE_ATTRIBUTES, 

  _SC_FILE_LOCKING, 

  _SC_FILE_SYSTEM, 

  _SC_MONOTONIC_CLOCK, 

  _SC_MULTI_PROCESS, 

  _SC_SINGLE_PROCESS, 

  _SC_NETWORKING, 

  _SC_READER_WRITER_LOCKS, 

  _SC_SPIN_LOCKS, 

  _SC_REGEXP, 

  _SC_REGEX_VERSION, 

  _SC_SHELL, 

  _SC_SIGNALS, 

  _SC_SPAWN, 

  _SC_SPORADIC_SERVER, 

  _SC_THREAD_SPORADIC_SERVER, 

  _SC_SYSTEM_DATABASE, 

  _SC_SYSTEM_DATABASE_R, 

  _SC_TIMEOUTS, 

  _SC_TYPED_MEMORY_OBJECTS, 

  _SC_USER_GROUPS, 

  _SC_USER_GROUPS_R, 

  _SC_2_PBS, 

  _SC_2_PBS_ACCOUNTING, 

  _SC_2_PBS_LOCATE, 

  _SC_2_PBS_MESSAGE, 

  _SC_2_PBS_TRACK, 

  _SC_SYMLOOP_MAX, 

  _SC_STREAMS, 

  _SC_2_PBS_CHECKPOINT, 


  _SC_V6_ILP32_OFF32, 

  _SC_V6_ILP32_OFFBIG, 

  _SC_V6_LP64_OFF64, 

  _SC_V6_LPBIG_OFFBIG, 


  _SC_HOST_NAME_MAX, 

  _SC_TRACE, 

  _SC_TRACE_EVENT_FILTER, 

  _SC_TRACE_INHERIT, 

  _SC_TRACE_LOG, 


  _SC_LEVEL1_ICACHE_SIZE, 

  _SC_LEVEL1_ICACHE_ASSOC, 

  _SC_LEVEL1_ICACHE_LINESIZE, 

  _SC_LEVEL1_DCACHE_SIZE, 

  _SC_LEVEL1_DCACHE_ASSOC, 

  _SC_LEVEL1_DCACHE_LINESIZE, 

  _SC_LEVEL2_CACHE_SIZE, 

  _SC_LEVEL2_CACHE_ASSOC, 

  _SC_LEVEL2_CACHE_LINESIZE, 

  _SC_LEVEL3_CACHE_SIZE, 

  _SC_LEVEL3_CACHE_ASSOC, 

  _SC_LEVEL3_CACHE_LINESIZE, 

  _SC_LEVEL4_CACHE_SIZE, 

  _SC_LEVEL4_CACHE_ASSOC, 

  _SC_LEVEL4_CACHE_LINESIZE, 



  _SC_IPV6 = _SC_LEVEL1_ICACHE_SIZE + 50, 

  _SC_RAW_SOCKETS, 


  _SC_V7_ILP32_OFF32, 

  _SC_V7_ILP32_OFFBIG, 

  _SC_V7_LP64_OFF64, 

  _SC_V7_LPBIG_OFFBIG, 


  _SC_SS_REPL_MAX, 


  _SC_TRACE_EVENT_NAME_MAX, 

  _SC_TRACE_NAME_MAX, 

  _SC_TRACE_SYS_MAX, 

  _SC_TRACE_USER_EVENT_MAX, 


  _SC_XOPEN_STREAMS, 


  _SC_THREAD_ROBUST_PRIO_INHERIT, 

  _SC_THREAD_ROBUST_PRIO_PROTECT
};



enum __nesc_unnamed4325 {

  _CS_PATH, 


  _CS_V6_WIDTH_RESTRICTED_ENVS, 



  _CS_GNU_LIBC_VERSION, 

  _CS_GNU_LIBPTHREAD_VERSION, 


  _CS_V5_WIDTH_RESTRICTED_ENVS, 



  _CS_V7_WIDTH_RESTRICTED_ENVS, 



  _CS_LFS_CFLAGS = 1000, 

  _CS_LFS_LDFLAGS, 

  _CS_LFS_LIBS, 

  _CS_LFS_LINTFLAGS, 

  _CS_LFS64_CFLAGS, 

  _CS_LFS64_LDFLAGS, 

  _CS_LFS64_LIBS, 

  _CS_LFS64_LINTFLAGS, 


  _CS_XBS5_ILP32_OFF32_CFLAGS = 1100, 

  _CS_XBS5_ILP32_OFF32_LDFLAGS, 

  _CS_XBS5_ILP32_OFF32_LIBS, 

  _CS_XBS5_ILP32_OFF32_LINTFLAGS, 

  _CS_XBS5_ILP32_OFFBIG_CFLAGS, 

  _CS_XBS5_ILP32_OFFBIG_LDFLAGS, 

  _CS_XBS5_ILP32_OFFBIG_LIBS, 

  _CS_XBS5_ILP32_OFFBIG_LINTFLAGS, 

  _CS_XBS5_LP64_OFF64_CFLAGS, 

  _CS_XBS5_LP64_OFF64_LDFLAGS, 

  _CS_XBS5_LP64_OFF64_LIBS, 

  _CS_XBS5_LP64_OFF64_LINTFLAGS, 

  _CS_XBS5_LPBIG_OFFBIG_CFLAGS, 

  _CS_XBS5_LPBIG_OFFBIG_LDFLAGS, 

  _CS_XBS5_LPBIG_OFFBIG_LIBS, 

  _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS, 


  _CS_POSIX_V6_ILP32_OFF32_CFLAGS, 

  _CS_POSIX_V6_ILP32_OFF32_LDFLAGS, 

  _CS_POSIX_V6_ILP32_OFF32_LIBS, 

  _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS, 

  _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS, 

  _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS, 

  _CS_POSIX_V6_ILP32_OFFBIG_LIBS, 

  _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS, 

  _CS_POSIX_V6_LP64_OFF64_CFLAGS, 

  _CS_POSIX_V6_LP64_OFF64_LDFLAGS, 

  _CS_POSIX_V6_LP64_OFF64_LIBS, 

  _CS_POSIX_V6_LP64_OFF64_LINTFLAGS, 

  _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS, 

  _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS, 

  _CS_POSIX_V6_LPBIG_OFFBIG_LIBS, 

  _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS, 


  _CS_POSIX_V7_ILP32_OFF32_CFLAGS, 

  _CS_POSIX_V7_ILP32_OFF32_LDFLAGS, 

  _CS_POSIX_V7_ILP32_OFF32_LIBS, 

  _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS, 

  _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS, 

  _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS, 

  _CS_POSIX_V7_ILP32_OFFBIG_LIBS, 

  _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS, 

  _CS_POSIX_V7_LP64_OFF64_CFLAGS, 

  _CS_POSIX_V7_LP64_OFF64_LDFLAGS, 

  _CS_POSIX_V7_LP64_OFF64_LIBS, 

  _CS_POSIX_V7_LP64_OFF64_LINTFLAGS, 

  _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS, 

  _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS, 

  _CS_POSIX_V7_LPBIG_OFFBIG_LIBS, 

  _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS, 


  _CS_V6_ENV, 

  _CS_V7_ENV
};
# 845 "/usr/include/unistd.h" 3
extern int unlink(const char *__name) __attribute((__nothrow__)) __attribute((__nonnull__(1))) ;
# 47 "/usr/include/bits/errno.h" 3
extern int *__errno_location(void ) __attribute((__nothrow__)) __attribute((const)) ;
# 47 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/external_comm.h"
 static int socketsInitialized = 0;
static inline void initializeSockets(void);


static inline int readTossimCommand(void *socketChannel, int clidx);
static void buildTossimEvent(uint16_t moteID, uint16_t type, long long ftime, void *data, 
unsigned char **msgp, int *lenp);
static void sendTossimEvent(uint16_t moteID, uint16_t type, long long ftime, void *data);



static int writeTossimEvent(void *data, int datalen, void *socketChannel);




static char *currentTime(void);
static inline int printTime(char *buf, int len);
static int printOtherTime(char *buf, int len, long long int ftime);


extern void ptII_startThreads(void);
extern int ptII_joinThreads(void);
# 58 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/GuiMsg.h"
enum __nesc_unnamed4326 {

  AM_DEBUGMSGEVENT = 1, 
  AM_RADIOMSGSENTEVENT = 1 << 1, 
  AM_UARTMSGSENTEVENT = 1 << 2, 
  AM_ADCDATAREADYEVENT = 1 << 3, 
  AM_TOSSIMINITEVENT = 1 << 4, 
  AM_INTERRUPTEVENT = 1 << 5, 
  AM_LEDEVENT = 1 << 6, 






  AM_TURNONMOTECOMMAND = 1 << 12, 
  AM_TURNOFFMOTECOMMAND, 
  AM_RADIOMSGSENDCOMMAND, 
  AM_UARTMSGSENDCOMMAND, 
  AM_SETLINKPROBCOMMAND, 
  AM_SETADCPORTVALUECOMMAND, 
  AM_INTERRUPTCOMMAND, 
  AM_SETRATECOMMAND, 
  AM_SETDBGCOMMAND, 
  AM_VARIABLERESOLVECOMMAND, 
  AM_VARIABLERESOLVERESPONSE, 
  AM_VARIABLEREQUESTCOMMAND, 
  AM_VARIABLEREQUESTRESPONSE, 
  AM_GETMOTECOUNTCOMMAND, 
  AM_GETMOTECOUNTRESPONSE, 
  AM_SETEVENTMASKCOMMAND, 
  AM_BEGINBATCHCOMMAND, 
  AM_ENDBATCHCOMMAND
};
#line 104
#line 99
typedef struct GuiMsg {
  uint16_t msgType;
  uint16_t moteID;
  long long time;
  uint16_t payLoadLen;
} GuiMsg;








#line 111
typedef struct DebugMsgEvent {
  char debugMessage[512];
} DebugMsgEvent;




#line 116
typedef struct RadioMsgSentEvent {
  TOS_Msg message;
} RadioMsgSentEvent;




#line 121
typedef struct UARTMsgSentEvent {
  TOS_Msg message;
} UARTMsgSentEvent;





#line 126
typedef struct ADCDataReadyEvent {
  uint8_t port;
  uint16_t data;
} ADCDataReadyEvent;





#line 132
typedef struct VariableResolveResponse {
  uint32_t addr;
  uint32_t length;
} VariableResolveResponse;





#line 138
typedef struct VariableRequestResponse {
  uint32_t length;
  char value[256];
} VariableRequestResponse;






#line 144
typedef struct TossimInitEvent {
  int numMotes;
  uint8_t radioModel;
  uint32_t rate;
} __attribute((packed))  TossimInitEvent;




#line 151
typedef struct InterruptEvent {
  uint32_t id;
} InterruptEvent;



#line 156
typedef struct TurnOnMoteCommand {
} TurnOnMoteCommand;



#line 160
typedef struct TurnOffMoteCommand {
} TurnOffMoteCommand;




#line 164
typedef struct RadioMsgSendCommand {
  TOS_Msg message;
} RadioMsgSendCommand;




#line 169
typedef struct UARTMsgSendCommand {
  TOS_Msg message;
} UARTMsgSendCommand;





#line 174
typedef struct SetLinkProbCommand {
  uint16_t moteReceiver;
  uint32_t scaledProb;
} SetLinkProbCommand;





#line 180
typedef struct SetADCPortValueCommand {
  uint8_t port;
  uint16_t value;
} SetADCPortValueCommand;




#line 186
typedef struct VariableResolveCommand {
  char name[256];
} VariableResolveCommand;





#line 191
typedef struct VariableRequestCommand {
  uint32_t addr;
  uint8_t length;
} VariableRequestCommand;



#line 196
typedef struct InterruptCommand {
  uint32_t id;
} InterruptCommand;



#line 200
typedef struct SetRateCommand {
  uint32_t rate;
} SetRateCommand;





#line 204
typedef struct LedEvent {
  uint8_t red : 1;
  uint8_t green : 1;
  uint8_t yellow : 1;
} LedEvent;



#line 210
typedef struct SetDBGCommand {
  long long dbg;
} SetDBGCommand;



#line 214
typedef struct GetMoteCountCommand {
  uint8_t placeholder;
} GetMoteCountCommand;




#line 218
typedef struct GetMoteCountResponse {
  uint16_t totalMotes;
  uint8_t bitmask[(TOSNODES + 7) / 8];
} GetMoteCountResponse;



#line 223
typedef struct SetEventMaskCommand {
  uint16_t mask;
} SetEventMaskCommand;


#line 227
typedef struct BeginBatchCommand {
} BeginBatchCommand;


#line 230
typedef struct EndBatchCommand {
} EndBatchCommand;
# 75 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/types/dbg.h"
#line 72
typedef struct dbg_mode {
  char *d_name;
  unsigned long long d_mode;
} TOS_dbg_mode_names;

TOS_dbg_mode dbg_modes = 0;
 bool dbg_suppress_stdout = 0;

inline static bool dbg_active(TOS_dbg_mode mode);




inline static void dbg_add_mode(const char *mode);
inline static void dbg_add_modes(const char *modes);
inline static void dbg_init(void );
inline static void dbg_help(void );

inline static void dbg_set(TOS_dbg_mode );


extern void ptII_dbg(long long mode, char *msg, short nodenum, int useNodenum);



void dbg(TOS_dbg_mode mode, const char *format, ...)   ;
#line 140
void dbg_clear(TOS_dbg_mode mode, const char *format, ...)   ;
# 66 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/hardware.h"
extern  TOS_dbg_mode dbg_modes;


 TOS_state_t tos_state;









static inline void __nesc_atomic_sleep(void);






typedef uint8_t __nesc_atomic_t;

__inline __nesc_atomic_t __nesc_atomic_start(void )  ;




__inline void __nesc_atomic_end(__nesc_atomic_t oldSreg)  ;



static __inline void __nesc_enable_interrupt(void);



enum __nesc_unnamed4327 {
  TOSH_ADC_PORTMAPSIZE = 255
};
# 48 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/heap_array.c"
const int STARTING_SIZE = 511;






#line 52
typedef struct node {
  void *data;
  long long key;
} node_t;

static void down_heap(heap_t *heap, int findex);
static void up_heap(heap_t *heap, int findex);
static void swap(node_t *first, node_t *second);








static inline void init_heap(heap_t *heap);









static inline int is_empty(heap_t *heap);



static inline int heap_is_empty(heap_t *heap);



static inline long long heap_get_min_key(heap_t *heap);
#line 104
static void *heap_pop_min_data(heap_t *heap, long long *key);
#line 120
static inline void expand_heap(heap_t *heap);
#line 134
static inline void heap_insert(heap_t *heap, void *data, long long key);
#line 148
static void swap(node_t *first, node_t *second);
#line 161
static void down_heap(heap_t *heap, int findex);
#line 187
static void up_heap(heap_t *heap, int findex);
# 49 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/hardware.c"
 
#line 41
struct __nesc_unnamed4328 {
  char status_register;
  char register_A;
  char register_B;
  char register_C;
  char register_D;
  char register_E;
  char register_default;
} TOSH_pc_hardware;

static inline void init_hardware(void);







static short set_io_bit(char port, char bit);
#line 98
static inline short clear_io_bit(char port, char bit);
# 133 "/usr/include/time.h" 3
struct tm {

  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;


  long int tm_gmtoff;
  const char *tm_zone;
};
#line 161
struct itimerspec {

  struct timespec it_interval;
  struct timespec it_value;
};


struct sigevent;
#line 233
struct tm;



struct tm;





struct tm;




struct tm;
# 47 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/event_queue.c"
extern void *ptII_createMonitorObject(void);
extern int ptII_MonitorEnter(void *monitorObject);
extern int ptII_MonitorExit(void *monitorObject);


struct timespec;



static inline void queue_init(event_queue_t *queue, int fpause);









extern void ptII_queue_insert_event(long long eventTime);

static void queue_insert_event(event_queue_t *queue, event_t *event);
#line 81
static inline event_t *queue_pop_event(event_queue_t *queue);
#line 112
static int queue_is_empty(event_queue_t *queue);
#line 127
static long long queue_peek_event_time(event_queue_t *queue);
#line 148
static inline void queue_handle_next_event(event_queue_t *queue);
# 43 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/events.c"
static inline void event_default_cleanup(event_t *event);




static void event_total_cleanup(event_t *event);







static inline void event_cleanup(event_t *fevent);
# 11 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/powermod.h"
 double *cycles;
 int power_init;
 int prof_on;
 int cpu_prof_on;
# 39 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/hpl.c"
static int clockScales[8] = { -1, 122, 976, 3906, 7812, 15625, 31250, 125000 };

 static event_t *clockEvents[TOSNODES];
 static uint8_t intervals[TOSNODES];
 static uint8_t scales[TOSNODES];
 static long long setTime[TOSNODES];
 static uint8_t interruptPending[TOSNODES];

static inline void SIG_OUTPUT_COMPARE2_interrupt(void )  ;

static inline void TOSH_adc_data_ready(uint16_t data);




static void TOSH_clock_set_interval(uint8_t interval);
#line 86
static void TOSH_clock_set_rate(char interval, char scale);
#line 115
static inline uint8_t TOSH_get_clock_interval(void);








static uint8_t TOSH_get_clock0_counter(void);
#line 154
struct timeval;

static inline void event_clocktick_handle(event_t *event, 
struct TOS_state *state);
#line 197
static void event_clocktick_create(event_t *event, int mote, long long eventTime, int interval);
#line 217
static inline void event_clocktick_invalidate(event_t *event);










enum __nesc_unnamed4329 {
  ADC_LATENCY = 200
};



 static event_t *adcEvents[TOSNODES];
static char adcSamplingRates[TOSNODES];

static inline void TOSH_adc_init(void );









static void TOSH_adc_sample_port(uint8_t port);
#line 278
static void TOSH_adc_sample_stop(void );




static inline uint16_t get_adc_data(uint8_t port);



static inline void SIG_ADC_signal(void)  ;
#line 300
static inline void event_adc_handle(event_t *event, struct TOS_state *state);
#line 318
static inline void event_adc_update(event_t *event, int mote, uint8_t port, long long eventTime, int interval);







static inline void event_adc_create(event_t *event, int mote, uint8_t port, long long eventTime, int interval);
#line 351
enum __nesc_unnamed4330 {
  NOT_WAITING = 0, 
  WAITING_FOR_ONE_TO_PASS = 1, 
  WAITING_FOR_ONE_TO_CAPTURE = 2
};
#line 476
void event_spi_byte_create(event_t *fevent, int mote, long long ftime, int interval, int count)   ;
# 46 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/dbg.c"
static TOS_dbg_mode_names dbg_nametab[34] = { 
{ "all", DBG_ALL }, { "boot", DBG_BOOT | DBG_ERROR }, { "clock", DBG_CLOCK | DBG_ERROR }, { "task", DBG_TASK | DBG_ERROR }, { "sched", DBG_SCHED | DBG_ERROR }, { "sensor", DBG_SENSOR | DBG_ERROR }, { "led", DBG_LED | DBG_ERROR }, { "crypto", DBG_CRYPTO | DBG_ERROR }, { "route", DBG_ROUTE | DBG_ERROR }, { "am", DBG_AM | DBG_ERROR }, { "crc", DBG_CRC | DBG_ERROR }, { "packet", DBG_PACKET | DBG_ERROR }, { "encode", DBG_ENCODE | DBG_ERROR }, { "radio", DBG_RADIO | DBG_ERROR }, { "logger", DBG_LOG | DBG_ERROR }, { "adc", DBG_ADC | DBG_ERROR }, { "i2c", DBG_I2C | DBG_ERROR }, { "uart", DBG_UART | DBG_ERROR }, { "prog", DBG_PROG | DBG_ERROR }, { "sounder", DBG_SOUNDER | DBG_ERROR }, { "time", DBG_TIME | DBG_ERROR }, { "power", DBG_POWER | DBG_ERROR }, { "sim", DBG_SIM | DBG_ERROR }, { "queue", DBG_QUEUE | DBG_ERROR }, { "simradio", DBG_SIMRADIO | DBG_ERROR }, { "hardware", DBG_HARD | DBG_ERROR }, { "simmem", DBG_MEM | DBG_ERROR }, { "usr1", DBG_USR1 | DBG_ERROR }, { "usr2", DBG_USR2 | DBG_ERROR }, { "usr3", DBG_USR3 | DBG_ERROR }, { "temp", DBG_TEMP | DBG_ERROR }, { "error", DBG_ERROR }, { "none", DBG_NONE }, { (void *)0, DBG_ERROR } };






inline void dbg_set(TOS_dbg_mode modes);



inline void dbg_add_mode(const char *name);
#line 84
inline void dbg_add_modes(const char *modes);








inline void dbg_init(void );
#line 107
inline void dbg_help(void );
# 87 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/external_comm.c"
void *commandServerSocket = (void *)0;

void *eventServerSocket = (void *)0;


void *commandClients[4];
uint8_t batchState[4];


 void *eventClients[4];
 uint16_t eventMask;


extern void *ptII_serverSocketCreate(short port);
extern void ptII_serverSocketClose(void *serverSocket);
extern void *ptII_selectorCreate(void *serverSocket, bool opAccept, bool opConnect, bool opRead, bool opWrite);
extern void ptII_selectorRegister(void *selector, void *socketChannel, bool opAccept, bool opConnect, bool opRead, bool opWrite);
extern void ptII_selectorClose(void *selector);
extern void *ptII_selectSocket(void *selector, char *selectorIsClosing, bool opAccept, bool opConnect, bool opRead, bool opWrite);
extern void *ptII_acceptConnection(void *serverSocketChannel);
extern void ptII_socketChannelClose(void *socketChannel);
extern int ptII_socketChannelWrite(void *socketChannel, void *data, int datalen);
extern int ptII_socketChannelRead(void *socketChannel, void *data, int datalen);



void *selectorEventAcceptThread = (void *)0;
void *selectorCommandReadThread = (void *)0;



extern void *ptII_createMonitorObject(void);
extern int ptII_MonitorEnter(void *monitorObject);
extern int ptII_MonitorExit(void *monitorObject);
extern void ptII_MonitorNotifyAll(void *monitorObject);
extern void ptII_MonitorWait(void *monitorObject);





 void *eventClientsLock;



TOS_Msg external_comm_msgs_[TOSNODES];
TOS_MsgPtr external_comm_buffers_[TOSNODES];
 static int GUI_enabled;


void *eventAcceptThreadFunc(void *arg);
void *commandReadThreadFunc(void *arg);



static int __nesc_nido_resolve(int __nesc_mote, 
char *varname, 
uintptr_t *addr, size_t *size);
#line 161
static inline void initializeSockets(void);
#line 208
static void *acceptConnection(void *serverSocketChannel);
#line 276
void shutdownSockets(void)   ;
#line 357
static inline void waitForGuiConnection(void);
#line 387
static int printOtherTime(char *buf, int len, long long int ftime);
#line 404
static inline int printTime(char *buf, int len);



static char *currentTime(void);






static void addClient2(void *clientSockets[], void *socketChannel);
#line 446
static inline void sendInitEvent(void *socketChannel);
#line 466
void *eventAcceptThreadFunc(void *arg)   ;
#line 550
#line 547
typedef struct __nesc_unnamed4331 {
  GuiMsg *msg;
  char *payLoad;
} incoming_command_data_t;



void nido_start_mote(uint16_t moteID);
void nido_stop_mote(uint16_t moteID);
TOS_MsgPtr NIDO_received_radio(TOS_MsgPtr packet);
TOS_MsgPtr NIDO_received_uart(TOS_MsgPtr packet);
static inline void set_link_prob_value(uint16_t moteID1, uint16_t moteID2, double prob);

static inline void event_command_cleanup(event_t *event);





static inline void event_command_in_handle(event_t *event, 
struct TOS_state *state);
static inline void event_command_in_create(event_t *event, 
GuiMsg *msg, 
char *payLoad);
#line 592
static inline int processCommand(void *socketChannel, int clidx, GuiMsg *msg, char *payLoad, 
unsigned char **replyMsg, int *replyLen);
#line 722
static inline void event_command_in_handle(event_t *event, 
struct TOS_state *state);
#line 795
static inline int readTossimCommand(void *socketChannel, int clidx);
#line 911
void *commandReadThreadFunc(void *arg)   ;
#line 1036
static int writeTossimEvent(void *data, int datalen, void *socketChannel);
#line 1080
static void buildTossimEvent(uint16_t moteID, uint16_t type, long long ftime, void *data, 
unsigned char **msgp, int *lenp);
#line 1140
static void sendTossimEvent(uint16_t moteID, uint16_t type, long long ftime, void *data);
# 32 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/tos.c"
int signaled = 0;

long long rate_checkpoint_time;
double rate_value;

struct timeval startTime;
struct timeval thisTime;

void handle_signal(int sig)   ;
#line 52
static inline void init_signals(void );
#line 72
static inline double get_rate_value(void);



static inline void set_rate_value(double rate);



static inline void rate_checkpoint(void);





static inline void rate_based_wait(void);
# 48 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/sensorboard.h"
enum __nesc_unnamed4332 {
  TOSH_ACTUAL_PHOTO_PORT = 1, 
  TOSH_ACTUAL_TEMP_PORT = 1, 
  TOSH_ACTUAL_MIC_PORT = 2, 
  TOSH_ACTUAL_ACCEL_X_PORT = 3, 
  TOSH_ACTUAL_ACCEL_Y_PORT = 4, 
  TOSH_ACTUAL_MAG_X_PORT = 6, 
  TOSH_ACTUAL_MAG_Y_PORT = 5
};

enum __nesc_unnamed4333 {
  TOS_ADC_PHOTO_PORT = 1, 
  TOS_ADC_TEMP_PORT = 2, 
  TOS_ADC_MIC_PORT = 3, 
  TOS_ADC_ACCEL_X_PORT = 4, 
  TOS_ADC_ACCEL_Y_PORT = 5, 
  TOS_ADC_MAG_X_PORT = 6, 

  TOS_ADC_MAG_Y_PORT = 8
};

enum __nesc_unnamed4334 {
  TOS_MAG_POT_ADDR = 0, 
  TOS_MIC_POT_ADDR = 1
};



static __inline void TOSH_SET_PHOTO_CTL_PIN(void);
#line 76
static __inline void TOSH_CLR_PHOTO_CTL_PIN(void);
#line 76
static __inline void TOSH_MAKE_PHOTO_CTL_OUTPUT(void);
#line 76
static __inline void TOSH_MAKE_PHOTO_CTL_INPUT(void);
static __inline void TOSH_SET_TEMP_CTL_PIN(void);
#line 77
static __inline void TOSH_CLR_TEMP_CTL_PIN(void);
#line 77
static __inline void TOSH_MAKE_TEMP_CTL_OUTPUT(void);
#line 77
static __inline void TOSH_MAKE_TEMP_CTL_INPUT(void);

static __inline void TOSH_SET_SOUNDER_CTL_PIN(void);
#line 79
static __inline void TOSH_CLR_SOUNDER_CTL_PIN(void);
# 48 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/adc_model.c"
extern void *ptII_createMonitorObject(void);
extern int ptII_MonitorEnter(void *monitorObject);
extern int ptII_MonitorExit(void *monitorObject);




static inline void random_adc_init(void);

static inline uint16_t random_adc_read(int moteID, uint8_t port, long long ftime);



static inline adc_model *create_random_adc_model(void);










enum __nesc_unnamed4335 {
  ADC_NUM_PORTS_PER_NODE = 256
};

uint16_t adcValues[TOSNODES][ADC_NUM_PORTS_PER_NODE];


void *adcValuesLock;

static inline void generic_adc_init(void);
#line 94
extern uint16_t ptII_get_adc_value(char *portname);

static inline uint16_t generic_adc_read(int moteID, uint8_t port, long long ftime);
#line 142
static inline adc_model *create_generic_adc_model(void);






static inline void set_adc_value(int moteID, uint8_t port, uint16_t value);
# 49 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/spatial_model.c"
point3D *points;

static inline void simple_spatial_init(void);
#line 63
static inline void simple_spatial_get_position(int moteID, long long ftime, point3D *point);






static inline spatial_model *create_simple_spatial_model(void);
# 46 "/usr/include/bits/stat.h" 3
struct stat {

  __dev_t st_dev;




  __ino_t st_ino;







  __nlink_t st_nlink;
  __mode_t st_mode;

  __uid_t st_uid;
  __gid_t st_gid;

  int __pad0;

  __dev_t st_rdev;




  __off_t st_size;



  __blksize_t st_blksize;

  __blkcnt_t st_blocks;










  struct timespec st_atim;
  struct timespec st_mtim;
  struct timespec st_ctim;
#line 106
  long int __unused[3];
};
# 165 "/usr/include/bits/fcntl.h" 3
struct flock {

  short int l_type;
  short int l_whence;

  __off_t l_start;
  __off_t l_len;




  __pid_t l_pid;
};
# 131 "/usr/include/fcntl.h" 3
extern int open(const char *__file, int __oflag, ...) __attribute((__nonnull__(1))) ;
# 52 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/eeprom.c"
static char *local_filename;
static int numMotes = 0;
static int moteSize = 0;
static int initialized = 0;
static int local_fd = -1;

static int createEEPROM(char *file, int motes, int eempromBytes);
#line 91
static inline int anonymousEEPROM(int fnumMotes, int eepromSize);
#line 104
static inline int namedEEPROM(char *name, int fnumMotes, int eepromSize);
# 61 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/sched.c"
#line 59
typedef struct __nesc_unnamed4336 {
  void (*tp)(void);
} TOSH_sched_entry_T;

enum __nesc_unnamed4337 {






  TOSH_MAX_TASKS = 8, 

  TOSH_TASK_BITMASK = TOSH_MAX_TASKS - 1
};

volatile TOSH_sched_entry_T TOSH_queue[TOSH_MAX_TASKS];
uint8_t TOSH_sched_full;
volatile uint8_t TOSH_sched_free;










bool TOS_post(void (*tp)(void));
#line 102
bool TOS_post(void (*tp)(void))  ;
#line 136
static bool TOSH_run_next_task(void);
# 149 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/tos.h"
static void *nmemcpy(void *to, const void *from, size_t n);









static inline void *nmemset(void *to, int val, size_t n);
# 28 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/Ident.h"
enum __nesc_unnamed4338 {

  IDENT_MAX_PROGRAM_NAME_LENGTH = 16
};






#line 33
typedef struct __nesc_unnamed4339 {

  uint32_t unix_time;
  uint32_t user_hash;
  char program_name[IDENT_MAX_PROGRAM_NAME_LENGTH];
} Ident_t;
# 39 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Timer.h"
enum __nesc_unnamed4340 {
  TIMER_REPEAT = 0, 
  TIMER_ONE_SHOT = 1, 
  NUM_TIMERS = 4U
};
# 36 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/PCRadio.h"
#line 33
typedef struct __nesc_unnamed4341 {
  TOS_MsgPtr msg;
  int success;
} uart_send_done_data_t;

enum __nesc_unnamed4342 {
  UART_SEND_DELAY = 1600
};



void NIDO_uart_send_done(TOS_MsgPtr fmsg, result_t fsuccess);

static inline void event_uart_write_create(event_t *uevent, int mote, long long utime, TOS_MsgPtr msg, result_t success);

static inline void event_uart_write_handle(event_t *uevent, 
struct TOS_state *state);
#line 61
static inline void event_uart_write_create(event_t *uevent, int mote, long long utime, TOS_MsgPtr msg, result_t success);
#line 77
static inline void TOSH_uart_send(TOS_MsgPtr msg);
# 47 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/adjacency_list.c"
static link_t *allocate_link(int mote);
#line 78
static int adjacency_list_init(void);
# 61 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/rfm_model.c"
extern void *ptII_createMonitorObject(void);
extern int ptII_MonitorEnter(void *monitorObject);
extern int ptII_MonitorExit(void *monitorObject);


char transmitting[TOSNODES];
int radio_active[TOSNODES];
link_t *radio_connectivity[TOSNODES];


void *radioConnectivityLock;





short radio_heard[TOSNODES];

bool radio_idle_state[TOSNODES];
double noise_prob = 0;

short IDLE_STATE_MASK = 0xffff;
char *lossyFileName = "lossy.nss";

static inline bool simple_connected(int moteID1, int moteID2);



static inline void simple_init(void);
#line 103
static inline void simple_transmit(int moteID, char bit);








static inline void simple_stops_transmit(int moteID);










static inline char simple_hears(int moteID);
#line 135
static inline link_t *simple_neighbors(int moteID);
#line 150
static inline rfm_model *create_simple_model(void);
#line 212
static void static_one_cell_init(void);
#line 369
static inline bool lossy_connected(int moteID1, int moteID2);
#line 402
static inline void lossy_transmit(int moteID, char bit);
#line 428
static inline void lossy_stop_transmit(int moteID);
#line 447
static inline char lossy_hears(int moteID);
#line 468
static inline int read_lossy_entry(FILE *file, int *mote_one, int *mote_two, double *loss);
#line 547
static inline void lossy_init(void);
#line 596
static inline link_t *lossy_neighbors(int moteID);
#line 611
static inline rfm_model *create_lossy_model(char *file);
#line 650
static inline void set_link_prob_value(uint16_t moteID1, uint16_t moteID2, double prob);
# 58 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/contrib/ptII/ptinyos/beta/TOSSIM-packet/packet_sim.c"
int byteTransmitTime = 8 * 104 * 2;
int initBackoffLow = 1 * (8 * 104);
int initBackoffHigh = 32 * (8 * 104);
int backoffLow = 1 * (8 * 104);
int backoffHigh = 16 * (8 * 104);
int txChangeLatency = 1000;
int preambleLength = 6;
int headerLength = 7;

struct IncomingMsg;





#line 69
typedef struct IncomingMsg {
  TOS_Msg msg;
  int fromID;
  struct IncomingMsg *next;
} IncomingMsg;







#line 75
typedef enum __nesc_unnamed4343 {
  RADIO_TX_IDLE, 
  RADIO_TX_BACK, 
  RADIO_TX_TRANS, 
  RADIO_RX_IDLE, 
  RADIO_RX_RECV
} PacketRadioState;

TOS_MsgPtr packet_transmitting[TOSNODES];

IncomingMsg *incoming[TOSNODES];
IncomingMsg *lastIncoming[TOSNODES];

TOS_Msg packet_sim_bufs[TOSNODES];
TOS_MsgPtr current_ptr[TOSNODES];

uint8_t rxState[TOSNODES];
uint8_t txState[TOSNODES];

link_t *packet_connectivity[TOSNODES];

static inline void connectivity_init(char *cFile);
static inline void initialBackoff(void);
static void event_backoff_create(event_t *event, int node, long long eventTime);
void event_backoff_handle(event_t *event, struct TOS_state *state)   ;

void event_start_transmit_handle(event_t *event, struct TOS_state *state)   ;
static inline void event_start_transmit_create(event_t *event, int node, long long eventTime);

void event_receive_packet_create(event_t *event, int node, long long eventTime, IncomingMsg *msg, bool noise)   ;
void event_receive_packet_handle(event_t *event, struct TOS_state *state)   ;
void event_receive_packet_noise_handle(event_t *event, struct TOS_state *state)   ;

void event_send_packet_done_create(event_t *event, int node, long long eventTime)   ;
void event_send_packet_done_handle(event_t *event, struct TOS_state *state)   ;

static bool removeIncomingEntry(int moteID, IncomingMsg *entry);
#line 160
static void addIncomingEntry(int moteID, IncomingMsg *entry);
#line 174
static inline void packet_sim_init(char *cFile);
#line 191
static inline result_t packet_sim_transmit(TOS_MsgPtr msg);









static inline void initialBackoff(void);
#line 216
static void event_backoff_create(event_t *event, int node, long long eventTime);










void event_backoff_handle(event_t *event, struct TOS_state *state)   ;
#line 248
static inline void event_start_transmit_create(event_t *event, int node, long long eventTime);









static void corruptPacket(IncomingMsg *msg, int src, int dest);









void event_start_transmit_handle(event_t *event, struct TOS_state *state)   ;
#line 350
void event_receive_packet_create(event_t *event, int node, long long eventTime, IncomingMsg *msg, bool deliver)   ;
#line 366
void event_receive_packet_noise_handle(event_t *event, struct TOS_state *state)   ;
#line 379
void event_receive_packet_handle(event_t *event, struct TOS_state *state)   ;
#line 398
void event_send_packet_done_create(event_t *event, int node, long long eventTime)   ;










void event_send_packet_done_handle(event_t *event, struct TOS_state *state)   ;
#line 429
static int read_int(FILE *file);
#line 459
static double read_double(FILE *file);
#line 490
static inline int read_packet_entry(FILE *file, int *mote_one, int *mote_two, double *packet_loss, double *falsePos, double *falseNeg);
#line 503
static inline void connectivity_init(char *cFile);
#line 526
void ptII_insert_packet_event(long long ptolemyTime, TOS_MsgPtr msg)   ;
# 34 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Clock.h"
enum __nesc_unnamed4344 {
  TOS_I1024PS = 0, TOS_S1024PS = 3, 
  TOS_I512PS = 1, TOS_S512PS = 3, 
  TOS_I256PS = 3, TOS_S256PS = 3, 
  TOS_I128PS = 7, TOS_S128PS = 3, 
  TOS_I64PS = 15, TOS_S64PS = 3, 
  TOS_I32PS = 31, TOS_S32PS = 3, 
  TOS_I16PS = 63, TOS_S16PS = 3, 
  TOS_I8PS = 127, TOS_S8PS = 3, 
  TOS_I4PS = 255, TOS_S4PS = 3, 
  TOS_I2PS = 15, TOS_S2PS = 7, 
  TOS_I1PS = 31, TOS_S1PS = 7, 
  TOS_I0PS = 0, TOS_S0PS = 0
};
enum __nesc_unnamed4345 {
  DEFAULT_SCALE = 3, DEFAULT_INTERVAL = 255
};
# 33 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../apps/Surge/Surge.h"
int INITIAL_TIMER_RATE = 2048;






enum __nesc_unnamed4346 {
  SURGE_TYPE_SENSORREADING = 0, 
  SURGE_TYPE_ROOTBEACON = 1, 
  SURGE_TYPE_SETRATE = 2, 
  SURGE_TYPE_SLEEP = 3, 
  SURGE_TYPE_WAKEUP = 4, 
  SURGE_TYPE_FOCUS = 5, 
  SURGE_TYPE_UNFOCUS = 6
};






#line 51
typedef struct SurgeMsg {
  uint8_t type;
  uint16_t reading;
  uint16_t parentaddr;
} __attribute((packed))  SurgeMsg;

enum __nesc_unnamed4347 {
  AM_SURGEMSG = 17
};
# 41 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../apps/Surge/SurgeCmd.h"
#line 32
typedef struct SurgeCmdMsg {
  uint8_t type;
  union __nesc_unnamed4348 {

    uint32_t newrate;

    uint16_t focusaddr;
  } args;
} 
__attribute((packed))  SurgeCmdMsg;

enum __nesc_unnamed4349 {
  AM_SURGECMDMSG = 18
};
# 35 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/ADC.h"
enum __nesc_unnamed4350 {
  TOS_ADCSample3750ns = 0, 
  TOS_ADCSample7500ns = 1, 
  TOS_ADCSample15us = 2, 
  TOS_ADCSample30us = 3, 
  TOS_ADCSample60us = 4, 
  TOS_ADCSample120us = 5, 
  TOS_ADCSample240us = 6, 
  TOS_ADCSample480us = 7
};
# 48 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Route/MultiHop.h"
enum __nesc_unnamed4351 {
  AM_MULTIHOPMSG = 250
};










#line 53
typedef struct TOS_MHopNeighbor {
  uint16_t addr;
  uint16_t recv_count;
  uint16_t fail_count;
  int16_t last_seqno;
  uint8_t goodness;
  uint8_t hopcount;
  uint8_t timeouts;
} TOS_MHopNeighbor;







#line 63
typedef struct MultihopMsg {
  uint16_t sourceaddr;
  uint16_t originaddr;
  int16_t seqno;
  uint8_t hopcount;
  uint8_t data[29 - 7];
} __attribute((packed))  TOS_MHopMsg;
# 52 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Broadcast/Bcast.h"
#line 49
typedef struct _BcastMsg {
  int16_t seqno;
  uint8_t data[29 - 2];
} __attribute((packed))  TOS_BcastMsg;
# 70 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
static  result_t SounderM$StdControl$start(void);







static  result_t SounderM$StdControl$stop(void);
# 48 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/SendMsg.nc"
static  result_t QueuedSendM$QueueSendMsg$send(
# 60 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Queue/QueuedSendM.nc"
uint8_t arg_0x7fa46abb65b8, 
# 48 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/SendMsg.nc"
uint16_t arg_0x7fa46abbf408, uint8_t arg_0x7fa46abbf6c0, TOS_MsgPtr arg_0x7fa46abbf980);
# 63 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
static  result_t QueuedSendM$StdControl$init(void);






static  result_t QueuedSendM$StdControl$start(void);







static  result_t QueuedSendM$StdControl$stop(void);
# 49 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/SendMsg.nc"
static  result_t QueuedSendM$SerialSendMsg$sendDone(
# 65 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Queue/QueuedSendM.nc"
uint8_t arg_0x7fa46abb5b10, 
# 49 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/SendMsg.nc"
TOS_MsgPtr arg_0x7fa46abbe210, result_t arg_0x7fa46abbe4d0);
# 75 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
static  TOS_MsgPtr AMPromiscuous$ReceiveMsg$default$receive(
# 57 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/AMPromiscuous.nc"
uint8_t arg_0x7fa46ab651d0, 
# 75 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
TOS_MsgPtr arg_0x7fa46ab6c360);
# 73 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Timer.nc"
static  result_t AMPromiscuous$ActivityTimer$fired(void);
# 67 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/BareSendMsg.nc"
static  result_t AMPromiscuous$UARTSend$sendDone(TOS_MsgPtr arg_0x7fa46ab5f1d8, result_t arg_0x7fa46ab5f498);
# 75 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
static  TOS_MsgPtr AMPromiscuous$RadioReceive$receive(TOS_MsgPtr arg_0x7fa46ab6c360);
# 65 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/CommControl.nc"
static  result_t AMPromiscuous$CommControl$setPromiscuous(bool arg_0x7fa46ab726f8);
# 63 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
static  result_t AMPromiscuous$Control$init(void);






static  result_t AMPromiscuous$Control$start(void);







static  result_t AMPromiscuous$Control$stop(void);
# 67 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/AMPromiscuous.nc"
static  result_t AMPromiscuous$default$sendDone(void);
# 67 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/BareSendMsg.nc"
static  result_t AMPromiscuous$RadioSend$sendDone(TOS_MsgPtr arg_0x7fa46ab5f1d8, result_t arg_0x7fa46ab5f498);
# 48 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/SendMsg.nc"
static  result_t AMPromiscuous$SendMsg$send(
# 56 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/AMPromiscuous.nc"
uint8_t arg_0x7fa46ab66568, 
# 48 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/SendMsg.nc"
uint16_t arg_0x7fa46abbf408, uint8_t arg_0x7fa46abbf6c0, TOS_MsgPtr arg_0x7fa46abbf980);
# 75 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
static  TOS_MsgPtr AMPromiscuous$UARTReceive$receive(TOS_MsgPtr arg_0x7fa46ab6c360);
# 63 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
static  result_t TossimPacketM$Control$init(void);






static  result_t TossimPacketM$Control$start(void);







static  result_t TossimPacketM$Control$stop(void);
# 75 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
static  TOS_MsgPtr TossimPacketM$ReceiveMain$receive(TOS_MsgPtr arg_0x7fa46ab6c360);
# 58 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/BareSendMsg.nc"
static  result_t Nido$RadioSendMsg$send(TOS_MsgPtr arg_0x7fa46ab60868);
#line 58
static  result_t UARTNoCRCPacketM$Send$send(TOS_MsgPtr arg_0x7fa46ab60868);
# 63 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
static  result_t UARTNoCRCPacketM$Control$init(void);






static  result_t UARTNoCRCPacketM$Control$start(void);







static  result_t UARTNoCRCPacketM$Control$stop(void);
# 106 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Leds.nc"
static   result_t NoLeds$Leds$greenToggle(void);
#line 81
static   result_t NoLeds$Leds$redToggle(void);
# 180 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Clock.nc"
static   result_t TimerM$Clock$fire(void);
# 63 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
static  result_t TimerM$StdControl$init(void);






static  result_t TimerM$StdControl$start(void);







static  result_t TimerM$StdControl$stop(void);
# 73 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Timer.nc"
static  result_t TimerM$Timer$default$fired(
# 49 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/TimerM.nc"
uint8_t arg_0x7fa46a86f8c0);
# 59 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Timer.nc"
static  result_t TimerM$Timer$start(
# 49 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/TimerM.nc"
uint8_t arg_0x7fa46a86f8c0, 
# 59 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Timer.nc"
char arg_0x7fa46ab515c0, uint32_t arg_0x7fa46ab51888);








static  result_t TimerM$Timer$stop(
# 49 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/TimerM.nc"
uint8_t arg_0x7fa46a86f8c0);
# 105 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Clock.nc"
static   void HPLClock$Clock$setInterval(uint8_t arg_0x7fa46a867bf0);
#line 153
static   uint8_t HPLClock$Clock$readCounter(void);
#line 96
static   result_t HPLClock$Clock$setRate(char arg_0x7fa46a860798, char arg_0x7fa46a860a48);
#line 121
static   uint8_t HPLClock$Clock$getInterval(void);
# 41 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/PowerManagement.nc"
static   uint8_t HPLPowerManagementM$PowerManagement$adjustPower(void);
# 119 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Send.nc"
static  result_t SurgeM$Send$sendDone(TOS_MsgPtr arg_0x7fa46a7cea88, result_t arg_0x7fa46a7ced48);
# 70 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/ADC.nc"
static   result_t SurgeM$ADC$dataReady(uint16_t arg_0x7fa46a7d87f0);
# 63 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
static  result_t SurgeM$StdControl$init(void);






static  result_t SurgeM$StdControl$start(void);







static  result_t SurgeM$StdControl$stop(void);
# 73 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Timer.nc"
static  result_t SurgeM$Timer$fired(void);
# 30 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/PowerState.nc"
static   void PowerStateM$PowerState$ADCdataReady(void);
#line 22
static   void PowerStateM$PowerState$CPUCycleCheckpoint(void);
#line 55
static   void PowerStateM$PowerState$sensorPhotoOn(void);
#line 14
static   result_t PowerStateM$PowerState$init(int arg_0x7fa46aaed390, int arg_0x7fa46aaed648);
#line 56
static   void PowerStateM$PowerState$sensorPhotoOff(void);
#line 29
static   void PowerStateM$PowerState$ADCsample(uint8_t arg_0x7fa46aaeca20);

static   void PowerStateM$PowerState$ADCon(void);
#line 18
static   result_t PowerStateM$PowerState$stop(void);
#line 9
static   double PowerStateM$PowerState$get_mote_cycles(int arg_0x7fa46aaeeb00);
# 56 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Leds.nc"
static   result_t LedsM$Leds$init(void);
# 75 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
static  TOS_MsgPtr MultiHopEngineM$ReceiveMsg$receive(
# 57 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Route/MultiHopEngineM.nc"
uint8_t arg_0x7fa46a6c95f0, 
# 75 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
TOS_MsgPtr arg_0x7fa46ab6c360);
# 86 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Intercept.nc"
static  result_t MultiHopEngineM$Intercept$default$intercept(
# 52 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Route/MultiHopEngineM.nc"
uint8_t arg_0x7fa46a6cb0c8, 
# 86 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Intercept.nc"
TOS_MsgPtr arg_0x7fa46a6d6060, void *arg_0x7fa46a6d6348, uint16_t arg_0x7fa46a6d6610);
# 83 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Send.nc"
static  result_t MultiHopEngineM$Send$send(
# 51 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Route/MultiHopEngineM.nc"
uint8_t arg_0x7fa46a6cd2f0, 
# 83 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Send.nc"
TOS_MsgPtr arg_0x7fa46a7d0c00, uint16_t arg_0x7fa46a7cf020);
#line 106
static  void *MultiHopEngineM$Send$getBuffer(
# 51 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Route/MultiHopEngineM.nc"
uint8_t arg_0x7fa46a6cd2f0, 
# 106 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Send.nc"
TOS_MsgPtr arg_0x7fa46a7cfa90, uint16_t *arg_0x7fa46a7cfd88);
#line 119
static  result_t MultiHopEngineM$Send$default$sendDone(
# 51 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Route/MultiHopEngineM.nc"
uint8_t arg_0x7fa46a6cd2f0, 
# 119 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Send.nc"
TOS_MsgPtr arg_0x7fa46a7cea88, result_t arg_0x7fa46a7ced48);
# 49 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/SendMsg.nc"
static  result_t MultiHopEngineM$SendMsg$sendDone(
# 58 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Route/MultiHopEngineM.nc"
uint8_t arg_0x7fa46a6c8060, 
# 49 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/SendMsg.nc"
TOS_MsgPtr arg_0x7fa46abbe210, result_t arg_0x7fa46abbe4d0);
# 63 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
static  result_t MultiHopEngineM$StdControl$init(void);






static  result_t MultiHopEngineM$StdControl$start(void);







static  result_t MultiHopEngineM$StdControl$stop(void);
# 49 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/RouteControl.nc"
static  uint16_t MultiHopEngineM$RouteControl$getParent(void);
# 71 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/RouteSelect.nc"
static  result_t MultiHopLEPSM$RouteSelect$selectRoute(TOS_MsgPtr arg_0x7fa46a6c37d0, uint8_t arg_0x7fa46a6c3a88);
#line 86
static  result_t MultiHopLEPSM$RouteSelect$initializeFields(TOS_MsgPtr arg_0x7fa46a6c1468, uint8_t arg_0x7fa46a6c1720);
# 73 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Timer.nc"
static  result_t MultiHopLEPSM$Timer$fired(void);
# 75 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
static  TOS_MsgPtr MultiHopLEPSM$ReceiveMsg$receive(TOS_MsgPtr arg_0x7fa46ab6c360);
# 86 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Intercept.nc"
static  result_t MultiHopLEPSM$Snoop$intercept(
# 47 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Route/MultiHopLEPSM.nc"
uint8_t arg_0x7fa46a680670, 
# 86 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Intercept.nc"
TOS_MsgPtr arg_0x7fa46a6d6060, void *arg_0x7fa46a6d6348, uint16_t arg_0x7fa46a6d6610);
# 49 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/SendMsg.nc"
static  result_t MultiHopLEPSM$SendMsg$sendDone(TOS_MsgPtr arg_0x7fa46abbe210, result_t arg_0x7fa46abbe4d0);
# 63 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
static  result_t MultiHopLEPSM$StdControl$init(void);






static  result_t MultiHopLEPSM$StdControl$start(void);







static  result_t MultiHopLEPSM$StdControl$stop(void);
# 49 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/RouteControl.nc"
static  uint16_t MultiHopLEPSM$RouteControl$getParent(void);
# 73 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Timer.nc"
static  result_t PhotoTempM$PhotoTempTimer$fired(void);
# 63 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
static  result_t PhotoTempM$PhotoStdControl$init(void);






static  result_t PhotoTempM$PhotoStdControl$start(void);







static  result_t PhotoTempM$PhotoStdControl$stop(void);
# 70 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/ADC.nc"
static   result_t PhotoTempM$InternalTempADC$dataReady(uint16_t arg_0x7fa46a7d87f0);
#line 70
static   result_t PhotoTempM$ExternalTempADC$default$dataReady(uint16_t arg_0x7fa46a7d87f0);
#line 52
static   result_t PhotoTempM$ExternalPhotoADC$getData(void);
#line 70
static   result_t PhotoTempM$InternalPhotoADC$dataReady(uint16_t arg_0x7fa46a7d87f0);
# 99 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/HPLADC.nc"
static   result_t ADCM$HPLADC$dataReady(uint16_t arg_0x7fa46a573c18);
# 89 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/ADCControl.nc"
static  result_t ADCM$ADCControl$bindPort(uint8_t arg_0x7fa46a5c15d0, uint8_t arg_0x7fa46a5c1888);
#line 50
static  result_t ADCM$ADCControl$init(void);
# 52 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/ADC.nc"
static   result_t ADCM$ADC$getData(
# 54 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/ADCM.nc"
uint8_t arg_0x7fa46a57cbf8);
# 70 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/ADC.nc"
static   result_t ADCM$ADC$default$dataReady(
# 54 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/ADCM.nc"
uint8_t arg_0x7fa46a57cbf8, 
# 70 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/ADC.nc"
uint16_t arg_0x7fa46a7d87f0);
# 70 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/HPLADC.nc"
static   result_t HPLADCC$ADC$bindPort(uint8_t arg_0x7fa46a576920, uint8_t arg_0x7fa46a576bd8);
#line 91
static   result_t HPLADCC$ADC$sampleStop(void);
#line 54
static   result_t HPLADCC$ADC$init(void);
#line 77
static   result_t HPLADCC$ADC$samplePort(uint8_t arg_0x7fa46a575608);
# 49 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/SendMsg.nc"
static  result_t BcastM$SendMsg$sendDone(
# 46 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Broadcast/BcastM.nc"
uint8_t arg_0x7fa46a507020, 
# 49 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/SendMsg.nc"
TOS_MsgPtr arg_0x7fa46abbe210, result_t arg_0x7fa46abbe4d0);
# 63 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
static  result_t BcastM$StdControl$init(void);






static  result_t BcastM$StdControl$start(void);







static  result_t BcastM$StdControl$stop(void);
# 57 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/sensorboards/micasb/SounderM.nc"
static inline  result_t SounderM$StdControl$start(void);





static inline  result_t SounderM$StdControl$stop(void);
# 49 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/SendMsg.nc"
static  result_t QueuedSendM$QueueSendMsg$sendDone(
# 60 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Queue/QueuedSendM.nc"
uint8_t arg_0x7fa46abb65b8, 
# 49 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/SendMsg.nc"
TOS_MsgPtr arg_0x7fa46abbe210, result_t arg_0x7fa46abbe4d0);
# 106 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Leds.nc"
static   result_t QueuedSendM$Leds$greenToggle(void);
#line 81
static   result_t QueuedSendM$Leds$redToggle(void);
# 48 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/SendMsg.nc"
static  result_t QueuedSendM$SerialSendMsg$send(
# 65 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Queue/QueuedSendM.nc"
uint8_t arg_0x7fa46abb5b10, 
# 48 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/SendMsg.nc"
uint16_t arg_0x7fa46abbf408, uint8_t arg_0x7fa46abbf6c0, TOS_MsgPtr arg_0x7fa46abbf980);
# 74 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Queue/QueuedSendM.nc"
enum QueuedSendM$__nesc_unnamed4352 {
  QueuedSendM$MESSAGE_QUEUE_SIZE = 32, 
  QueuedSendM$MAX_RETRANSMIT_COUNT = 5
};







#line 79
struct QueuedSendM$_msgq_entry {
  uint16_t address;
  uint8_t length;
  uint8_t id;
  uint8_t xmit_count;
  TOS_MsgPtr pMsg;
} QueuedSendM$msgqueue[1000][QueuedSendM$MESSAGE_QUEUE_SIZE];

uint16_t QueuedSendM$enqueue_next[1000];
#line 87
uint16_t QueuedSendM$dequeue_next[1000];
bool QueuedSendM$retransmit[1000];
bool QueuedSendM$fQueueIdle[1000];

static  result_t QueuedSendM$StdControl$init(void);
#line 110
static inline  result_t QueuedSendM$StdControl$start(void);


static inline  result_t QueuedSendM$StdControl$stop(void);
#line 125
static  void QueuedSendM$QueueServiceTask(void);
#line 147
static  result_t QueuedSendM$QueueSendMsg$send(uint8_t id, uint16_t address, uint8_t length, TOS_MsgPtr msg);
#line 192
static inline  result_t QueuedSendM$SerialSendMsg$sendDone(uint8_t id, TOS_MsgPtr msg, result_t success);
# 75 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
static  TOS_MsgPtr AMPromiscuous$ReceiveMsg$receive(
# 57 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/AMPromiscuous.nc"
uint8_t arg_0x7fa46ab651d0, 
# 75 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
TOS_MsgPtr arg_0x7fa46ab6c360);
# 59 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Timer.nc"
static  result_t AMPromiscuous$ActivityTimer$start(char arg_0x7fa46ab515c0, uint32_t arg_0x7fa46ab51888);








static  result_t AMPromiscuous$ActivityTimer$stop(void);
# 58 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/BareSendMsg.nc"
static  result_t AMPromiscuous$UARTSend$send(TOS_MsgPtr arg_0x7fa46ab60868);
# 41 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/PowerManagement.nc"
static   uint8_t AMPromiscuous$PowerManagement$adjustPower(void);
# 63 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
static  result_t AMPromiscuous$RadioControl$init(void);






static  result_t AMPromiscuous$RadioControl$start(void);







static  result_t AMPromiscuous$RadioControl$stop(void);
#line 63
static  result_t AMPromiscuous$TimerControl$init(void);






static  result_t AMPromiscuous$TimerControl$start(void);
#line 63
static  result_t AMPromiscuous$UARTControl$init(void);






static  result_t AMPromiscuous$UARTControl$start(void);







static  result_t AMPromiscuous$UARTControl$stop(void);
# 106 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Leds.nc"
static   result_t AMPromiscuous$Leds$greenToggle(void);
# 67 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/AMPromiscuous.nc"
static  result_t AMPromiscuous$sendDone(void);
# 58 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/BareSendMsg.nc"
static  result_t AMPromiscuous$RadioSend$send(TOS_MsgPtr arg_0x7fa46ab60868);
# 49 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/SendMsg.nc"
static  result_t AMPromiscuous$SendMsg$sendDone(
# 56 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/AMPromiscuous.nc"
uint8_t arg_0x7fa46ab66568, 
# 49 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/SendMsg.nc"
TOS_MsgPtr arg_0x7fa46abbe210, result_t arg_0x7fa46abbe4d0);
# 84 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/AMPromiscuous.nc"
bool AMPromiscuous$state[1000];
TOS_MsgPtr AMPromiscuous$buffer[1000];
uint16_t AMPromiscuous$lastCount[1000];
uint16_t AMPromiscuous$counter[1000];
bool AMPromiscuous$promiscuous_mode[1000];
bool AMPromiscuous$crc_check[1000];


static  result_t AMPromiscuous$Control$init(void);
#line 109
static  result_t AMPromiscuous$Control$start(void);
#line 126
static  result_t AMPromiscuous$Control$stop(void);
#line 146
static inline  result_t AMPromiscuous$CommControl$setPromiscuous(bool value);
#line 159
static void AMPromiscuous$dbgPacket(TOS_MsgPtr data);










static result_t AMPromiscuous$reportSendDone(TOS_MsgPtr msg, result_t success);








static inline  result_t AMPromiscuous$ActivityTimer$fired(void);








static inline   result_t AMPromiscuous$default$sendDone(void);




static inline  void AMPromiscuous$sendTask(void);
#line 206
static inline  result_t AMPromiscuous$SendMsg$send(uint8_t id, uint16_t addr, uint8_t length, TOS_MsgPtr data);
#line 236
static inline  result_t AMPromiscuous$UARTSend$sendDone(TOS_MsgPtr msg, result_t success);


static inline  result_t AMPromiscuous$RadioSend$sendDone(TOS_MsgPtr msg, result_t success);




TOS_MsgPtr prom_received(TOS_MsgPtr packet)   ;
#line 271
static inline   TOS_MsgPtr AMPromiscuous$ReceiveMsg$default$receive(uint8_t id, TOS_MsgPtr msg);



static inline  TOS_MsgPtr AMPromiscuous$UARTReceive$receive(TOS_MsgPtr packet);



static inline  TOS_MsgPtr AMPromiscuous$RadioReceive$receive(TOS_MsgPtr packet);
# 75 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
static  TOS_MsgPtr TossimPacketM$Receive$receive(TOS_MsgPtr arg_0x7fa46ab6c360);
# 61 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/contrib/ptII/ptinyos/beta/TOSSIM-packet/TossimPacketM.nc"
TOS_Msg TossimPacketM$buffer[1000];
TOS_MsgPtr TossimPacketM$bufferPtr[1000];

static inline  result_t TossimPacketM$Control$init(void);





static inline  result_t TossimPacketM$Control$start(void);



static inline  result_t TossimPacketM$Control$stop(void);




static  TOS_MsgPtr TossimPacketM$ReceiveMain$receive(TOS_MsgPtr msg);
# 75 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
static  TOS_MsgPtr Nido$UARTReceiveMsg$receive(TOS_MsgPtr arg_0x7fa46ab6c360);
# 22 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/PowerState.nc"
static   void Nido$PowerState$CPUCycleCheckpoint(void);
#line 14
static   result_t Nido$PowerState$init(int arg_0x7fa46aaed390, int arg_0x7fa46aaed648);



static   result_t Nido$PowerState$stop(void);
# 67 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/BareSendMsg.nc"
static  result_t Nido$RadioSendMsg$sendDone(TOS_MsgPtr arg_0x7fa46ab5f1d8, result_t arg_0x7fa46ab5f498);
# 75 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
static  TOS_MsgPtr Nido$RadioReceiveMsg$receive(TOS_MsgPtr arg_0x7fa46ab6c360);
# 63 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
static  result_t Nido$StdControl$init(void);






static  result_t Nido$StdControl$start(void);







static  result_t Nido$StdControl$stop(void);
# 74 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/contrib/ptII/ptinyos/beta/TOSSIM-packet/Nido.nc"
static inline void Nido$usage(char *progname);




static void Nido$help(char *progname);
#line 108
void event_boot_handle(event_t *fevent, 
struct TOS_state *fstate)   ;
#line 124
long long Nido$last_power_time[1000];

int Nido$power_profiling[1000];
int Nido$cpu_profiling[1000];
int Nido$num_nodes_total[1000];

unsigned long long Nido$max_run_time[1000];

int main(int argc, char **argv)   ;
#line 371
void ptII_fire(long long ptolemyTime)   ;
#line 449
void ptII_cleanup(void)   ;








void nido_start_mote(uint16_t moteID)   ;
#line 477
void nido_stop_mote(uint16_t moteID)   ;
#line 496
TOS_MsgPtr NIDO_received_radio(TOS_MsgPtr packet)   ;









TOS_MsgPtr NIDO_received_uart(TOS_MsgPtr packet)   ;










static inline  result_t Nido$RadioSendMsg$send(TOS_MsgPtr msg);








void packet_sim_transmit_done(TOS_MsgPtr msg)   ;




TOS_MsgPtr packet_sim_receive_msg(TOS_MsgPtr msg)   ;








void set_sim_rate(uint32_t rate)   ;







uint32_t get_sim_rate(void)   ;
# 67 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/BareSendMsg.nc"
static  result_t UARTNoCRCPacketM$Send$sendDone(TOS_MsgPtr arg_0x7fa46ab5f1d8, result_t arg_0x7fa46ab5f498);
# 55 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/UARTNoCRCPacketM.nc"
static inline  result_t UARTNoCRCPacketM$Control$init(void);




static inline  result_t UARTNoCRCPacketM$Control$start(void);




static inline  result_t UARTNoCRCPacketM$Control$stop(void);




static inline  result_t UARTNoCRCPacketM$Send$send(TOS_MsgPtr msg);
#line 82
void NIDO_uart_send_done(TOS_MsgPtr fmsg, result_t fsuccess)   ;
# 63 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/NoLeds.nc"
static inline   result_t NoLeds$Leds$redToggle(void);
#line 75
static inline   result_t NoLeds$Leds$greenToggle(void);
# 41 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/PowerManagement.nc"
static   uint8_t TimerM$PowerManagement$adjustPower(void);
# 105 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Clock.nc"
static   void TimerM$Clock$setInterval(uint8_t arg_0x7fa46a867bf0);
#line 153
static   uint8_t TimerM$Clock$readCounter(void);
#line 96
static   result_t TimerM$Clock$setRate(char arg_0x7fa46a860798, char arg_0x7fa46a860a48);
#line 121
static   uint8_t TimerM$Clock$getInterval(void);
# 73 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Timer.nc"
static  result_t TimerM$Timer$fired(
# 49 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/TimerM.nc"
uint8_t arg_0x7fa46a86f8c0);









uint32_t TimerM$mState[1000];
uint8_t TimerM$setIntervalFlag[1000];
uint8_t TimerM$mScale[1000];
#line 61
uint8_t TimerM$mInterval[1000];
int8_t TimerM$queue_head[1000];
int8_t TimerM$queue_tail[1000];
uint8_t TimerM$queue_size[1000];
uint8_t TimerM$queue[1000][NUM_TIMERS];
volatile uint16_t TimerM$interval_outstanding[1000];





#line 68
struct TimerM$timer_s {
  uint8_t type;
  int32_t ticks;
  int32_t ticksLeft;
} TimerM$mTimerList[1000][NUM_TIMERS];

enum TimerM$__nesc_unnamed4353 {
  TimerM$maxTimerInterval = 230
};
static  result_t TimerM$StdControl$init(void);









static inline  result_t TimerM$StdControl$start(void);



static inline  result_t TimerM$StdControl$stop(void);






static  result_t TimerM$Timer$start(uint8_t id, char type, 
uint32_t interval);
#line 129
inline static void TimerM$adjustInterval(void);
#line 168
static  result_t TimerM$Timer$stop(uint8_t id);
#line 182
static inline   result_t TimerM$Timer$default$fired(uint8_t id);



static inline void TimerM$enqueue(uint8_t value);







static inline uint8_t TimerM$dequeue(void);









static inline  void TimerM$signalOneTimer(void);





static inline  void TimerM$HandleFire(void);
#line 253
static inline   result_t TimerM$Clock$fire(void);
# 180 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Clock.nc"
static   result_t HPLClock$Clock$fire(void);
# 60 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/HPLClock.nc"
char HPLClock$set_flag[1000];
 unsigned char HPLClock$mscale[1000];
#line 61
 unsigned char HPLClock$nextScale[1000];
#line 61
 unsigned char HPLClock$minterval[1000];
#line 82
static inline   void HPLClock$Clock$setInterval(uint8_t value);








static inline   uint8_t HPLClock$Clock$getInterval(void);
#line 113
static inline   uint8_t HPLClock$Clock$readCounter(void);
#line 128
static inline   result_t HPLClock$Clock$setRate(char interval, char scale);







static inline void SIG_OUTPUT_COMPARE2_interrupt(void)  ;
# 50 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/HPLPowerManagementM.nc"
enum HPLPowerManagementM$__nesc_unnamed4354 {
  HPLPowerManagementM$IDLE = 0
};

static inline   uint8_t HPLPowerManagementM$PowerManagement$adjustPower(void);
# 49 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/RouteControl.nc"
static  uint16_t SurgeM$RouteControl$getParent(void);
# 83 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Send.nc"
static  result_t SurgeM$Send$send(TOS_MsgPtr arg_0x7fa46a7d0c00, uint16_t arg_0x7fa46a7cf020);
#line 106
static  void *SurgeM$Send$getBuffer(TOS_MsgPtr arg_0x7fa46a7cfa90, uint16_t *arg_0x7fa46a7cfd88);
# 70 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
static  result_t SurgeM$Sounder$start(void);







static  result_t SurgeM$Sounder$stop(void);
# 56 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Leds.nc"
static   result_t SurgeM$Leds$init(void);
# 52 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/ADC.nc"
static   result_t SurgeM$ADC$getData(void);
# 59 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Timer.nc"
static  result_t SurgeM$Timer$start(char arg_0x7fa46ab515c0, uint32_t arg_0x7fa46ab51888);








static  result_t SurgeM$Timer$stop(void);
# 56 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../apps/Surge/SurgeM.nc"
enum SurgeM$__nesc_unnamed4355 {
  SurgeM$TIMER_GETADC_COUNT = 1, 
  SurgeM$TIMER_CHIRP_COUNT = 10
};

bool SurgeM$sleeping[1000];
bool SurgeM$focused[1000];
bool SurgeM$rebroadcast_adc_packet[1000];

TOS_Msg SurgeM$gMsgBuffer[1000];
 uint16_t SurgeM$gSensorData[1000];
bool SurgeM$gfSendBusy[1000];


int SurgeM$timer_rate[1000];
int SurgeM$timer_ticks[1000];




inline static void SurgeM$initialize(void);







static inline  void SurgeM$SendData(void);
#line 100
static inline  result_t SurgeM$StdControl$init(void);





static inline  result_t SurgeM$StdControl$start(void);




static inline  result_t SurgeM$StdControl$stop(void);







static inline  result_t SurgeM$Timer$fired(void);
#line 136
static inline   result_t SurgeM$ADC$dataReady(uint16_t data);
#line 150
static inline  result_t SurgeM$Send$sendDone(TOS_MsgPtr pMsg, result_t success);
# 20 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/PowerStateM.nc"
static inline int PowerStateM$num_bbs(void);
static inline void PowerStateM$dump_power_details(void);

static inline   result_t PowerStateM$PowerState$init(int prof, int cpu_prof);
#line 54
static inline   result_t PowerStateM$PowerState$stop(void);








static inline   void PowerStateM$PowerState$ADCon(void);
#line 75
static inline   void PowerStateM$PowerState$ADCdataReady(void);





static   void PowerStateM$PowerState$ADCsample(uint8_t port);
#line 217
static inline   void PowerStateM$PowerState$sensorPhotoOn(void);





static inline   void PowerStateM$PowerState$sensorPhotoOff(void);
#line 311
static inline int PowerStateM$num_bbs(void);





static inline int PowerStateM$bb_exec_count(int mote, int bb);




static   double PowerStateM$PowerState$get_mote_cycles(int mote);
#line 339
static inline void PowerStateM$print_power_info(void);
#line 361
static inline void PowerStateM$dump_power_details(void);
#line 389
static inline   void PowerStateM$PowerState$CPUCycleCheckpoint(void);
# 51 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/LedsM.nc"
uint8_t LedsM$ledsOn[1000];

enum LedsM$__nesc_unnamed4356 {
  LedsM$RED_BIT = 1, 
  LedsM$GREEN_BIT = 2, 
  LedsM$YELLOW_BIT = 4
};


static inline void LedsM$updateLeds(void);
#line 72
static inline   result_t LedsM$Leds$init(void);
# 71 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/RouteSelect.nc"
static  result_t MultiHopEngineM$RouteSelect$selectRoute(TOS_MsgPtr arg_0x7fa46a6c37d0, uint8_t arg_0x7fa46a6c3a88);
#line 86
static  result_t MultiHopEngineM$RouteSelect$initializeFields(TOS_MsgPtr arg_0x7fa46a6c1468, uint8_t arg_0x7fa46a6c1720);
# 86 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Intercept.nc"
static  result_t MultiHopEngineM$Intercept$intercept(
# 52 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Route/MultiHopEngineM.nc"
uint8_t arg_0x7fa46a6cb0c8, 
# 86 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Intercept.nc"
TOS_MsgPtr arg_0x7fa46a6d6060, void *arg_0x7fa46a6d6348, uint16_t arg_0x7fa46a6d6610);
# 49 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/RouteControl.nc"
static  uint16_t MultiHopEngineM$RouteSelectCntl$getParent(void);
# 86 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Intercept.nc"
static  result_t MultiHopEngineM$Snoop$intercept(
# 53 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Route/MultiHopEngineM.nc"
uint8_t arg_0x7fa46a6cbb58, 
# 86 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Intercept.nc"
TOS_MsgPtr arg_0x7fa46a6d6060, void *arg_0x7fa46a6d6348, uint16_t arg_0x7fa46a6d6610);
# 119 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Send.nc"
static  result_t MultiHopEngineM$Send$sendDone(
# 51 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Route/MultiHopEngineM.nc"
uint8_t arg_0x7fa46a6cd2f0, 
# 119 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Send.nc"
TOS_MsgPtr arg_0x7fa46a7cea88, result_t arg_0x7fa46a7ced48);
# 63 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
static  result_t MultiHopEngineM$CommStdControl$init(void);






static  result_t MultiHopEngineM$CommStdControl$start(void);







static  result_t MultiHopEngineM$CommStdControl$stop(void);
#line 63
static  result_t MultiHopEngineM$SubControl$init(void);






static  result_t MultiHopEngineM$SubControl$start(void);







static  result_t MultiHopEngineM$SubControl$stop(void);
# 65 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/CommControl.nc"
static  result_t MultiHopEngineM$CommControl$setPromiscuous(bool arg_0x7fa46ab726f8);
# 48 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/SendMsg.nc"
static  result_t MultiHopEngineM$SendMsg$send(
# 58 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Route/MultiHopEngineM.nc"
uint8_t arg_0x7fa46a6c8060, 
# 48 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/SendMsg.nc"
uint16_t arg_0x7fa46abbf408, uint8_t arg_0x7fa46abbf6c0, TOS_MsgPtr arg_0x7fa46abbf980);
# 69 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Route/MultiHopEngineM.nc"
enum MultiHopEngineM$__nesc_unnamed4357 {
  MultiHopEngineM$FWD_QUEUE_SIZE = 16, 
  MultiHopEngineM$EMPTY = 0xff
};






TOS_Msg MultiHopEngineM$FwdBuffers[1000][MultiHopEngineM$FWD_QUEUE_SIZE];
TOS_Msg *MultiHopEngineM$FwdBufList[1000][MultiHopEngineM$FWD_QUEUE_SIZE];

uint8_t MultiHopEngineM$iFwdBufHead[1000];
#line 82
uint8_t MultiHopEngineM$iFwdBufTail[1000];








inline static void MultiHopEngineM$initialize(void);









static inline  result_t MultiHopEngineM$StdControl$init(void);





static inline  result_t MultiHopEngineM$StdControl$start(void);





static inline  result_t MultiHopEngineM$StdControl$stop(void);










static inline  result_t MultiHopEngineM$Send$send(uint8_t id, TOS_MsgPtr pMsg, uint16_t PayloadLen);
#line 150
static  void *MultiHopEngineM$Send$getBuffer(uint8_t id, TOS_MsgPtr pMsg, uint16_t *length);










inline static TOS_MsgPtr MultiHopEngineM$mForward(TOS_MsgPtr pMsg, uint8_t id);
#line 182
static inline  TOS_MsgPtr MultiHopEngineM$ReceiveMsg$receive(uint8_t id, TOS_MsgPtr pMsg);
#line 205
static inline  result_t MultiHopEngineM$SendMsg$sendDone(uint8_t id, TOS_MsgPtr pMsg, result_t success);









static inline  uint16_t MultiHopEngineM$RouteControl$getParent(void);
#line 246
static inline   result_t MultiHopEngineM$Send$default$sendDone(uint8_t id, TOS_MsgPtr pMsg, result_t success);



static inline   result_t MultiHopEngineM$Intercept$default$intercept(uint8_t id, TOS_MsgPtr pMsg, void *payload, 
uint16_t payloadLen);
# 59 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Timer.nc"
static  result_t MultiHopLEPSM$Timer$start(char arg_0x7fa46ab515c0, uint32_t arg_0x7fa46ab51888);








static  result_t MultiHopLEPSM$Timer$stop(void);
# 48 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/SendMsg.nc"
static  result_t MultiHopLEPSM$SendMsg$send(uint16_t arg_0x7fa46abbf408, uint8_t arg_0x7fa46abbf6c0, TOS_MsgPtr arg_0x7fa46abbf980);
# 58 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Route/MultiHopLEPSM.nc"
enum MultiHopLEPSM$__nesc_unnamed4358 {
  MultiHopLEPSM$NBRFLAG_VALID = 0x01, 
  MultiHopLEPSM$NBRFLAG_NEW = 0x02, 
  MultiHopLEPSM$NBRFLAG_EST_INIT = 0x04
};

enum MultiHopLEPSM$__nesc_unnamed4359 {
  MultiHopLEPSM$BASE_STATION_ADDRESS = 0, 
  MultiHopLEPSM$ROUTE_TABLE_SIZE = 16, 
  MultiHopLEPSM$ESTIMATE_TO_ROUTE_RATIO = 5, 
  MultiHopLEPSM$ACCEPTABLE_MISSED = -20, 
  MultiHopLEPSM$DATA_TO_ROUTE_RATIO = 2, 
  MultiHopLEPSM$DATA_FREQ = 10000, 
  MultiHopLEPSM$MAX_ALLOWABLE_LINK_COST = 1536, 
  MultiHopLEPSM$MIN_LIVELINESS = 2
};


enum MultiHopLEPSM$__nesc_unnamed4360 {
  MultiHopLEPSM$ROUTE_INVALID = 0xff
};

struct MultiHopLEPSM$SortEntry {
  uint16_t id;
  uint8_t receiveEst;
};




#line 85
typedef struct MultiHopLEPSM$RPEstEntry {
  uint16_t id;
  uint8_t receiveEst;
} __attribute((packed))  MultiHopLEPSM$RPEstEntry;







#line 90
typedef struct MultiHopLEPSM$RoutePacket {
  uint16_t parent;


  uint8_t estEntries;
  MultiHopLEPSM$RPEstEntry estList[1];
} __attribute((packed))  MultiHopLEPSM$RoutePacket;
#line 109
#line 98
typedef struct MultiHopLEPSM$TableEntry {
  uint16_t id;
  uint16_t parent;
  uint16_t missed;
  uint16_t received;
  int16_t lastSeqno;
  uint8_t flags;
  uint8_t liveliness;
  uint8_t hop;
  uint8_t receiveEst;
  uint8_t sendEst;
} MultiHopLEPSM$TableEntry;

TOS_Msg MultiHopLEPSM$routeMsg[1000];
bool MultiHopLEPSM$gfSendRouteBusy[1000];

MultiHopLEPSM$TableEntry MultiHopLEPSM$BaseStation[1000];
MultiHopLEPSM$TableEntry MultiHopLEPSM$NeighborTbl[1000][MultiHopLEPSM$ROUTE_TABLE_SIZE];
MultiHopLEPSM$TableEntry *MultiHopLEPSM$gpCurrentParent[1000];
uint8_t MultiHopLEPSM$gbCurrentHopCount[1000];
int16_t MultiHopLEPSM$gCurrentSeqNo[1000];
uint16_t MultiHopLEPSM$gwEstTicks[1000];
uint32_t MultiHopLEPSM$gUpdateInterval[1000];










static inline uint8_t MultiHopLEPSM$findEntry(uint8_t id);
#line 149
static inline uint8_t MultiHopLEPSM$findEntryToBeReplaced(void);
#line 173
static void MultiHopLEPSM$newEntry(uint8_t indes, uint16_t id);
#line 199
static inline uint8_t MultiHopLEPSM$findPreparedIndex(uint16_t id);









static inline int MultiHopLEPSM$sortByReceiveEstFcn(const void *x, const void *y);









static inline uint32_t MultiHopLEPSM$evaluateCost(uint8_t sendEst, uint8_t receiveEst);










static inline void MultiHopLEPSM$updateEst(MultiHopLEPSM$TableEntry *Nbr);
#line 276
static inline void MultiHopLEPSM$updateTable(void);
#line 292
static bool MultiHopLEPSM$updateNbrCounters(uint16_t saddr, int16_t seqno, uint8_t *NbrIndex);
#line 329
static inline void MultiHopLEPSM$chooseParent(void);
#line 374
static inline  void MultiHopLEPSM$SendRouteTask(void);
#line 420
static  void MultiHopLEPSM$TimerTask(void);
#line 454
static inline  result_t MultiHopLEPSM$StdControl$init(void);
#line 478
static inline  result_t MultiHopLEPSM$StdControl$start(void);









static inline  result_t MultiHopLEPSM$StdControl$stop(void);
#line 507
static  result_t MultiHopLEPSM$RouteSelect$selectRoute(TOS_MsgPtr Msg, uint8_t id);
#line 560
static inline  result_t MultiHopLEPSM$RouteSelect$initializeFields(TOS_MsgPtr Msg, uint8_t id);
#line 573
static inline  uint16_t MultiHopLEPSM$RouteControl$getParent(void);
#line 627
static inline  result_t MultiHopLEPSM$Timer$fired(void);




static inline  TOS_MsgPtr MultiHopLEPSM$ReceiveMsg$receive(TOS_MsgPtr Msg);
#line 661
static inline  result_t MultiHopLEPSM$Snoop$intercept(uint8_t id, TOS_MsgPtr Msg, void *Payload, uint16_t Len);









static inline  result_t MultiHopLEPSM$SendMsg$sendDone(TOS_MsgPtr pMsg, result_t success);
# 59 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Timer.nc"
static  result_t PhotoTempM$PhotoTempTimer$start(char arg_0x7fa46ab515c0, uint32_t arg_0x7fa46ab51888);








static  result_t PhotoTempM$PhotoTempTimer$stop(void);
# 52 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/ADC.nc"
static   result_t PhotoTempM$InternalTempADC$getData(void);
# 89 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/ADCControl.nc"
static  result_t PhotoTempM$ADCControl$bindPort(uint8_t arg_0x7fa46a5c15d0, uint8_t arg_0x7fa46a5c1888);
#line 50
static  result_t PhotoTempM$ADCControl$init(void);
# 63 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
static  result_t PhotoTempM$TimerControl$init(void);
# 55 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/PowerState.nc"
static   void PhotoTempM$PowerState$sensorPhotoOn(void);
static   void PhotoTempM$PowerState$sensorPhotoOff(void);
# 70 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/ADC.nc"
static   result_t PhotoTempM$ExternalTempADC$dataReady(uint16_t arg_0x7fa46a7d87f0);
#line 70
static   result_t PhotoTempM$ExternalPhotoADC$dataReady(uint16_t arg_0x7fa46a7d87f0);
#line 52
static   result_t PhotoTempM$InternalPhotoADC$getData(void);
# 118 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/PhotoTempM.nc"
#line 112
enum PhotoTempM$__nesc_unnamed4361 {
  PhotoTempM$sensorIdle = 0, 
  PhotoTempM$sensorPhotoStarting, 
  PhotoTempM$sensorPhotoReady, 
  PhotoTempM$sensorTempStarting, 
  PhotoTempM$sensorTempReady
} PhotoTempM$hardwareStatus[1000];







#line 122
typedef enum PhotoTempM$__nesc_unnamed4362 {
  PhotoTempM$stateIdle = 0, 
  PhotoTempM$stateReadOnce, 
  PhotoTempM$stateContinuous
} PhotoTempM$SensorState_t;
PhotoTempM$SensorState_t PhotoTempM$photoSensor[1000];
PhotoTempM$SensorState_t PhotoTempM$tempSensor[1000];




bool PhotoTempM$waitingForSample[1000];

static inline  result_t PhotoTempM$PhotoStdControl$init(void);









static inline  result_t PhotoTempM$PhotoStdControl$start(void);







static inline  result_t PhotoTempM$PhotoStdControl$stop(void);
#line 188
static  void PhotoTempM$getSample(void);
#line 296
static inline  result_t PhotoTempM$PhotoTempTimer$fired(void);
#line 334
static inline   result_t PhotoTempM$ExternalPhotoADC$getData(void);
#line 362
static inline   result_t PhotoTempM$InternalPhotoADC$dataReady(uint16_t data);
#line 380
static inline    result_t PhotoTempM$ExternalTempADC$default$dataReady(uint16_t data);



static inline   result_t PhotoTempM$InternalTempADC$dataReady(uint16_t data);
#line 189
static bool PhotoTempM$getSample$photoIsNext[1000];
# 70 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/HPLADC.nc"
static   result_t ADCM$HPLADC$bindPort(uint8_t arg_0x7fa46a576920, uint8_t arg_0x7fa46a576bd8);
#line 91
static   result_t ADCM$HPLADC$sampleStop(void);
#line 54
static   result_t ADCM$HPLADC$init(void);
#line 77
static   result_t ADCM$HPLADC$samplePort(uint8_t arg_0x7fa46a575608);
# 70 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/ADC.nc"
static   result_t ADCM$ADC$dataReady(
# 54 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/ADCM.nc"
uint8_t arg_0x7fa46a57cbf8, 
# 70 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/ADC.nc"
uint16_t arg_0x7fa46a7d87f0);
# 63 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/ADCM.nc"
enum ADCM$__nesc_unnamed4363 {
  ADCM$IDLE = 0, 
  ADCM$SINGLE_CONVERSION = 1, 
  ADCM$CONTINUOUS_CONVERSION = 2
};

uint16_t ADCM$ReqPort[1000];
uint16_t ADCM$ReqVector[1000];
uint16_t ADCM$ContReqMask[1000];

static inline  result_t ADCM$ADCControl$init(void);
#line 87
static inline  result_t ADCM$ADCControl$bindPort(uint8_t port, uint8_t adcPort);



static inline    result_t ADCM$ADC$default$dataReady(uint8_t port, uint16_t data);



static inline   result_t ADCM$HPLADC$dataReady(uint16_t data);
#line 132
static __inline result_t ADCM$startGet(uint8_t newState, uint8_t port);
#line 165
static inline   result_t ADCM$ADC$getData(uint8_t port);
# 30 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/PowerState.nc"
static   void HPLADCC$PowerState$ADCdataReady(void);
#line 29
static   void HPLADCC$PowerState$ADCsample(uint8_t arg_0x7fa46aaeca20);

static   void HPLADCC$PowerState$ADCon(void);
# 99 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/HPLADC.nc"
static   result_t HPLADCC$ADC$dataReady(uint16_t arg_0x7fa46a573c18);
# 57 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/HPLADCC.nc"
static inline   result_t HPLADCC$ADC$init(void);










static inline   result_t HPLADCC$ADC$bindPort(uint8_t port, uint8_t adcPort);



static inline   result_t HPLADCC$ADC$samplePort(uint8_t port);










static inline   result_t HPLADCC$ADC$sampleStop(void);





static inline void TOSH_adc_data_ready(uint16_t data)  ;
# 63 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
static  result_t BcastM$SubControl$init(void);






static  result_t BcastM$SubControl$start(void);







static  result_t BcastM$SubControl$stop(void);
# 52 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Broadcast/BcastM.nc"
enum BcastM$__nesc_unnamed4364 {
  BcastM$FWD_QUEUE_SIZE = 4
};

int16_t BcastM$BcastSeqno[1000];
TOS_Msg BcastM$FwdBuffer[1000][BcastM$FWD_QUEUE_SIZE];
uint8_t BcastM$iFwdBufHead[1000];
#line 58
uint8_t BcastM$iFwdBufTail[1000];





inline static void BcastM$initialize(void);
#line 115
static inline  result_t BcastM$StdControl$init(void);




static inline  result_t BcastM$StdControl$start(void);



static inline  result_t BcastM$StdControl$stop(void);



static inline  result_t BcastM$SendMsg$sendDone(uint8_t id, TOS_MsgPtr pMsg, result_t success);
# 239 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/AMPromiscuous.nc"
static inline  result_t AMPromiscuous$RadioSend$sendDone(TOS_MsgPtr msg, result_t success)
#line 239
{
  return AMPromiscuous$reportSendDone(msg, success);
}

# 67 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/BareSendMsg.nc"
inline static  result_t Nido$RadioSendMsg$sendDone(TOS_MsgPtr arg_0x7fa46ab5f1d8, result_t arg_0x7fa46ab5f498){
#line 67
  unsigned char result;
#line 67

#line 67
  result = AMPromiscuous$RadioSend$sendDone(arg_0x7fa46ab5f1d8, arg_0x7fa46ab5f498);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 63 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/NoLeds.nc"
static inline   result_t NoLeds$Leds$redToggle(void)
#line 63
{
  return SUCCESS;
}

# 81 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Leds.nc"
inline static   result_t QueuedSendM$Leds$redToggle(void){
#line 81
  unsigned char result;
#line 81

#line 81
  result = NoLeds$Leds$redToggle();
#line 81

#line 81
  return result;
#line 81
}
#line 81
# 192 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Queue/QueuedSendM.nc"
static inline  result_t QueuedSendM$SerialSendMsg$sendDone(uint8_t id, TOS_MsgPtr msg, result_t success)
#line 192
{
  if (msg != QueuedSendM$msgqueue[tos_state.current_node][QueuedSendM$dequeue_next[tos_state.current_node]].pMsg) {
      return FAIL;
    }



  if (((
#line 198
  !QueuedSendM$retransmit[tos_state.current_node] || msg->ack != 0) || 
  QueuedSendM$msgqueue[tos_state.current_node][QueuedSendM$dequeue_next[tos_state.current_node]].address == TOS_UART_ADDR) || 
  QueuedSendM$msgqueue[tos_state.current_node][QueuedSendM$dequeue_next[tos_state.current_node]].address == TOS_BCAST_ADDR) {

      QueuedSendM$QueueSendMsg$sendDone(id, msg, success);
      QueuedSendM$msgqueue[tos_state.current_node][QueuedSendM$dequeue_next[tos_state.current_node]].pMsg = (void *)0;
      dbg(DBG_USR2, "qent %d dequeued.\n", QueuedSendM$dequeue_next[tos_state.current_node]);
      QueuedSendM$dequeue_next[tos_state.current_node]++;
#line 205
      QueuedSendM$dequeue_next[tos_state.current_node] %= QueuedSendM$MESSAGE_QUEUE_SIZE;
    }
  else 







    {
      QueuedSendM$Leds$redToggle();
      if (++ QueuedSendM$msgqueue[tos_state.current_node][QueuedSendM$dequeue_next[tos_state.current_node]].xmit_count > QueuedSendM$MAX_RETRANSMIT_COUNT) {


          QueuedSendM$QueueSendMsg$sendDone(id, msg, FAIL);
          QueuedSendM$msgqueue[tos_state.current_node][QueuedSendM$dequeue_next[tos_state.current_node]].pMsg = (void *)0;
          QueuedSendM$dequeue_next[tos_state.current_node]++;
#line 222
          QueuedSendM$dequeue_next[tos_state.current_node] %= QueuedSendM$MESSAGE_QUEUE_SIZE;
        }
    }


  TOS_post(QueuedSendM$QueueServiceTask);

  return SUCCESS;
}

# 49 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/SendMsg.nc"
inline static  result_t AMPromiscuous$SendMsg$sendDone(uint8_t arg_0x7fa46ab66568, TOS_MsgPtr arg_0x7fa46abbe210, result_t arg_0x7fa46abbe4d0){
#line 49
  unsigned char result;
#line 49

#line 49
  result = QueuedSendM$SerialSendMsg$sendDone(arg_0x7fa46ab66568, arg_0x7fa46abbe210, arg_0x7fa46abbe4d0);
#line 49

#line 49
  return result;
#line 49
}
#line 49
# 128 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Broadcast/BcastM.nc"
static inline  result_t BcastM$SendMsg$sendDone(uint8_t id, TOS_MsgPtr pMsg, result_t success)
#line 128
{
  if (pMsg == &BcastM$FwdBuffer[tos_state.current_node][BcastM$iFwdBufTail[tos_state.current_node]]) {
      BcastM$iFwdBufTail[tos_state.current_node]++;
#line 130
      BcastM$iFwdBufTail[tos_state.current_node] %= BcastM$FWD_QUEUE_SIZE;
    }
  return SUCCESS;
}

# 150 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../apps/Surge/SurgeM.nc"
static inline  result_t SurgeM$Send$sendDone(TOS_MsgPtr pMsg, result_t success)
#line 150
{
  dbg(DBG_USR2, "SurgeM: output complete 0x%x\n", success);

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 153
    SurgeM$gfSendBusy[tos_state.current_node] = FALSE;
#line 153
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 246 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Route/MultiHopEngineM.nc"
static inline   result_t MultiHopEngineM$Send$default$sendDone(uint8_t id, TOS_MsgPtr pMsg, result_t success)
#line 246
{
  return SUCCESS;
}

# 119 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Send.nc"
inline static  result_t MultiHopEngineM$Send$sendDone(uint8_t arg_0x7fa46a6cd2f0, TOS_MsgPtr arg_0x7fa46a7cea88, result_t arg_0x7fa46a7ced48){
#line 119
  unsigned char result;
#line 119

#line 119
  switch (arg_0x7fa46a6cd2f0) {
#line 119
    case 0U:
#line 119
      result = SurgeM$Send$sendDone(arg_0x7fa46a7cea88, arg_0x7fa46a7ced48);
#line 119
      break;
#line 119
    default:
#line 119
      result = MultiHopEngineM$Send$default$sendDone(arg_0x7fa46a6cd2f0, arg_0x7fa46a7cea88, arg_0x7fa46a7ced48);
#line 119
      break;
#line 119
    }
#line 119

#line 119
  return result;
#line 119
}
#line 119
# 205 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Route/MultiHopEngineM.nc"
static inline  result_t MultiHopEngineM$SendMsg$sendDone(uint8_t id, TOS_MsgPtr pMsg, result_t success)
#line 205
{

  if (pMsg == MultiHopEngineM$FwdBufList[tos_state.current_node][MultiHopEngineM$iFwdBufTail[tos_state.current_node]]) {
      MultiHopEngineM$iFwdBufTail[tos_state.current_node]++;
#line 208
      MultiHopEngineM$iFwdBufTail[tos_state.current_node] %= MultiHopEngineM$FWD_QUEUE_SIZE;
    }
  else 
#line 209
    {
      MultiHopEngineM$Send$sendDone(id, pMsg, success);
    }
  return SUCCESS;
}

# 671 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Route/MultiHopLEPSM.nc"
static inline  result_t MultiHopLEPSM$SendMsg$sendDone(TOS_MsgPtr pMsg, result_t success)
#line 671
{
  MultiHopLEPSM$gfSendRouteBusy[tos_state.current_node] = FALSE;

  return SUCCESS;
}

# 75 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/NoLeds.nc"
static inline   result_t NoLeds$Leds$greenToggle(void)
#line 75
{
  return SUCCESS;
}

# 106 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Leds.nc"
inline static   result_t QueuedSendM$Leds$greenToggle(void){
#line 106
  unsigned char result;
#line 106

#line 106
  result = NoLeds$Leds$greenToggle();
#line 106

#line 106
  return result;
#line 106
}
#line 106
# 404 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/external_comm.c"
static inline int printTime(char *buf, int len)
#line 404
{
  return printOtherTime(buf, len, tos_state.tos_time);
}

# 80 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/types/dbg.h"
inline static bool dbg_active(TOS_dbg_mode mode)
{
  return (dbg_modes & mode) != 0;
}

# 201 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/contrib/ptII/ptinyos/beta/TOSSIM-packet/packet_sim.c"
static inline void initialBackoff(void)
#line 201
{
  event_t *event = (event_t *)malloc(sizeof(event_t ));
  int backoffAmount = initBackoffLow;

#line 204
  backoffAmount += rand() % (initBackoffHigh - initBackoffLow);
  event_backoff_create(event, tos_state.current_node, tos_state.tos_time + backoffAmount);
  if (dbg_active(DBG_PACKET)) {
      char timeBuf[128];

#line 208
      printTime(timeBuf, 128);
      dbg(DBG_PACKET, "SIM_PACKET: Initial backoff @%s is %i.\n", timeBuf, backoffAmount);
    }
  dbg(DBG_MEM, "SIM_PACKET: Allocated event 0x%x\n", (unsigned int )event);
  queue_insert_event(& tos_state.queue, event);
#line 212
  ;
}

#line 191
static inline result_t packet_sim_transmit(TOS_MsgPtr msg)
#line 191
{
  if (packet_transmitting[tos_state.current_node] != (void *)0) {
      return FAIL;
    }
  packet_transmitting[tos_state.current_node] = msg;
  txState[tos_state.current_node] = RADIO_TX_BACK;
  initialBackoff();
  return SUCCESS;
}

# 517 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/contrib/ptII/ptinyos/beta/TOSSIM-packet/Nido.nc"
static inline  result_t Nido$RadioSendMsg$send(TOS_MsgPtr msg)
#line 517
{
  dbg(DBG_AM, "TossimPacketM: Send.send() called\n");
  return packet_sim_transmit(msg);
}

# 58 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/BareSendMsg.nc"
inline static  result_t AMPromiscuous$RadioSend$send(TOS_MsgPtr arg_0x7fa46ab60868){
#line 58
  unsigned char result;
#line 58

#line 58
  result = Nido$RadioSendMsg$send(arg_0x7fa46ab60868);
#line 58

#line 58
  return result;
#line 58
}
#line 58
# 56 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/events.c"
static inline void event_cleanup(event_t *fevent)
{
  dbg(DBG_MEM, "event_cleanup: freeing event: 0x%x\n", (unsigned int )fevent);
  fevent->cleanup(fevent);
}

# 48 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/PCRadio.h"
static inline void event_uart_write_handle(event_t *uevent, 
struct TOS_state *state)
#line 49
{


  NIDO_uart_send_done((TOS_MsgPtr )((uart_send_done_data_t *)uevent->data)->msg, (
  (uart_send_done_data_t *)uevent->data)->success);
  (

  (uart_send_done_data_t *)uevent->data)->msg = (void *)0;
  event_cleanup(uevent);
  dbg(DBG_UART, "UART: packet transfer complete.\n");
}

static inline void event_uart_write_create(event_t *uevent, int mote, long long utime, TOS_MsgPtr msg, result_t success)
#line 61
{
  uart_send_done_data_t *data = (uart_send_done_data_t *)malloc(sizeof(uart_send_done_data_t ));

#line 63
  dbg(DBG_MEM, "malloc uart send done data event.\n");
  (
  (uart_send_done_data_t *)data)->msg = msg;
  ((uart_send_done_data_t *)data)->success = success;

  uevent->mote = mote;
  uevent->data = data;
  uevent->time = utime;
  uevent->handle = event_uart_write_handle;
  uevent->cleanup = event_total_cleanup;
  uevent->pause = 0;
  uevent->force = 0;
}

static inline void TOSH_uart_send(TOS_MsgPtr msg)
{
  result_t success;
  event_t *uevent;
  UARTMsgSentEvent ev;
  char buf[1024];

#line 83
  success = SUCCESS;

  nmemcpy(& ev.message, msg, sizeof  ev.message);
  sendTossimEvent(tos_state.current_node, AM_UARTMSGSENTEVENT, tos_state.tos_time, &ev);


  uevent = (event_t *)malloc(sizeof(event_t ));
  event_uart_write_create(uevent, tos_state.current_node, tos_state.tos_time + UART_SEND_DELAY, msg, success);
  queue_insert_event(& tos_state.queue, uevent);
#line 91
  ;
  printTime(buf, 1024);



  dbg(DBG_UART, "Enqueueing uart_send_event at %s for mote %i", buf, 0);
}

# 70 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/UARTNoCRCPacketM.nc"
static inline  result_t UARTNoCRCPacketM$Send$send(TOS_MsgPtr msg)
#line 70
{
  msg->crc = 1;

  TOSH_uart_send(msg);

  return SUCCESS;
}

# 58 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/BareSendMsg.nc"
inline static  result_t AMPromiscuous$UARTSend$send(TOS_MsgPtr arg_0x7fa46ab60868){
#line 58
  unsigned char result;
#line 58

#line 58
  result = UARTNoCRCPacketM$Send$send(arg_0x7fa46ab60868);
#line 58

#line 58
  return result;
#line 58
}
#line 58
# 193 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/AMPromiscuous.nc"
static inline  void AMPromiscuous$sendTask(void)
#line 193
{
  result_t ok;

  if (AMPromiscuous$buffer[tos_state.current_node]->addr == TOS_UART_ADDR) {
    ok = AMPromiscuous$UARTSend$send(AMPromiscuous$buffer[tos_state.current_node]);
    }
  else {
#line 199
    ok = AMPromiscuous$RadioSend$send(AMPromiscuous$buffer[tos_state.current_node]);
    }
  if (ok == FAIL) {
    AMPromiscuous$reportSendDone(AMPromiscuous$buffer[tos_state.current_node], FAIL);
    }
}

# 106 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Leds.nc"
inline static   result_t AMPromiscuous$Leds$greenToggle(void){
#line 106
  unsigned char result;
#line 106

#line 106
  result = NoLeds$Leds$greenToggle();
#line 106

#line 106
  return result;
#line 106
}
#line 106
# 206 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/AMPromiscuous.nc"
static inline  result_t AMPromiscuous$SendMsg$send(uint8_t id, uint16_t addr, uint8_t length, TOS_MsgPtr data)
#line 206
{
  if (!AMPromiscuous$state[tos_state.current_node]) {
      AMPromiscuous$state[tos_state.current_node] = TRUE;
      AMPromiscuous$Leds$greenToggle();

      if (length > DATA_LENGTH) {
          dbg(DBG_AM, "AM: Send length too long: %i. Fail.\n", (int )length);
          AMPromiscuous$state[tos_state.current_node] = FALSE;
          return FAIL;
        }
      if (!TOS_post(AMPromiscuous$sendTask)) {
          dbg(DBG_AM, "AM: post sendTask failed.\n");
          AMPromiscuous$state[tos_state.current_node] = FALSE;
          return FAIL;
        }
      else {
          AMPromiscuous$buffer[tos_state.current_node] = data;
          data->length = length;
          data->addr = addr;
          data->type = id;
          AMPromiscuous$buffer[tos_state.current_node]->group = TOS_AM_GROUP;
          AMPromiscuous$dbgPacket(data);
          dbg(DBG_AM, "Sending message: %hx, %hhx\n\t", addr, id);
        }
      return SUCCESS;
    }

  return FAIL;
}

# 48 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/SendMsg.nc"
inline static  result_t QueuedSendM$SerialSendMsg$send(uint8_t arg_0x7fa46abb5b10, uint16_t arg_0x7fa46abbf408, uint8_t arg_0x7fa46abbf6c0, TOS_MsgPtr arg_0x7fa46abbf980){
#line 48
  unsigned char result;
#line 48

#line 48
  result = AMPromiscuous$SendMsg$send(arg_0x7fa46abb5b10, arg_0x7fa46abbf408, arg_0x7fa46abbf6c0, arg_0x7fa46abbf980);
#line 48

#line 48
  return result;
#line 48
}
#line 48
# 236 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/AMPromiscuous.nc"
static inline  result_t AMPromiscuous$UARTSend$sendDone(TOS_MsgPtr msg, result_t success)
#line 236
{
  return AMPromiscuous$reportSendDone(msg, success);
}

# 67 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/BareSendMsg.nc"
inline static  result_t UARTNoCRCPacketM$Send$sendDone(TOS_MsgPtr arg_0x7fa46ab5f1d8, result_t arg_0x7fa46ab5f498){
#line 67
  unsigned char result;
#line 67

#line 67
  result = AMPromiscuous$UARTSend$sendDone(arg_0x7fa46ab5f1d8, arg_0x7fa46ab5f498);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 120 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/heap_array.c"
static inline void expand_heap(heap_t *heap)
#line 120
{
  int new_size = heap->private_size * 2 + 1;
  void *new_data = malloc(sizeof(node_t ) * new_size);

  dbg(DBG_SIM, "Resized heap from %i to %i.\n", heap->private_size, new_size);

  memcpy(new_data, heap->data, sizeof(node_t ) * heap->private_size);
  free(heap->data);

  heap->data = new_data;
  heap->private_size = new_size;
}


static inline void heap_insert(heap_t *heap, void *data, long long key)
#line 134
{
  int findex = heap->size;

#line 136
  if (findex == heap->private_size) {
      expand_heap(heap);
    }

  findex = heap->size;
  ((node_t *)heap->data)[findex].key = key;
  ((node_t *)heap->data)[findex].data = data;
  up_heap(heap, findex);

  heap->size++;
}

# 248 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/contrib/ptII/ptinyos/beta/TOSSIM-packet/packet_sim.c"
static inline void event_start_transmit_create(event_t *event, int node, long long eventTime)
#line 248
{
  event->mote = node;
  event->force = 0;
  event->pause = 0;
  event->data = (void *)0;
  event->time = eventTime;
  event->handle = event_start_transmit_handle;
  event->cleanup = event_total_cleanup;
}

# 75 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
inline static  TOS_MsgPtr Nido$RadioReceiveMsg$receive(TOS_MsgPtr arg_0x7fa46ab6c360){
#line 75
  struct TOS_Msg *result;
#line 75

#line 75
  result = TossimPacketM$ReceiveMain$receive(arg_0x7fa46ab6c360);
#line 75

#line 75
  return result;
#line 75
}
#line 75
# 279 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/AMPromiscuous.nc"
static inline  TOS_MsgPtr AMPromiscuous$RadioReceive$receive(TOS_MsgPtr packet)
#line 279
{
  return prom_received(packet);
}

# 75 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
inline static  TOS_MsgPtr TossimPacketM$Receive$receive(TOS_MsgPtr arg_0x7fa46ab6c360){
#line 75
  struct TOS_Msg *result;
#line 75

#line 75
  result = AMPromiscuous$RadioReceive$receive(arg_0x7fa46ab6c360);
#line 75

#line 75
  return result;
#line 75
}
#line 75
# 661 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Route/MultiHopLEPSM.nc"
static inline  result_t MultiHopLEPSM$Snoop$intercept(uint8_t id, TOS_MsgPtr Msg, void *Payload, uint16_t Len)
#line 661
{
  TOS_MHopMsg *pMHMsg = (TOS_MHopMsg *)&Msg->data[0];
  uint8_t iNbr;

  MultiHopLEPSM$updateNbrCounters(pMHMsg->sourceaddr, pMHMsg->seqno, &iNbr);

  return SUCCESS;
}

# 86 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Intercept.nc"
inline static  result_t MultiHopEngineM$Snoop$intercept(uint8_t arg_0x7fa46a6cbb58, TOS_MsgPtr arg_0x7fa46a6d6060, void *arg_0x7fa46a6d6348, uint16_t arg_0x7fa46a6d6610){
#line 86
  unsigned char result;
#line 86

#line 86
  result = MultiHopLEPSM$Snoop$intercept(arg_0x7fa46a6cbb58, arg_0x7fa46a6d6060, arg_0x7fa46a6d6348, arg_0x7fa46a6d6610);
#line 86

#line 86
  return result;
#line 86
}
#line 86
# 48 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/SendMsg.nc"
inline static  result_t MultiHopEngineM$SendMsg$send(uint8_t arg_0x7fa46a6c8060, uint16_t arg_0x7fa46abbf408, uint8_t arg_0x7fa46abbf6c0, TOS_MsgPtr arg_0x7fa46abbf980){
#line 48
  unsigned char result;
#line 48

#line 48
  result = QueuedSendM$QueueSendMsg$send(arg_0x7fa46a6c8060, arg_0x7fa46abbf408, arg_0x7fa46abbf6c0, arg_0x7fa46abbf980);
#line 48

#line 48
  return result;
#line 48
}
#line 48
# 71 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/RouteSelect.nc"
inline static  result_t MultiHopEngineM$RouteSelect$selectRoute(TOS_MsgPtr arg_0x7fa46a6c37d0, uint8_t arg_0x7fa46a6c3a88){
#line 71
  unsigned char result;
#line 71

#line 71
  result = MultiHopLEPSM$RouteSelect$selectRoute(arg_0x7fa46a6c37d0, arg_0x7fa46a6c3a88);
#line 71

#line 71
  return result;
#line 71
}
#line 71
# 161 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Route/MultiHopEngineM.nc"
inline static TOS_MsgPtr MultiHopEngineM$mForward(TOS_MsgPtr pMsg, uint8_t id)
#line 161
{
  TOS_MsgPtr pNewBuf = pMsg;

  if ((MultiHopEngineM$iFwdBufHead[tos_state.current_node] + 1) % MultiHopEngineM$FWD_QUEUE_SIZE == MultiHopEngineM$iFwdBufTail[tos_state.current_node]) {
    return pNewBuf;
    }
  if (MultiHopEngineM$RouteSelect$selectRoute(pMsg, id) != SUCCESS) {
    return pNewBuf;
    }


  if (MultiHopEngineM$SendMsg$send(id, pMsg->addr, pMsg->length, pMsg) == SUCCESS) {
      pNewBuf = MultiHopEngineM$FwdBufList[tos_state.current_node][MultiHopEngineM$iFwdBufHead[tos_state.current_node]];
      MultiHopEngineM$FwdBufList[tos_state.current_node][MultiHopEngineM$iFwdBufHead[tos_state.current_node]] = pMsg;
      MultiHopEngineM$iFwdBufHead[tos_state.current_node]++;
#line 175
      MultiHopEngineM$iFwdBufHead[tos_state.current_node] %= MultiHopEngineM$FWD_QUEUE_SIZE;
    }

  return pNewBuf;
}

#line 250
static inline   result_t MultiHopEngineM$Intercept$default$intercept(uint8_t id, TOS_MsgPtr pMsg, void *payload, 
uint16_t payloadLen)
#line 251
{
  return SUCCESS;
}

# 86 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Intercept.nc"
inline static  result_t MultiHopEngineM$Intercept$intercept(uint8_t arg_0x7fa46a6cb0c8, TOS_MsgPtr arg_0x7fa46a6d6060, void *arg_0x7fa46a6d6348, uint16_t arg_0x7fa46a6d6610){
#line 86
  unsigned char result;
#line 86

#line 86
    result = MultiHopEngineM$Intercept$default$intercept(arg_0x7fa46a6cb0c8, arg_0x7fa46a6d6060, arg_0x7fa46a6d6348, arg_0x7fa46a6d6610);
#line 86

#line 86
  return result;
#line 86
}
#line 86
# 182 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Route/MultiHopEngineM.nc"
static inline  TOS_MsgPtr MultiHopEngineM$ReceiveMsg$receive(uint8_t id, TOS_MsgPtr pMsg)
#line 182
{
  TOS_MHopMsg *pMHMsg = (TOS_MHopMsg *)pMsg->data;
  uint16_t PayloadLen = pMsg->length - (unsigned long )& ((TOS_MHopMsg *)0)->data;







  if (pMsg->addr == TOS_LOCAL_ADDRESS) {
      if (MultiHopEngineM$Intercept$intercept(id, pMsg, &pMHMsg->data[0], PayloadLen) == SUCCESS) {
          pMsg = MultiHopEngineM$mForward(pMsg, id);
        }
    }
  else {

      MultiHopEngineM$Snoop$intercept(id, pMsg, &pMHMsg->data[0], PayloadLen);
    }

  return pMsg;
}

# 632 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Route/MultiHopLEPSM.nc"
static inline  TOS_MsgPtr MultiHopLEPSM$ReceiveMsg$receive(TOS_MsgPtr Msg)
#line 632
{
  TOS_MHopMsg *pMHMsg = (TOS_MHopMsg *)&Msg->data[0];
  MultiHopLEPSM$RoutePacket *pRP = (MultiHopLEPSM$RoutePacket *)&pMHMsg->data[0];
  uint16_t saddr;
  uint8_t i;
#line 636
  uint8_t iNbr;




  saddr = pMHMsg->sourceaddr;

  MultiHopLEPSM$updateNbrCounters(saddr, pMHMsg->seqno, &iNbr);


  MultiHopLEPSM$NeighborTbl[tos_state.current_node][iNbr].parent = pRP->parent;
  MultiHopLEPSM$NeighborTbl[tos_state.current_node][iNbr].hop = pMHMsg->hopcount;



  for (i = 0; i < pRP->estEntries; i++) {
      if (pRP->estList[i].id == TOS_LOCAL_ADDRESS) {
          MultiHopLEPSM$NeighborTbl[tos_state.current_node][iNbr].sendEst = pRP->estList[i].receiveEst;
          MultiHopLEPSM$NeighborTbl[tos_state.current_node][iNbr].liveliness++;
        }
    }

  return Msg;
}

# 271 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/AMPromiscuous.nc"
static inline   TOS_MsgPtr AMPromiscuous$ReceiveMsg$default$receive(uint8_t id, TOS_MsgPtr msg)
#line 271
{
  return msg;
}

# 75 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
inline static  TOS_MsgPtr AMPromiscuous$ReceiveMsg$receive(uint8_t arg_0x7fa46ab651d0, TOS_MsgPtr arg_0x7fa46ab6c360){
#line 75
  struct TOS_Msg *result;
#line 75

#line 75
  switch (arg_0x7fa46ab651d0) {
#line 75
    case 0U:
#line 75
      result = MultiHopEngineM$ReceiveMsg$receive(1U, arg_0x7fa46ab6c360);
#line 75
      break;
#line 75
    case AM_MULTIHOPMSG:
#line 75
      result = MultiHopLEPSM$ReceiveMsg$receive(arg_0x7fa46ab6c360);
#line 75
      break;
#line 75
    default:
#line 75
      result = AMPromiscuous$ReceiveMsg$default$receive(arg_0x7fa46ab651d0, arg_0x7fa46ab6c360);
#line 75
      break;
#line 75
    }
#line 75

#line 75
  return result;
#line 75
}
#line 75
# 149 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Route/MultiHopLEPSM.nc"
static inline uint8_t MultiHopLEPSM$findEntryToBeReplaced(void)
#line 149
{
  uint8_t i = 0;
  uint8_t minSendEst = -1;
  uint8_t minSendEstIndex = MultiHopLEPSM$ROUTE_INVALID;

#line 153
  for (i = 0; i < MultiHopLEPSM$ROUTE_TABLE_SIZE; i++) {
      if ((MultiHopLEPSM$NeighborTbl[tos_state.current_node][i].flags & MultiHopLEPSM$NBRFLAG_VALID) == 0) {
          return i;
        }
      if (minSendEst >= MultiHopLEPSM$NeighborTbl[tos_state.current_node][i].sendEst) {
          minSendEst = MultiHopLEPSM$NeighborTbl[tos_state.current_node][i].sendEst;
          minSendEstIndex = i;
        }
    }
  return minSendEstIndex;
}

#line 131
static inline uint8_t MultiHopLEPSM$findEntry(uint8_t id)
#line 131
{
  uint8_t i = 0;

#line 133
  for (i = 0; i < MultiHopLEPSM$ROUTE_TABLE_SIZE; i++) {
      if (MultiHopLEPSM$NeighborTbl[tos_state.current_node][i].flags & MultiHopLEPSM$NBRFLAG_VALID && MultiHopLEPSM$NeighborTbl[tos_state.current_node][i].id == id) {
          return i;
        }
    }
  return MultiHopLEPSM$ROUTE_INVALID;
}

#line 199
static inline uint8_t MultiHopLEPSM$findPreparedIndex(uint16_t id)
#line 199
{
  uint8_t indes = MultiHopLEPSM$findEntry(id);

#line 201
  if (indes == (uint8_t )MultiHopLEPSM$ROUTE_INVALID) {
      indes = MultiHopLEPSM$findEntryToBeReplaced();
      MultiHopLEPSM$newEntry(indes, id);
    }
  return indes;
}

# 188 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/AMPromiscuous.nc"
static inline   result_t AMPromiscuous$default$sendDone(void)
#line 188
{
  return SUCCESS;
}

#line 67
inline static  result_t AMPromiscuous$sendDone(void){
#line 67
  unsigned char result;
#line 67

#line 67
  result = AMPromiscuous$default$sendDone();
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 88 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/hardware.h"
 __inline __nesc_atomic_t __nesc_atomic_start(void )
{
  return 0;
}

 __inline void __nesc_atomic_end(__nesc_atomic_t oldSreg)
{
}

# 446 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/external_comm.c"
static inline void sendInitEvent(void *socketChannel)
#line 446
{
  TossimInitEvent initEv;
  unsigned char *msg;
  int total_size;

  memset((char *)&initEv, 0, sizeof(TossimInitEvent ));
  initEv.numMotes = tos_state.num_nodes;
  initEv.radioModel = tos_state.radioModel;
  initEv.rate = get_sim_rate();
  buildTossimEvent(0, AM_TOSSIMINITEVENT, 
  tos_state.tos_time, &initEv, &msg, &total_size);

  writeTossimEvent(msg, total_size, socketChannel);
  free(msg);
}

# 72 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/tos.c"
static inline double get_rate_value(void)
#line 72
{
  return rate_value;
}

# 560 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/external_comm.c"
static inline void event_command_cleanup(event_t *event)
#line 560
{
  incoming_command_data_t *cmdData = (incoming_command_data_t *)event->data;

#line 562
  free(cmdData->msg);
  free(cmdData->payLoad);
  event_total_cleanup(event);
}

#line 722
static inline void event_command_in_handle(event_t *event, 
struct TOS_state *state)
#line 723
{
  incoming_command_data_t *cmdData = (incoming_command_data_t *)event->data;
  GuiMsg *msg = cmdData->msg;

#line 726
  dbg_clear(DBG_SIM, "SIM: Handling incoming command type %d for mote %d\n", msg->msgType, msg->moteID);

  switch (msg->msgType) {

      case AM_TURNONMOTECOMMAND: 
        dbg_clear(DBG_SIM, "SIM: Turning on mote %d\n", msg->moteID);
      nido_start_mote(msg->moteID);
      break;

      case AM_TURNOFFMOTECOMMAND: 
        dbg_clear(DBG_SIM, "SIM: Turning off mote %d\n", msg->moteID);
      nido_stop_mote(msg->moteID);
      break;

      case AM_RADIOMSGSENDCOMMAND: 
        {
          RadioMsgSendCommand *rmsg = (RadioMsgSendCommand *)cmdData->payLoad;
          TOS_MsgPtr buffer;

          dbg_clear(DBG_SIM, "SIM: Enqueueing radio message for mote %d (payloadlen %d)\n", msg->moteID, msg->payLoadLen);
          if (external_comm_buffers_[msg->moteID] == (void *)0) {
            external_comm_buffers_[msg->moteID] = &external_comm_msgs_[msg->moteID];
            }
#line 748
          buffer = external_comm_buffers_[msg->moteID];
          memcpy(buffer, & rmsg->message, msg->payLoadLen);
          buffer->group = TOS_AM_GROUP;
          external_comm_buffers_[msg->moteID] = NIDO_received_radio(buffer);
        }
      break;

      case AM_UARTMSGSENDCOMMAND: 
        {
          UARTMsgSendCommand *umsg = (UARTMsgSendCommand *)cmdData->payLoad;
          TOS_MsgPtr buffer;
          int len = msg->payLoadLen > sizeof(TOS_Msg ) ? sizeof(TOS_Msg ) : msg->payLoadLen;

          dbg_clear(DBG_SIM, "SIM: Enqueueing UART message for mote %d (payloadlen %d)\n", msg->moteID, msg->payLoadLen);
          if (external_comm_buffers_[msg->moteID] == (void *)0) {
            external_comm_buffers_[msg->moteID] = &external_comm_msgs_[msg->moteID];
            }
#line 764
          buffer = external_comm_buffers_[msg->moteID];

          memcpy(buffer, & umsg->message, len);
          buffer->group = TOS_AM_GROUP;
          external_comm_buffers_[msg->moteID] = NIDO_received_uart(buffer);
        }
      break;

      case AM_INTERRUPTCOMMAND: 
        {
          InterruptEvent interruptEvent;
          InterruptCommand *pcmd = (InterruptCommand *)cmdData->payLoad;

#line 776
          interruptEvent.id = pcmd->id;
          dbg_clear(DBG_TEMP, "\nSIM: Interrupt command, id: %i.\n\n", pcmd->id);
          sendTossimEvent(TOS_BCAST_ADDR, AM_INTERRUPTEVENT, 
          tos_state.tos_time, &interruptEvent);
          break;
        }

      default: 
        dbg_clear(DBG_SIM, "SIM: Unrecognizable command type received from TinyViz %i\n", msg->msgType);
      break;
    }

  event_cleanup(event);
}

#line 568
static inline void event_command_in_create(event_t *event, 
GuiMsg *msg, 
char *payLoad)
#line 570
{
  incoming_command_data_t *data = (incoming_command_data_t *)malloc(sizeof(incoming_command_data_t ));

#line 572
  data->msg = msg;
  data->payLoad = payLoad;

  event->mote = (int )(msg->moteID & 0xffff);
  if (event->mote < TOSNODES && 
  event->mote >= 0) {
      event->force = 1;
    }
  event->pause = 1;
  event->data = data;
  event->time = msg->time;
  event->handle = event_command_in_handle;
  event->cleanup = event_command_cleanup;
}

# 54 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/dbg.c"
inline void dbg_set(TOS_dbg_mode modes)
#line 54
{
  dbg_modes = modes;
}

# 149 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/adc_model.c"
static inline void set_adc_value(int moteID, uint8_t port, uint16_t value)
#line 149
{
  if (moteID >= TOSNODES || moteID < 0) {
      dbg(DBG_ERROR, "GENERIC_ADC_MODEL: trying to set value with invalid parameters: [moteID = %d] [port = %d]", moteID, port);
      return;
    }


  ptII_MonitorEnter(adcValuesLock);


  adcValues[moteID][(int )port] = value;


  ptII_MonitorExit(adcValuesLock);
}

# 650 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/rfm_model.c"
static inline void set_link_prob_value(uint16_t moteID1, uint16_t moteID2, double prob)
#line 650
{
  link_t *current_link;
  link_t *new_link;


  ptII_MonitorEnter(radioConnectivityLock);


  current_link = radio_connectivity[moteID1];
  dbg(DBG_SIM, "RFM: MDW: Setting loss prob %d->%d to %0.3f\n", moteID1, moteID2, prob);
  while (current_link) {
      if (current_link->mote == moteID2) {
          current_link->data = prob;



          ptII_MonitorExit(radioConnectivityLock);

          return;
        }
      current_link = current_link->next_link;
    }
  new_link = allocate_link(moteID2);
  new_link->next_link = radio_connectivity[moteID1];
  new_link->data = prob;
  radio_connectivity[moteID1] = new_link;


  ptII_MonitorExit(radioConnectivityLock);
}

# 592 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/external_comm.c"
static inline int processCommand(void *socketChannel, int clidx, GuiMsg *msg, char *payLoad, 
unsigned char **replyMsg, int *replyLen)
#line 593
{
  int ret = 0;

#line 595
  switch (msg->msgType) {

      case AM_SETLINKPROBCOMMAND: 
        {
          SetLinkProbCommand *linkmsg = (SetLinkProbCommand *)payLoad;
          double prob = (double )linkmsg->scaledProb / 10000;

#line 601
          set_link_prob_value(msg->moteID, linkmsg->moteReceiver, prob);
          break;
        }
      case AM_SETADCPORTVALUECOMMAND: 
        {
          SetADCPortValueCommand *adcmsg = (SetADCPortValueCommand *)payLoad;

#line 607
          set_adc_value(msg->moteID, adcmsg->port, adcmsg->value);
          break;
        }
      case AM_SETRATECOMMAND: 
        {
          SetRateCommand *ratemsg = (SetRateCommand *)payLoad;

#line 613
          set_sim_rate(ratemsg->rate);
          break;
        }
      case AM_VARIABLERESOLVECOMMAND: 
        {
          VariableResolveResponse varResult;
          VariableResolveCommand *rmsg = (VariableResolveCommand *)payLoad;







          if (
#line 625
          __nesc_nido_resolve(msg->moteID, (char *)rmsg->name, 
          (uintptr_t *)& varResult.addr, 
          (size_t *)& varResult.length) != 0) 
            {
              varResult.addr = 0;
              varResult.length = -1;
            }

          dbg_clear(DBG_SIM, "SIM: Resolving variable %s for mote %d: 0x%x %d\n", 
          rmsg->name, msg->moteID, varResult.addr, varResult.length);

          buildTossimEvent(TOS_BCAST_ADDR, AM_VARIABLERESOLVERESPONSE, 
          tos_state.tos_time, &varResult, replyMsg, replyLen);
          ret = 1;
          break;
        }
      case AM_VARIABLEREQUESTCOMMAND: 
        {
          VariableRequestResponse varResult;
          VariableRequestCommand *rmsg = (VariableRequestCommand *)payLoad;
          uint8_t *ptr = (uint8_t *)rmsg->addr;

#line 646
          varResult.length = rmsg->length;

          if (varResult.length == 0) {
            varResult.length = 256;
            }
          memcpy(varResult.value, ptr, varResult.length);

          buildTossimEvent(TOS_BCAST_ADDR, AM_VARIABLEREQUESTRESPONSE, 
          tos_state.tos_time, &varResult, replyMsg, replyLen);
          ret = 1;
          break;
        }

      case AM_GETMOTECOUNTCOMMAND: 
        {
          int i;
          GetMoteCountResponse countResponse;

          countResponse.totalMotes = tos_state.num_nodes;
          bzero(& countResponse.bitmask, sizeof  countResponse.bitmask);

          for (i = 0; i < TOSNODES; i++) {
              countResponse.bitmask[i / 8] |= 1 << (7 - i % 8);
            }

          buildTossimEvent(TOS_BCAST_ADDR, AM_GETMOTECOUNTRESPONSE, 
          tos_state.tos_time, &countResponse, replyMsg, replyLen);
          ret = 1;
          break;
        }
      case AM_SETDBGCOMMAND: 
        {
          SetDBGCommand *cmd = (SetDBGCommand *)payLoad;

#line 679
          dbg_set(cmd->dbg);
          break;
        }
      case AM_SETEVENTMASKCOMMAND: 
        {
          SetEventMaskCommand *setMaskCommand = (SetEventMaskCommand *)payLoad;

#line 685
          eventMask = setMaskCommand->mask;
          break;
        }
      case AM_BEGINBATCHCOMMAND: 
        {
          if (batchState[clidx] != 0) {
              dbg(DBG_SIM | DBG_ERROR, "SIM: duplicate begin batch");
            }
          dbg(DBG_SIM, "SIM: begin batch");
          batchState[clidx] = 1;
          break;
        }
      case AM_ENDBATCHCOMMAND: 
        {
          if (batchState[clidx] == 0) {
              dbg(DBG_SIM | DBG_ERROR, "SIM: end batch without begin");
            }
          dbg(DBG_SIM, "SIM: end batch");
          batchState[clidx] = 0;
          break;
        }

      default: 
        {


          event_t *event = (event_t *)malloc(sizeof(event_t ));

#line 712
          event_command_in_create(event, msg, payLoad);
          dbg(DBG_SIM, "SIM: Enqueuing command event 0x%lx\n", (unsigned long )event);
          queue_insert_event(& tos_state.queue, event);
#line 714
          ;
        }
    }

  return ret;
}

#line 795
static inline int readTossimCommand(void *socketChannel, int clidx)
#line 795
{
  GuiMsg *msg;
  unsigned char *header;
  char *payLoad = (void *)0;
  int curlen = 0;
  int rval;
  unsigned char ack;
  int reply;
  unsigned char *replyMsg = 0;
  int replyLen = 0;



  dbg_clear(DBG_SIM, "SIM: Reading command from client fd %p\n", socketChannel);

  header = (unsigned char *)malloc(14);
  msg = (GuiMsg *)malloc(sizeof(GuiMsg ));

  curlen = 0;
  while (curlen < 14) {
      dbg_clear(DBG_SIM, "SIM: Reading in GuiMsg header of size %d with length %d\n", 14, curlen);


      rval = ptII_socketChannelRead(socketChannel, header + curlen, 14 - curlen);
      if (rval <= 0) {


          dbg_clear(DBG_SIM, "SIM: Closing client socket %p.\n", socketChannel);
          free(msg);


          ptII_socketChannelClose(socketChannel);
          goto done;
        }
      else 
#line 828
        {
          curlen += rval;
        }
    }


  msg->msgType = ntohs(* (unsigned short *)&header[0]);
  msg->moteID = ntohs(* (unsigned short *)&header[2]);
  msg->time = __extension__ ({
#line 836
    register unsigned long __v;
#line 836
    register unsigned long __x = * (long long *)&header[4];

#line 836
    if (__builtin_constant_p(__x)) {
#line 836
      __v = ((((((((__x & 0xff00000000000000ull) >> 56) | ((__x & 0x00ff000000000000ull) >> 40)) | ((__x & 0x0000ff0000000000ull) >> 24)) | ((__x & 0x000000ff00000000ull) >> 8)) | ((__x & 0x00000000ff000000ull) << 8)) | ((__x & 0x0000000000ff0000ull) << 24)) | ((__x & 0x000000000000ff00ull) << 40)) | ((__x & 0x00000000000000ffull) << 56);
      }
    else {
#line 836
       __asm ("bswap %q0" : "=r"(__v) : "0"(__x));
      }
#line 836
    __v;
  }
  );
#line 837
  msg->payLoadLen = ntohs(* (unsigned short *)&header[12]);
  dbg_clear(DBG_SIM, "SIM: Command type %d mote %d time 0x%lx payloadlen %d\n", msg->msgType, msg->moteID, msg->time, msg->payLoadLen);
  if (msg->time < tos_state.tos_time) {
      msg->time = tos_state.tos_time;
    }


  if (msg->payLoadLen > 0) {
      payLoad = (char *)malloc(msg->payLoadLen);
      curlen = 0;
      while (curlen < msg->payLoadLen) {
          dbg(DBG_SIM, "SIM: Reading in GuiMsg payload of size %d with length %d\n", msg->payLoadLen, curlen);


          rval = ptII_socketChannelRead(socketChannel, payLoad + curlen, msg->payLoadLen - curlen);
          if (rval <= 0) {


              dbg(DBG_SIM, "SIM: Closing client socket %p.\n", socketChannel);
              free(msg);
              free(payLoad);
              goto done;
            }
          else 
#line 859
            {
              curlen += rval;
              dbg(DBG_SIM, "SIM: Read from command port, total: %d, need %d\n", curlen, msg->payLoadLen - curlen);
            }
        }
    }

  if (msg->moteID < tos_state.num_nodes) {


      reply = processCommand(socketChannel, clidx, msg, payLoad, &replyMsg, &replyLen);
    }
  else {
      dbg(DBG_SIM | DBG_ERROR, "SIM: Received command for invalid mote: %i\n", (int )msg->moteID);
    }


  if (batchState[clidx] != 0) {
      if (reply) {
          dbg(DBG_SIM | DBG_ERROR, "SIM: unexpected command response in batch!!\n");
        }
      return 0;
    }

  do {


      rval = ptII_socketChannelWrite(socketChannel, &ack, 1);
      if (rval < 0) {


          dbg(DBG_SIM, "SIM: Closing client socket %p.\n", socketChannel);
          goto done;
        }
    }
  while (
#line 893
  rval != 1);

  if (reply) {
      dbg(DBG_SIM, "SIM: Sending %d byte reply.\n", replyLen);


      writeTossimEvent(replyMsg, replyLen, socketChannel);
      free(replyMsg);
    }

  done: 
    return 0;
}

# 76 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/tos.c"
static inline void set_rate_value(double rate)
#line 76
{
  rate_value = rate;
}

static inline void rate_checkpoint(void)
#line 80
{
  rate_checkpoint_time = tos_state.tos_time;
  gettimeofday(&startTime, (void *)0);
}

# 120 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/tos.h"
static inline result_t rcombine(result_t r1, result_t r2)



{
  return r1 == FAIL ? FAIL : r2;
}

# 63 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
inline static  result_t BcastM$SubControl$init(void){
#line 63
  unsigned char result;
#line 63

#line 63
  result = QueuedSendM$StdControl$init();
#line 63
  result = rcombine(result, AMPromiscuous$Control$init());
#line 63

#line 63
  return result;
#line 63
}
#line 63
# 64 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Broadcast/BcastM.nc"
inline static void BcastM$initialize(void)
#line 64
{
  BcastM$iFwdBufHead[tos_state.current_node] = BcastM$iFwdBufTail[tos_state.current_node] = 0;
  BcastM$BcastSeqno[tos_state.current_node] = 0;
}

#line 115
static inline  result_t BcastM$StdControl$init(void)
#line 115
{
  BcastM$initialize();
  return BcastM$SubControl$init();
}

# 237 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/hpl.c"
static inline void TOSH_adc_init(void )
#line 237
{
}

# 63 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/PowerStateM.nc"
static inline   void PowerStateM$PowerState$ADCon(void)
#line 63
{
  if (!prof_on) {
#line 64
    return;
    }
#line 65
  dbg(DBG_POWER, "POWER: Mote %d ADC ON at %lld \n", tos_state.current_node, 
  tos_state.tos_time);
}

# 31 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/PowerState.nc"
inline static   void HPLADCC$PowerState$ADCon(void){
#line 31
  PowerStateM$PowerState$ADCon();
#line 31
}
#line 31
# 57 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/HPLADCC.nc"
static inline   result_t HPLADCC$ADC$init(void)
#line 57
{
  HPLADCC$PowerState$ADCon();
  TOSH_adc_init();
  return SUCCESS;
}

# 54 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/HPLADC.nc"
inline static   result_t ADCM$HPLADC$init(void){
#line 54
  unsigned char result;
#line 54

#line 54
  result = HPLADCC$ADC$init();
#line 54

#line 54
  return result;
#line 54
}
#line 54
# 73 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/ADCM.nc"
static inline  result_t ADCM$ADCControl$init(void)
#line 73
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 74
    {
      ADCM$ReqPort[tos_state.current_node] = 0;
      ADCM$ReqVector[tos_state.current_node] = ADCM$ContReqMask[tos_state.current_node] = 0;
    }
#line 77
    __nesc_atomic_end(__nesc_atomic); }
  dbg(DBG_BOOT, "ADC initialized.\n");

  return ADCM$HPLADC$init();
}

# 50 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/ADCControl.nc"
inline static  result_t PhotoTempM$ADCControl$init(void){
#line 50
  unsigned char result;
#line 50

#line 50
  result = ADCM$ADCControl$init();
#line 50

#line 50
  return result;
#line 50
}
#line 50
# 63 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
inline static  result_t PhotoTempM$TimerControl$init(void){
#line 63
  unsigned char result;
#line 63

#line 63
  result = TimerM$StdControl$init();
#line 63

#line 63
  return result;
#line 63
}
#line 63
# 68 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/HPLADCC.nc"
static inline   result_t HPLADCC$ADC$bindPort(uint8_t port, uint8_t adcPort)
#line 68
{
  return SUCCESS;
}

# 70 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/HPLADC.nc"
inline static   result_t ADCM$HPLADC$bindPort(uint8_t arg_0x7fa46a576920, uint8_t arg_0x7fa46a576bd8){
#line 70
  unsigned char result;
#line 70

#line 70
  result = HPLADCC$ADC$bindPort(arg_0x7fa46a576920, arg_0x7fa46a576bd8);
#line 70

#line 70
  return result;
#line 70
}
#line 70
# 87 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/ADCM.nc"
static inline  result_t ADCM$ADCControl$bindPort(uint8_t port, uint8_t adcPort)
#line 87
{
  return ADCM$HPLADC$bindPort(port, adcPort);
}

# 89 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/ADCControl.nc"
inline static  result_t PhotoTempM$ADCControl$bindPort(uint8_t arg_0x7fa46a5c15d0, uint8_t arg_0x7fa46a5c1888){
#line 89
  unsigned char result;
#line 89

#line 89
  result = ADCM$ADCControl$bindPort(arg_0x7fa46a5c15d0, arg_0x7fa46a5c1888);
#line 89

#line 89
  return result;
#line 89
}
#line 89
# 135 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/PhotoTempM.nc"
static inline  result_t PhotoTempM$PhotoStdControl$init(void)
#line 135
{
  PhotoTempM$ADCControl$bindPort(TOS_ADC_PHOTO_PORT, TOSH_ACTUAL_PHOTO_PORT);
  PhotoTempM$TimerControl$init();
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 138
    {
      PhotoTempM$photoSensor[tos_state.current_node] = PhotoTempM$stateIdle;
    }
#line 140
    __nesc_atomic_end(__nesc_atomic); }
#line 140
  ;
  dbg(DBG_BOOT, "PHOTO initialized.\n");
  return PhotoTempM$ADCControl$init();
}

# 159 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/tos.h"
static inline void *nmemset(void *to, int val, size_t n)
{
  char *cto = to;

  while (n--) * cto++ = val;

  return to;
}

# 454 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Route/MultiHopLEPSM.nc"
static inline  result_t MultiHopLEPSM$StdControl$init(void)
#line 454
{

  nmemset((void *)MultiHopLEPSM$NeighborTbl[tos_state.current_node], 0, sizeof(MultiHopLEPSM$TableEntry ) * MultiHopLEPSM$ROUTE_TABLE_SIZE);
  MultiHopLEPSM$BaseStation[tos_state.current_node].id = TOS_UART_ADDR;
  MultiHopLEPSM$BaseStation[tos_state.current_node].parent = TOS_UART_ADDR;
  MultiHopLEPSM$BaseStation[tos_state.current_node].flags = MultiHopLEPSM$NBRFLAG_VALID;
  MultiHopLEPSM$BaseStation[tos_state.current_node].hop = 0;
  MultiHopLEPSM$gpCurrentParent[tos_state.current_node] = (void *)0;
  MultiHopLEPSM$gbCurrentHopCount[tos_state.current_node] = MultiHopLEPSM$ROUTE_INVALID;
  MultiHopLEPSM$gCurrentSeqNo[tos_state.current_node] = 0;
  MultiHopLEPSM$gwEstTicks[tos_state.current_node] = 0;
  MultiHopLEPSM$gUpdateInterval[tos_state.current_node] = MultiHopLEPSM$DATA_TO_ROUTE_RATIO * MultiHopLEPSM$DATA_FREQ;
  MultiHopLEPSM$gfSendRouteBusy[tos_state.current_node] = FALSE;

  if (TOS_LOCAL_ADDRESS == MultiHopLEPSM$BASE_STATION_ADDRESS) {

      MultiHopLEPSM$gpCurrentParent[tos_state.current_node] = &MultiHopLEPSM$BaseStation[tos_state.current_node];
      MultiHopLEPSM$gbCurrentHopCount[tos_state.current_node] = 0;
    }


  return SUCCESS;
}

# 63 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
inline static  result_t MultiHopEngineM$SubControl$init(void){
#line 63
  unsigned char result;
#line 63

#line 63
  result = QueuedSendM$StdControl$init();
#line 63
  result = rcombine(result, MultiHopLEPSM$StdControl$init());
#line 63

#line 63
  return result;
#line 63
}
#line 63
inline static  result_t MultiHopEngineM$CommStdControl$init(void){
#line 63
  unsigned char result;
#line 63

#line 63
  result = AMPromiscuous$Control$init();
#line 63

#line 63
  return result;
#line 63
}
#line 63
# 91 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Route/MultiHopEngineM.nc"
inline static void MultiHopEngineM$initialize(void)
#line 91
{
  int n;

  for (n = 0; n < MultiHopEngineM$FWD_QUEUE_SIZE; n++) {
      MultiHopEngineM$FwdBufList[tos_state.current_node][n] = &MultiHopEngineM$FwdBuffers[tos_state.current_node][n];
    }

  MultiHopEngineM$iFwdBufHead[tos_state.current_node] = MultiHopEngineM$iFwdBufTail[tos_state.current_node] = 0;
}

static inline  result_t MultiHopEngineM$StdControl$init(void)
#line 101
{
  MultiHopEngineM$initialize();
  MultiHopEngineM$CommStdControl$init();
  return MultiHopEngineM$SubControl$init();
}

# 76 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../apps/Surge/SurgeM.nc"
inline static void SurgeM$initialize(void)
#line 76
{
  SurgeM$timer_rate[tos_state.current_node] = INITIAL_TIMER_RATE;
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 78
    SurgeM$gfSendBusy[tos_state.current_node] = FALSE;
#line 78
    __nesc_atomic_end(__nesc_atomic); }
  SurgeM$sleeping[tos_state.current_node] = FALSE;
  SurgeM$rebroadcast_adc_packet[tos_state.current_node] = FALSE;
  SurgeM$focused[tos_state.current_node] = FALSE;
}

# 60 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/LedsM.nc"
static inline void LedsM$updateLeds(void)
#line 60
{
  LedEvent e;

#line 62
  e.red = (LedsM$ledsOn[tos_state.current_node] & LedsM$RED_BIT) > 0;
  e.green = (LedsM$ledsOn[tos_state.current_node] & LedsM$GREEN_BIT) > 0;
  e.yellow = (LedsM$ledsOn[tos_state.current_node] & LedsM$YELLOW_BIT) > 0;
  sendTossimEvent(tos_state.current_node, AM_LEDEVENT, tos_state.tos_time, &e);


  ptII_updateLeds(tos_state.current_node, (short )e.red, (short )e.green, (short )e.yellow);
}


static inline   result_t LedsM$Leds$init(void)
#line 72
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 73
    {
      LedsM$ledsOn[tos_state.current_node] = 0;
      dbg(DBG_BOOT, "LEDS: initialized.\n");
      LedsM$updateLeds();
    }
#line 77
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 56 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Leds.nc"
inline static   result_t SurgeM$Leds$init(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = LedsM$Leds$init();
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 100 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../apps/Surge/SurgeM.nc"
static inline  result_t SurgeM$StdControl$init(void)
#line 100
{
  SurgeM$Leds$init();
  SurgeM$initialize();
  return SUCCESS;
}

# 63 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
inline static  result_t Nido$StdControl$init(void){
#line 63
  unsigned char result;
#line 63

#line 63
  result = QueuedSendM$StdControl$init();
#line 63
  result = rcombine(result, SurgeM$StdControl$init());
#line 63
  result = rcombine(result, AMPromiscuous$Control$init());
#line 63
  result = rcombine(result, MultiHopEngineM$StdControl$init());
#line 63
  result = rcombine(result, PhotoTempM$PhotoStdControl$init());
#line 63
  result = rcombine(result, TimerM$StdControl$init());
#line 63
  result = rcombine(result, BcastM$StdControl$init());
#line 63

#line 63
  return result;
#line 63
}
#line 63
inline static  result_t AMPromiscuous$TimerControl$init(void){
#line 63
  unsigned char result;
#line 63

#line 63
  result = TimerM$StdControl$init();
#line 63

#line 63
  return result;
#line 63
}
#line 63
# 128 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/HPLClock.nc"
static inline   result_t HPLClock$Clock$setRate(char interval, char scale)
#line 128
{
  HPLClock$mscale[tos_state.current_node] = scale;
  HPLClock$minterval[tos_state.current_node] = interval;
  TOSH_clock_set_rate(interval, scale);
  return SUCCESS;
}

# 96 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Clock.nc"
inline static   result_t TimerM$Clock$setRate(char arg_0x7fa46a860798, char arg_0x7fa46a860a48){
#line 96
  unsigned char result;
#line 96

#line 96
  result = HPLClock$Clock$setRate(arg_0x7fa46a860798, arg_0x7fa46a860a48);
#line 96

#line 96
  return result;
#line 96
}
#line 96
# 217 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/hpl.c"
static inline void event_clocktick_invalidate(event_t *event)
#line 217
{
  clock_tick_data_t *data = event->data;

#line 219
  data->valid = 0;
}

#line 115
static inline uint8_t TOSH_get_clock_interval(void)
#line 115
{
  return intervals[tos_state.current_node] - 1;
}

# 91 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/HPLClock.nc"
static inline   uint8_t HPLClock$Clock$getInterval(void)
#line 91
{
  return TOSH_get_clock_interval();
}

# 121 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Clock.nc"
inline static   uint8_t TimerM$Clock$getInterval(void){
#line 121
  unsigned char result;
#line 121

#line 121
  result = HPLClock$Clock$getInterval();
#line 121

#line 121
  return result;
#line 121
}
#line 121
# 54 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/HPLPowerManagementM.nc"
static inline   uint8_t HPLPowerManagementM$PowerManagement$adjustPower(void)
#line 54
{
  return HPLPowerManagementM$IDLE;
}

# 41 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/PowerManagement.nc"
inline static   uint8_t TimerM$PowerManagement$adjustPower(void){
#line 41
  unsigned char result;
#line 41

#line 41
  result = HPLPowerManagementM$PowerManagement$adjustPower();
#line 41

#line 41
  return result;
#line 41
}
#line 41
# 82 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/HPLClock.nc"
static inline   void HPLClock$Clock$setInterval(uint8_t value)
#line 82
{
  TOSH_clock_set_interval(value);
}

# 105 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Clock.nc"
inline static   void TimerM$Clock$setInterval(uint8_t arg_0x7fa46a867bf0){
#line 105
  HPLClock$Clock$setInterval(arg_0x7fa46a867bf0);
#line 105
}
#line 105
# 113 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/HPLClock.nc"
static inline   uint8_t HPLClock$Clock$readCounter(void)
#line 113
{
  return TOSH_get_clock0_counter();
}

# 153 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Clock.nc"
inline static   uint8_t TimerM$Clock$readCounter(void){
#line 153
  unsigned char result;
#line 153

#line 153
  result = HPLClock$Clock$readCounter();
#line 153

#line 153
  return result;
#line 153
}
#line 153
# 129 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/TimerM.nc"
inline static void TimerM$adjustInterval(void)
#line 129
{
  uint8_t i;
#line 130
  uint8_t val = TimerM$maxTimerInterval;

#line 131
  if (TimerM$mState[tos_state.current_node]) {
      for (i = 0; i < NUM_TIMERS; i++) {
          if (TimerM$mState[tos_state.current_node] & (0x1L << i) && TimerM$mTimerList[tos_state.current_node][i].ticksLeft < val) {
              val = TimerM$mTimerList[tos_state.current_node][i].ticksLeft;
            }
        }
#line 148
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 148
        {
          i = TimerM$Clock$readCounter() + 3;
          if (val < i) {
              val = i;
            }
          TimerM$mInterval[tos_state.current_node] = val;
          TimerM$Clock$setInterval(TimerM$mInterval[tos_state.current_node]);
          TimerM$setIntervalFlag[tos_state.current_node] = 0;
        }
#line 156
        __nesc_atomic_end(__nesc_atomic); }
    }
  else {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 159
        {
          TimerM$mInterval[tos_state.current_node] = TimerM$maxTimerInterval;
          TimerM$Clock$setInterval(TimerM$mInterval[tos_state.current_node]);
          TimerM$setIntervalFlag[tos_state.current_node] = 0;
        }
#line 163
        __nesc_atomic_end(__nesc_atomic); }
    }
  TimerM$PowerManagement$adjustPower();
}

#line 186
static inline void TimerM$enqueue(uint8_t value)
#line 186
{
  if (TimerM$queue_tail[tos_state.current_node] == NUM_TIMERS - 1) {
    TimerM$queue_tail[tos_state.current_node] = -1;
    }
#line 189
  TimerM$queue_tail[tos_state.current_node]++;
  TimerM$queue_size[tos_state.current_node]++;
  TimerM$queue[tos_state.current_node][(uint8_t )TimerM$queue_tail[tos_state.current_node]] = value;
}

# 98 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/hardware.c"
static inline short clear_io_bit(char port, char bit)
#line 98
{
  dbg(DBG_HARD, "Clear bit %i of port %u\n", (int )bit, port);
  return 0xff;
}

# 276 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/hardware.nido.h"
static __inline void TOSH_CLR_PW2_PIN(void)
#line 276
{
#line 276
  clear_io_bit(0x40, 2);
}

# 79 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/sensorboard.h"
static __inline void TOSH_CLR_SOUNDER_CTL_PIN(void)
#line 79
{
#line 79
  TOSH_CLR_PW2_PIN();
}

# 63 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/sensorboards/micasb/SounderM.nc"
static inline  result_t SounderM$StdControl$stop(void)
#line 63
{
  TOSH_CLR_SOUNDER_CTL_PIN();
  dbg(DBG_SOUNDER, "SOUNDER stopped.\n");
  return SUCCESS;
}

# 78 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
inline static  result_t SurgeM$Sounder$stop(void){
#line 78
  unsigned char result;
#line 78

#line 78
  result = SounderM$StdControl$stop();
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 276 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/hardware.nido.h"
static __inline void TOSH_SET_PW2_PIN(void)
#line 276
{
#line 276
  set_io_bit(0x40, 2);
}

# 79 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/sensorboard.h"
static __inline void TOSH_SET_SOUNDER_CTL_PIN(void)
#line 79
{
#line 79
  TOSH_SET_PW2_PIN();
}

# 57 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/sensorboards/micasb/SounderM.nc"
static inline  result_t SounderM$StdControl$start(void)
#line 57
{
  TOSH_SET_SOUNDER_CTL_PIN();
  dbg(DBG_SOUNDER, "SOUNDER started.\n");
  return SUCCESS;
}

# 70 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
inline static  result_t SurgeM$Sounder$start(void){
#line 70
  unsigned char result;
#line 70

#line 70
  result = SounderM$StdControl$start();
#line 70

#line 70
  return result;
#line 70
}
#line 70
# 334 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/PhotoTempM.nc"
static inline   result_t PhotoTempM$ExternalPhotoADC$getData(void)
#line 334
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 335
    {
      PhotoTempM$photoSensor[tos_state.current_node] = PhotoTempM$stateReadOnce;
    }
#line 337
    __nesc_atomic_end(__nesc_atomic); }
#line 337
  ;
  TOS_post(PhotoTempM$getSample);
  return SUCCESS;
}

# 52 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/ADC.nc"
inline static   result_t SurgeM$ADC$getData(void){
#line 52
  unsigned char result;
#line 52

#line 52
  result = PhotoTempM$ExternalPhotoADC$getData();
#line 52

#line 52
  return result;
#line 52
}
#line 52
# 119 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../apps/Surge/SurgeM.nc"
static inline  result_t SurgeM$Timer$fired(void)
#line 119
{
  dbg(DBG_USR1, "SurgeM: Timer fired\n");
  SurgeM$timer_ticks[tos_state.current_node]++;
  if (SurgeM$timer_ticks[tos_state.current_node] % SurgeM$TIMER_GETADC_COUNT == 0) {
      SurgeM$ADC$getData();
    }

  if (SurgeM$focused[tos_state.current_node] && SurgeM$timer_ticks[tos_state.current_node] % SurgeM$TIMER_CHIRP_COUNT == 0) {
      SurgeM$Sounder$start();
    }

  if (SurgeM$focused[tos_state.current_node] && SurgeM$timer_ticks[tos_state.current_node] % SurgeM$TIMER_CHIRP_COUNT == 1) {
      SurgeM$Sounder$stop();
    }
  return SUCCESS;
}

# 179 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/AMPromiscuous.nc"
static inline  result_t AMPromiscuous$ActivityTimer$fired(void)
#line 179
{
  AMPromiscuous$lastCount[tos_state.current_node] = AMPromiscuous$counter[tos_state.current_node];
  AMPromiscuous$counter[tos_state.current_node] = 0;
  return SUCCESS;
}

# 627 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Route/MultiHopLEPSM.nc"
static inline  result_t MultiHopLEPSM$Timer$fired(void)
#line 627
{
  TOS_post(MultiHopLEPSM$TimerTask);
  return SUCCESS;
}

# 29 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/PowerState.nc"
inline static   void HPLADCC$PowerState$ADCsample(uint8_t arg_0x7fa46aaeca20){
#line 29
  PowerStateM$PowerState$ADCsample(arg_0x7fa46aaeca20);
#line 29
}
#line 29
# 72 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/HPLADCC.nc"
static inline   result_t HPLADCC$ADC$samplePort(uint8_t port)
#line 72
{
  HPLADCC$PowerState$ADCsample(port);
  TOSH_adc_sample_port(port);
  return SUCCESS;
}

# 77 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/HPLADC.nc"
inline static   result_t ADCM$HPLADC$samplePort(uint8_t arg_0x7fa46a575608){
#line 77
  unsigned char result;
#line 77

#line 77
  result = HPLADCC$ADC$samplePort(arg_0x7fa46a575608);
#line 77

#line 77
  return result;
#line 77
}
#line 77
# 132 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/ADCM.nc"
static __inline result_t ADCM$startGet(uint8_t newState, uint8_t port)
#line 132
{
  uint16_t PortMask;
#line 133
  uint16_t oldReqVector;
  result_t Result = SUCCESS;

  if (port > TOSH_ADC_PORTMAPSIZE) {
      return FAIL;
    }

  PortMask = 1 << port;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 142
    {
      if ((PortMask & ADCM$ReqVector[tos_state.current_node]) != 0) {

          Result = FAIL;
        }
      else {
          oldReqVector = ADCM$ReqVector[tos_state.current_node];
          ADCM$ReqVector[tos_state.current_node] |= PortMask;
          if (newState == ADCM$CONTINUOUS_CONVERSION) {
              ADCM$ContReqMask[tos_state.current_node] |= PortMask;
            }
          if (oldReqVector == 0) {

              ADCM$ReqPort[tos_state.current_node] = port;
              Result = ADCM$HPLADC$samplePort(port);
            }
        }
    }
#line 159
    __nesc_atomic_end(__nesc_atomic); }


  return Result;
}

static inline   result_t ADCM$ADC$getData(uint8_t port)
#line 165
{
  return ADCM$startGet(ADCM$SINGLE_CONVERSION, port);
}

# 52 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/ADC.nc"
inline static   result_t PhotoTempM$InternalTempADC$getData(void){
#line 52
  unsigned char result;
#line 52

#line 52
  result = ADCM$ADC$getData(TOS_ADC_TEMP_PORT);
#line 52

#line 52
  return result;
#line 52
}
#line 52
inline static   result_t PhotoTempM$InternalPhotoADC$getData(void){
#line 52
  unsigned char result;
#line 52

#line 52
  result = ADCM$ADC$getData(TOS_ADC_PHOTO_PORT);
#line 52

#line 52
  return result;
#line 52
}
#line 52
# 296 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/PhotoTempM.nc"
static inline  result_t PhotoTempM$PhotoTempTimer$fired(void)
#line 296
{
  switch (PhotoTempM$hardwareStatus[tos_state.current_node]) {
      case PhotoTempM$sensorIdle: 
        case PhotoTempM$sensorTempReady: 
          case PhotoTempM$sensorPhotoReady: 

            break;
      case PhotoTempM$sensorPhotoStarting: 
        PhotoTempM$hardwareStatus[tos_state.current_node] = PhotoTempM$sensorPhotoReady;
      if (PhotoTempM$InternalPhotoADC$getData() == SUCCESS) {

          return SUCCESS;
        }
#line 308
      ;
      break;
      case PhotoTempM$sensorTempStarting: 
        PhotoTempM$hardwareStatus[tos_state.current_node] = PhotoTempM$sensorTempReady;
      if (PhotoTempM$InternalTempADC$getData() == SUCCESS) {

          return SUCCESS;
        }
#line 315
      ;
      break;
    }
#line 317
  ;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 319
    {
      PhotoTempM$waitingForSample[tos_state.current_node] = FALSE;
    }
#line 321
    __nesc_atomic_end(__nesc_atomic); }
#line 321
  ;
  TOS_post(PhotoTempM$getSample);
  return SUCCESS;
}

# 182 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/TimerM.nc"
static inline   result_t TimerM$Timer$default$fired(uint8_t id)
#line 182
{
  return SUCCESS;
}

# 73 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Timer.nc"
inline static  result_t TimerM$Timer$fired(uint8_t arg_0x7fa46a86f8c0){
#line 73
  unsigned char result;
#line 73

#line 73
  switch (arg_0x7fa46a86f8c0) {
#line 73
    case 0U:
#line 73
      result = SurgeM$Timer$fired();
#line 73
      break;
#line 73
    case 1U:
#line 73
      result = AMPromiscuous$ActivityTimer$fired();
#line 73
      break;
#line 73
    case 2U:
#line 73
      result = MultiHopLEPSM$Timer$fired();
#line 73
      break;
#line 73
    case 3U:
#line 73
      result = PhotoTempM$PhotoTempTimer$fired();
#line 73
      break;
#line 73
    default:
#line 73
      result = TimerM$Timer$default$fired(arg_0x7fa46a86f8c0);
#line 73
      break;
#line 73
    }
#line 73

#line 73
  return result;
#line 73
}
#line 73
# 194 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/TimerM.nc"
static inline uint8_t TimerM$dequeue(void)
#line 194
{
  if (TimerM$queue_size[tos_state.current_node] == 0) {
    return NUM_TIMERS;
    }
#line 197
  if (TimerM$queue_head[tos_state.current_node] == NUM_TIMERS - 1) {
    TimerM$queue_head[tos_state.current_node] = -1;
    }
#line 199
  TimerM$queue_head[tos_state.current_node]++;
  TimerM$queue_size[tos_state.current_node]--;
  return TimerM$queue[tos_state.current_node][(uint8_t )TimerM$queue_head[tos_state.current_node]];
}

static inline  void TimerM$signalOneTimer(void)
#line 204
{
  uint8_t itimer = TimerM$dequeue();

#line 206
  if (itimer < NUM_TIMERS) {
    TimerM$Timer$fired(itimer);
    }
}

#line 210
static inline  void TimerM$HandleFire(void)
#line 210
{
  uint8_t i;
  uint16_t int_out;

#line 213
  TimerM$setIntervalFlag[tos_state.current_node] = 1;


  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 216
    {
      int_out = TimerM$interval_outstanding[tos_state.current_node];
      TimerM$interval_outstanding[tos_state.current_node] = 0;
    }
#line 219
    __nesc_atomic_end(__nesc_atomic); }
  if (TimerM$mState[tos_state.current_node]) {
      for (i = 0; i < NUM_TIMERS; i++) {
          if (TimerM$mState[tos_state.current_node] & (0x1L << i)) {
              TimerM$mTimerList[tos_state.current_node][i].ticksLeft -= int_out;
              if (TimerM$mTimerList[tos_state.current_node][i].ticksLeft <= 2) {


                  if (TOS_post(TimerM$signalOneTimer)) {
                      if (TimerM$mTimerList[tos_state.current_node][i].type == TIMER_REPEAT) {
                          TimerM$mTimerList[tos_state.current_node][i].ticksLeft += TimerM$mTimerList[tos_state.current_node][i].ticks;
                        }
                      else 
#line 230
                        {
                          TimerM$mState[tos_state.current_node] &= ~(0x1L << i);
                        }
                      TimerM$enqueue(i);
                    }
                  else {
                      dbg(DBG_ERROR, "TimerM: Have to wait another timer interval.\n");


                      TimerM$mTimerList[tos_state.current_node][i].ticksLeft = TimerM$mInterval[tos_state.current_node];
                    }
                }
            }
        }
    }


  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 247
    int_out = TimerM$interval_outstanding[tos_state.current_node];
#line 247
    __nesc_atomic_end(__nesc_atomic); }
  if (int_out == 0) {
    TimerM$adjustInterval();
    }
}

static inline   result_t TimerM$Clock$fire(void)
#line 253
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 254
    {



      if (TimerM$interval_outstanding[tos_state.current_node] == 0) {
        TOS_post(TimerM$HandleFire);
        }
      else {
#line 261
        dbg(DBG_ERROR, "Don't post handle fire, we're not ready\n");
        }
      TimerM$interval_outstanding[tos_state.current_node] += TimerM$Clock$getInterval() + 1;
    }
#line 264
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 180 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Clock.nc"
inline static   result_t HPLClock$Clock$fire(void){
#line 180
  unsigned char result;
#line 180

#line 180
  result = TimerM$Clock$fire();
#line 180

#line 180
  return result;
#line 180
}
#line 180
# 136 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/HPLClock.nc"
static inline  void SIG_OUTPUT_COMPARE2_interrupt(void)
#line 136
{
  if (HPLClock$set_flag[tos_state.current_node]) {
      HPLClock$mscale[tos_state.current_node] = HPLClock$nextScale[tos_state.current_node];
      HPLClock$nextScale[tos_state.current_node] |= 0x8;
      TOSH_clock_set_rate(HPLClock$minterval[tos_state.current_node], HPLClock$nextScale[tos_state.current_node]);
      HPLClock$set_flag[tos_state.current_node] = 0;
    }
  HPLClock$Clock$fire();
}

# 156 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/hpl.c"
static inline void event_clocktick_handle(event_t *event, 
struct TOS_state *state)
#line 157
{

  event_queue_t *queue = & state->queue;
  clock_tick_data_t *data = (clock_tick_data_t *)event->data;




  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 165
    TOS_LOCAL_ADDRESS = (short )(0 & 0xffff);
#line 165
    __nesc_atomic_end(__nesc_atomic); }







  if (data->valid) {
      if (dbg_active(DBG_CLOCK)) {
          char buf[1024];

#line 176
          printTime(buf, 1024);
          dbg(DBG_CLOCK, "CLOCK: event handled for mote %i at %s (%i ticks).\n", event->mote, buf, data->interval);
        }

      setTime[tos_state.current_node] = tos_state.tos_time;
      event->time = event->time + data->interval;
      queue_insert_event(queue, event);
      if (! data->disabled) {
          SIG_OUTPUT_COMPARE2_interrupt();
        }
      else {
          interruptPending[tos_state.current_node] = 1;
        }
    }
  else {


      event_cleanup(event);
    }
}

# 83 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/HPLADCC.nc"
static inline   result_t HPLADCC$ADC$sampleStop(void)
#line 83
{
  TOSH_adc_sample_stop();
  return SUCCESS;
}

# 91 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/HPLADC.nc"
inline static   result_t ADCM$HPLADC$sampleStop(void){
#line 91
  unsigned char result;
#line 91

#line 91
  result = HPLADCC$ADC$sampleStop();
#line 91

#line 91
  return result;
#line 91
}
#line 91
# 380 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/PhotoTempM.nc"
static inline    result_t PhotoTempM$ExternalTempADC$default$dataReady(uint16_t data)
#line 380
{
  return SUCCESS;
}

# 70 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/ADC.nc"
inline static   result_t PhotoTempM$ExternalTempADC$dataReady(uint16_t arg_0x7fa46a7d87f0){
#line 70
  unsigned char result;
#line 70

#line 70
  result = PhotoTempM$ExternalTempADC$default$dataReady(arg_0x7fa46a7d87f0);
#line 70

#line 70
  return result;
#line 70
}
#line 70
# 384 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/PhotoTempM.nc"
static inline   result_t PhotoTempM$InternalTempADC$dataReady(uint16_t data)
#line 384
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 385
    {
      PhotoTempM$waitingForSample[tos_state.current_node] = FALSE;
      switch (PhotoTempM$tempSensor[tos_state.current_node]) {
          default: 
            case PhotoTempM$stateIdle: 

              case PhotoTempM$stateReadOnce: 
                PhotoTempM$tempSensor[tos_state.current_node] = PhotoTempM$stateIdle;
          break;
          case PhotoTempM$stateContinuous: 
            break;
        }
#line 396
      ;
    }
#line 397
    __nesc_atomic_end(__nesc_atomic); }
#line 397
  ;
  TOS_post(PhotoTempM$getSample);
  return PhotoTempM$ExternalTempADC$dataReady(data);
}

# 560 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Route/MultiHopLEPSM.nc"
static inline  result_t MultiHopLEPSM$RouteSelect$initializeFields(TOS_MsgPtr Msg, uint8_t id)
#line 560
{
  TOS_MHopMsg *pMHMsg = (TOS_MHopMsg *)&Msg->data[0];

  pMHMsg->sourceaddr = pMHMsg->originaddr = TOS_LOCAL_ADDRESS;
  pMHMsg->hopcount = MultiHopLEPSM$ROUTE_INVALID;

  return SUCCESS;
}

# 86 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/RouteSelect.nc"
inline static  result_t MultiHopEngineM$RouteSelect$initializeFields(TOS_MsgPtr arg_0x7fa46a6c1468, uint8_t arg_0x7fa46a6c1720){
#line 86
  unsigned char result;
#line 86

#line 86
  result = MultiHopLEPSM$RouteSelect$initializeFields(arg_0x7fa46a6c1468, arg_0x7fa46a6c1720);
#line 86

#line 86
  return result;
#line 86
}
#line 86
# 124 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Route/MultiHopEngineM.nc"
static inline  result_t MultiHopEngineM$Send$send(uint8_t id, TOS_MsgPtr pMsg, uint16_t PayloadLen)
#line 124
{

  uint16_t usMHLength = (unsigned long )& ((TOS_MHopMsg *)0)->data + PayloadLen;

  if (usMHLength > 29) {
      return FAIL;
    }



  MultiHopEngineM$RouteSelect$initializeFields(pMsg, id);

  if (MultiHopEngineM$RouteSelect$selectRoute(pMsg, id) != SUCCESS) {
      return FAIL;
    }



  if (MultiHopEngineM$SendMsg$send(id, pMsg->addr, usMHLength, pMsg) != SUCCESS) {
      return FAIL;
    }

  return SUCCESS;
}

# 83 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Send.nc"
inline static  result_t SurgeM$Send$send(TOS_MsgPtr arg_0x7fa46a7d0c00, uint16_t arg_0x7fa46a7cf020){
#line 83
  unsigned char result;
#line 83

#line 83
  result = MultiHopEngineM$Send$send(0U, arg_0x7fa46a7d0c00, arg_0x7fa46a7cf020);
#line 83

#line 83
  return result;
#line 83
}
#line 83
# 573 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Route/MultiHopLEPSM.nc"
static inline  uint16_t MultiHopLEPSM$RouteControl$getParent(void)
#line 573
{

  uint16_t addr;

  addr = MultiHopLEPSM$gpCurrentParent[tos_state.current_node] != (void *)0 ? MultiHopLEPSM$gpCurrentParent[tos_state.current_node]->id : 0xffff;

  return addr;
}

# 49 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/RouteControl.nc"
inline static  uint16_t MultiHopEngineM$RouteSelectCntl$getParent(void){
#line 49
  unsigned short result;
#line 49

#line 49
  result = MultiHopLEPSM$RouteControl$getParent();
#line 49

#line 49
  return result;
#line 49
}
#line 49
# 215 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Route/MultiHopEngineM.nc"
static inline  uint16_t MultiHopEngineM$RouteControl$getParent(void)
#line 215
{
  return MultiHopEngineM$RouteSelectCntl$getParent();
}

# 49 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/RouteControl.nc"
inline static  uint16_t SurgeM$RouteControl$getParent(void){
#line 49
  unsigned short result;
#line 49

#line 49
  result = MultiHopEngineM$RouteControl$getParent();
#line 49

#line 49
  return result;
#line 49
}
#line 49
# 106 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Send.nc"
inline static  void *SurgeM$Send$getBuffer(TOS_MsgPtr arg_0x7fa46a7cfa90, uint16_t *arg_0x7fa46a7cfd88){
#line 106
  void *result;
#line 106

#line 106
  result = MultiHopEngineM$Send$getBuffer(0U, arg_0x7fa46a7cfa90, arg_0x7fa46a7cfd88);
#line 106

#line 106
  return result;
#line 106
}
#line 106
# 84 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../apps/Surge/SurgeM.nc"
static inline  void SurgeM$SendData(void)
#line 84
{
  SurgeMsg *pReading;
  uint16_t Len;

#line 87
  dbg(DBG_USR1, "SurgeM: Sending sensor reading\n");

  if ((pReading = (SurgeMsg *)SurgeM$Send$getBuffer(&SurgeM$gMsgBuffer[tos_state.current_node], &Len))) {
      pReading->type = SURGE_TYPE_SENSORREADING;
      pReading->parentaddr = SurgeM$RouteControl$getParent();
      pReading->reading = SurgeM$gSensorData[tos_state.current_node];

      if (SurgeM$Send$send(&SurgeM$gMsgBuffer[tos_state.current_node], sizeof(SurgeMsg )) != SUCCESS) {
        { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 95
          SurgeM$gfSendBusy[tos_state.current_node] = FALSE;
#line 95
          __nesc_atomic_end(__nesc_atomic); }
        }
    }
}

#line 136
static inline   result_t SurgeM$ADC$dataReady(uint16_t data)
#line 136
{


  dbg(DBG_USR1, "SurgeM: Got ADC reading: 0x%x\n", data);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 140
    {
      if (!SurgeM$gfSendBusy[tos_state.current_node]) {
          SurgeM$gfSendBusy[tos_state.current_node] = TRUE;
          SurgeM$gSensorData[tos_state.current_node] = data;
          TOS_post(SurgeM$SendData);
        }
    }
#line 146
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 70 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/ADC.nc"
inline static   result_t PhotoTempM$ExternalPhotoADC$dataReady(uint16_t arg_0x7fa46a7d87f0){
#line 70
  unsigned char result;
#line 70

#line 70
  result = SurgeM$ADC$dataReady(arg_0x7fa46a7d87f0);
#line 70

#line 70
  return result;
#line 70
}
#line 70
# 362 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/PhotoTempM.nc"
static inline   result_t PhotoTempM$InternalPhotoADC$dataReady(uint16_t data)
#line 362
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 363
    {
      PhotoTempM$waitingForSample[tos_state.current_node] = FALSE;
      switch (PhotoTempM$photoSensor[tos_state.current_node]) {
          default: 
            case PhotoTempM$stateIdle: 

              case PhotoTempM$stateReadOnce: 
                PhotoTempM$photoSensor[tos_state.current_node] = PhotoTempM$stateIdle;
          break;
          case PhotoTempM$stateContinuous: 
            break;
        }
#line 374
      ;
    }
#line 375
    __nesc_atomic_end(__nesc_atomic); }
#line 375
  ;
  TOS_post(PhotoTempM$getSample);
  return PhotoTempM$ExternalPhotoADC$dataReady(data);
}

# 91 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/ADCM.nc"
static inline    result_t ADCM$ADC$default$dataReady(uint8_t port, uint16_t data)
#line 91
{
  return FAIL;
}

# 70 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/ADC.nc"
inline static   result_t ADCM$ADC$dataReady(uint8_t arg_0x7fa46a57cbf8, uint16_t arg_0x7fa46a7d87f0){
#line 70
  unsigned char result;
#line 70

#line 70
  switch (arg_0x7fa46a57cbf8) {
#line 70
    case TOS_ADC_PHOTO_PORT:
#line 70
      result = PhotoTempM$InternalPhotoADC$dataReady(arg_0x7fa46a7d87f0);
#line 70
      break;
#line 70
    case TOS_ADC_TEMP_PORT:
#line 70
      result = PhotoTempM$InternalTempADC$dataReady(arg_0x7fa46a7d87f0);
#line 70
      break;
#line 70
    default:
#line 70
      result = ADCM$ADC$default$dataReady(arg_0x7fa46a57cbf8, arg_0x7fa46a7d87f0);
#line 70
      break;
#line 70
    }
#line 70

#line 70
  return result;
#line 70
}
#line 70
# 95 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/ADCM.nc"
static inline   result_t ADCM$HPLADC$dataReady(uint16_t data)
#line 95
{
  uint16_t doneValue = data;
  uint8_t donePort;
  result_t Result;


  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 101
    {
      donePort = ADCM$ReqPort[tos_state.current_node];

      if (((1 << donePort) & ADCM$ContReqMask[tos_state.current_node]) == 0) {
          ADCM$HPLADC$sampleStop();
          ADCM$ReqVector[tos_state.current_node] &= ~(1 << donePort);
        }

      if (ADCM$ReqVector[tos_state.current_node]) {
          do {
              ADCM$ReqPort[tos_state.current_node]++;
              ADCM$ReqPort[tos_state.current_node] = ADCM$ReqPort[tos_state.current_node] == TOSH_ADC_PORTMAPSIZE ? 0 : ADCM$ReqPort[tos_state.current_node];
            }
          while (((
#line 113
          1 << ADCM$ReqPort[tos_state.current_node]) & ADCM$ReqVector[tos_state.current_node]) == 0);
          ADCM$HPLADC$samplePort(ADCM$ReqPort[tos_state.current_node]);
        }
    }
#line 116
    __nesc_atomic_end(__nesc_atomic); }


  dbg(DBG_ADC, "adc_tick: port %d with value %i \n", donePort, (int )data);
  Result = ADCM$ADC$dataReady(donePort, doneValue);

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 122
    {
      if (Result == FAIL && ADCM$ContReqMask[tos_state.current_node] & (1 << donePort)) {
          ADCM$HPLADC$sampleStop();
          ADCM$ContReqMask[tos_state.current_node] &= ~(1 << donePort);
        }
    }
#line 127
    __nesc_atomic_end(__nesc_atomic); }

  return SUCCESS;
}

# 99 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/HPLADC.nc"
inline static   result_t HPLADCC$ADC$dataReady(uint16_t arg_0x7fa46a573c18){
#line 99
  unsigned char result;
#line 99

#line 99
  result = ADCM$HPLADC$dataReady(arg_0x7fa46a573c18);
#line 99

#line 99
  return result;
#line 99
}
#line 99
# 75 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/PowerStateM.nc"
static inline   void PowerStateM$PowerState$ADCdataReady(void)
#line 75
{
  if (!prof_on) {
#line 76
    return;
    }
#line 77
  dbg(DBG_POWER, "POWER: Mote %d ADC DATA_READY at %lld \n", tos_state.current_node, 
  tos_state.tos_time);
}

# 30 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/PowerState.nc"
inline static   void HPLADCC$PowerState$ADCdataReady(void){
#line 30
  PowerStateM$PowerState$ADCdataReady();
#line 30
}
#line 30
# 89 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/HPLADCC.nc"
static inline  void TOSH_adc_data_ready(uint16_t data)
#line 89
{
  HPLADCC$PowerState$ADCdataReady();
  HPLADCC$ADC$dataReady(data);
}

# 283 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/hpl.c"
static inline uint16_t get_adc_data(uint8_t port)
#line 283
{
  return tos_state.adc->read(tos_state.current_node, port, tos_state.tos_time);
}

static inline  void SIG_ADC_signal(void)
#line 287
{
  ADCDataReadyEvent ev;
  uint16_t data;
  uint8_t port = ((adc_tick_data_t *)adcEvents[tos_state.current_node]->data)->port;

#line 291
  data = get_adc_data(port);
  TOSH_adc_data_ready(data);
  ev.port = port;
  ev.data = data;
  ;
  sendTossimEvent(tos_state.current_node, AM_ADCDATAREADYEVENT, tos_state.tos_time, &ev);
}


static inline void event_adc_handle(event_t *event, struct TOS_state *state)
#line 300
{
  SIG_ADC_signal();
  if (((adc_tick_data_t *)event->data)->valid) {
      queue_insert_event(& tos_state.queue, event);
#line 303
      ;
    }
  else {
    }
}

#line 326
static inline void event_adc_create(event_t *event, int mote, uint8_t port, long long eventTime, int interval)
#line 326
{
  adc_tick_data_t *data = (adc_tick_data_t *)malloc(sizeof(adc_tick_data_t ));

#line 328
  dbg(DBG_MEM, "malloc data entry for adc event: 0x%x\n", (int )data);
  data->valid = 1;
  data->port = port;

  event->data = data;
  event->mote = mote;
  event->force = 0;
  event->pause = 0;
  event->time = eventTime + interval;
  event->handle = event_adc_handle;
  event->cleanup = event_total_cleanup;
}

# 265 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/hardware.nido.h"
static __inline void TOSH_SET_INT1_PIN(void)
#line 265
{
#line 265
  set_io_bit(0x43, 1);
}

# 76 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/sensorboard.h"
static __inline void TOSH_SET_PHOTO_CTL_PIN(void)
#line 76
{
#line 76
  TOSH_SET_INT1_PIN();
}

# 265 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/hardware.nido.h"
static __inline void TOSH_MAKE_INT1_OUTPUT(void)
#line 265
{
#line 265
  set_io_bit(0x45, 1);
}

# 76 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/sensorboard.h"
static __inline void TOSH_MAKE_PHOTO_CTL_OUTPUT(void)
#line 76
{
#line 76
  TOSH_MAKE_INT1_OUTPUT();
}

# 266 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/hardware.nido.h"
static __inline void TOSH_CLR_INT2_PIN(void)
#line 266
{
#line 266
  clear_io_bit(0x43, 2);
}

# 77 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/sensorboard.h"
static __inline void TOSH_CLR_TEMP_CTL_PIN(void)
#line 77
{
#line 77
  TOSH_CLR_INT2_PIN();
}

# 266 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/hardware.nido.h"
static __inline void TOSH_MAKE_INT2_INPUT(void)
#line 266
{
#line 266
  clear_io_bit(0x45, 2);
}

# 77 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/sensorboard.h"
static __inline void TOSH_MAKE_TEMP_CTL_INPUT(void)
#line 77
{
#line 77
  TOSH_MAKE_INT2_INPUT();
}

# 68 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Timer.nc"
inline static  result_t PhotoTempM$PhotoTempTimer$stop(void){
#line 68
  unsigned char result;
#line 68

#line 68
  result = TimerM$Timer$stop(3U);
#line 68

#line 68
  return result;
#line 68
}
#line 68
#line 59
inline static  result_t PhotoTempM$PhotoTempTimer$start(char arg_0x7fa46ab515c0, uint32_t arg_0x7fa46ab51888){
#line 59
  unsigned char result;
#line 59

#line 59
  result = TimerM$Timer$start(3U, arg_0x7fa46ab515c0, arg_0x7fa46ab51888);
#line 59

#line 59
  return result;
#line 59
}
#line 59
# 265 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/hardware.nido.h"
static __inline void TOSH_CLR_INT1_PIN(void)
#line 265
{
#line 265
  clear_io_bit(0x43, 1);
}

# 76 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/sensorboard.h"
static __inline void TOSH_CLR_PHOTO_CTL_PIN(void)
#line 76
{
#line 76
  TOSH_CLR_INT1_PIN();
}

# 265 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/hardware.nido.h"
static __inline void TOSH_MAKE_INT1_INPUT(void)
#line 265
{
#line 265
  clear_io_bit(0x45, 1);
}

# 76 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/sensorboard.h"
static __inline void TOSH_MAKE_PHOTO_CTL_INPUT(void)
#line 76
{
#line 76
  TOSH_MAKE_INT1_INPUT();
}

# 266 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/hardware.nido.h"
static __inline void TOSH_SET_INT2_PIN(void)
#line 266
{
#line 266
  set_io_bit(0x43, 2);
}

# 77 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/sensorboard.h"
static __inline void TOSH_SET_TEMP_CTL_PIN(void)
#line 77
{
#line 77
  TOSH_SET_INT2_PIN();
}

# 266 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/hardware.nido.h"
static __inline void TOSH_MAKE_INT2_OUTPUT(void)
#line 266
{
#line 266
  set_io_bit(0x45, 2);
}

# 77 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/sensorboard.h"
static __inline void TOSH_MAKE_TEMP_CTL_OUTPUT(void)
#line 77
{
#line 77
  TOSH_MAKE_INT2_OUTPUT();
}

# 318 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/hpl.c"
static inline void event_adc_update(event_t *event, int mote, uint8_t port, long long eventTime, int interval)
#line 318
{
  adc_tick_data_t *data = event->data;

#line 320
  data->valid = 1;
  data->port = port;

  event->time = eventTime + interval;
}

# 230 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Route/MultiHopLEPSM.nc"
static inline void MultiHopLEPSM$updateEst(MultiHopLEPSM$TableEntry *Nbr)
#line 230
{
  uint16_t usExpTotal;
#line 231
  uint16_t usActTotal;
#line 231
  uint16_t newAve;

  if (Nbr->flags & MultiHopLEPSM$NBRFLAG_NEW) {
    return;
    }
  usExpTotal = MultiHopLEPSM$ESTIMATE_TO_ROUTE_RATIO;



  dbg(DBG_ROUTE, "MultiHopLEPSM: Updating Nbr %d. ExpTotl = %d, rcvd= %d, missed = %d\n", 
  Nbr->id, usExpTotal, Nbr->received, Nbr->missed);

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 243
    {
      usActTotal = Nbr->received + Nbr->missed;

      if (usActTotal < usExpTotal) {
          usActTotal = usExpTotal;
        }

      newAve = (uint16_t )255 * (uint16_t )Nbr->received / (uint16_t )usActTotal;
      Nbr->missed = 0;
      Nbr->received = 0;



      if (Nbr->liveliness < MultiHopLEPSM$MIN_LIVELINESS) {
          Nbr->sendEst <<= 1;
        }
      Nbr->liveliness = 0;
    }
#line 260
    __nesc_atomic_end(__nesc_atomic); }



  if (Nbr->flags & MultiHopLEPSM$NBRFLAG_EST_INIT) {
      uint16_t tmp;

#line 266
      tmp = (2 * (uint16_t )Nbr->receiveEst + (uint16_t )newAve * 6) / 8;
      Nbr->receiveEst = (uint8_t )tmp;
    }
  else {
      Nbr->receiveEst = (uint8_t )newAve;
      Nbr->flags ^= MultiHopLEPSM$NBRFLAG_EST_INIT;
    }
}


static inline void MultiHopLEPSM$updateTable(void)
#line 276
{
  MultiHopLEPSM$TableEntry *pNbr;
  uint8_t i = 0;

  MultiHopLEPSM$gwEstTicks[tos_state.current_node]++;
  MultiHopLEPSM$gwEstTicks[tos_state.current_node] %= MultiHopLEPSM$ESTIMATE_TO_ROUTE_RATIO;

  for (i = 0; i < MultiHopLEPSM$ROUTE_TABLE_SIZE; i++) {
      pNbr = &MultiHopLEPSM$NeighborTbl[tos_state.current_node][i];
      if (pNbr->flags & MultiHopLEPSM$NBRFLAG_VALID) {
          if (MultiHopLEPSM$gwEstTicks[tos_state.current_node] == 0) {
            MultiHopLEPSM$updateEst(pNbr);
            }
        }
    }
}

#line 219
static inline uint32_t MultiHopLEPSM$evaluateCost(uint8_t sendEst, uint8_t receiveEst)
#line 219
{
  uint32_t transEst = (uint32_t )sendEst * (uint32_t )receiveEst;
  uint32_t immed = (uint32_t )1 << 24;

  if (transEst == 0) {
#line 223
    return (uint32_t )1 << (uint32_t )16;
    }
  immed = immed / transEst;
  return immed;
}

#line 329
static inline void MultiHopLEPSM$chooseParent(void)
#line 329
{
  MultiHopLEPSM$TableEntry *pNbr;
  uint32_t ulNbrLinkCost = (uint32_t )-1;
  uint32_t ulMinLinkCost = (uint32_t )-1;
  MultiHopLEPSM$TableEntry *pNewParent = (void *)0;
  uint8_t bNewHopCount = MultiHopLEPSM$ROUTE_INVALID;
  uint8_t i;

  if (TOS_LOCAL_ADDRESS == MultiHopLEPSM$BASE_STATION_ADDRESS) {
#line 337
    return;
    }




  for (i = 0; i < MultiHopLEPSM$ROUTE_TABLE_SIZE; i++) {
      pNbr = &MultiHopLEPSM$NeighborTbl[tos_state.current_node][i];

      if (!(pNbr->flags & MultiHopLEPSM$NBRFLAG_VALID)) {
#line 346
        continue;
        }
#line 347
      if (pNbr->parent == TOS_LOCAL_ADDRESS) {
#line 347
        continue;
        }
#line 348
      if (pNbr->parent == MultiHopLEPSM$ROUTE_INVALID) {
#line 348
        continue;
        }
#line 349
      if (pNbr->hop == MultiHopLEPSM$ROUTE_INVALID) {
#line 349
        continue;
        }
#line 350
      if (pNbr->sendEst < 25) {
#line 350
        continue;
        }
#line 351
      if (pNbr->hop != 0 && pNbr->receiveEst < 25) {
#line 351
        continue;
        }
      ulNbrLinkCost = MultiHopLEPSM$evaluateCost(pNbr->sendEst, pNbr->receiveEst);

      if (pNbr->hop != 0 && ulNbrLinkCost > MultiHopLEPSM$MAX_ALLOWABLE_LINK_COST) {
#line 355
        continue;
        }
      if (pNbr->hop < bNewHopCount || (
      pNbr->hop == bNewHopCount && ulMinLinkCost > ulNbrLinkCost)) {
          ulMinLinkCost = ulNbrLinkCost;
          pNewParent = pNbr;
          bNewHopCount = pNbr->hop;
        }
    }


  if (pNewParent) {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 367
        {
          MultiHopLEPSM$gpCurrentParent[tos_state.current_node] = pNewParent;
          MultiHopLEPSM$gbCurrentHopCount[tos_state.current_node] = bNewHopCount + 1;
        }
#line 370
        __nesc_atomic_end(__nesc_atomic); }
    }
}

# 48 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/SendMsg.nc"
inline static  result_t MultiHopLEPSM$SendMsg$send(uint16_t arg_0x7fa46abbf408, uint8_t arg_0x7fa46abbf6c0, TOS_MsgPtr arg_0x7fa46abbf980){
#line 48
  unsigned char result;
#line 48

#line 48
  result = QueuedSendM$QueueSendMsg$send(AM_MULTIHOPMSG, arg_0x7fa46abbf408, arg_0x7fa46abbf6c0, arg_0x7fa46abbf980);
#line 48

#line 48
  return result;
#line 48
}
#line 48
# 209 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Route/MultiHopLEPSM.nc"
static inline int MultiHopLEPSM$sortByReceiveEstFcn(const void *x, const void *y)
#line 209
{
  struct MultiHopLEPSM$SortEntry *nx = (struct MultiHopLEPSM$SortEntry *)x;
  struct MultiHopLEPSM$SortEntry *ny = (struct MultiHopLEPSM$SortEntry *)y;
  uint8_t xReceiveEst = nx->receiveEst;
#line 212
  uint8_t yReceiveEst = ny->receiveEst;

#line 213
  if (xReceiveEst > yReceiveEst) {
#line 213
    return -1;
    }
#line 214
  if (xReceiveEst == yReceiveEst) {
#line 214
    return 0;
    }
#line 215
  if (xReceiveEst < yReceiveEst) {
#line 215
    return 1;
    }
#line 216
  return 0;
}

#line 374
static inline  void MultiHopLEPSM$SendRouteTask(void)
#line 374
{
  TOS_MHopMsg *pMHMsg = (TOS_MHopMsg *)&MultiHopLEPSM$routeMsg[tos_state.current_node].data[0];
  MultiHopLEPSM$RoutePacket *pRP = (MultiHopLEPSM$RoutePacket *)&pMHMsg->data[0];
  struct MultiHopLEPSM$SortEntry sortTbl[MultiHopLEPSM$ROUTE_TABLE_SIZE];
  uint8_t length = (unsigned long )& ((TOS_MHopMsg *)0)->data + (unsigned long )& ((MultiHopLEPSM$RoutePacket *)0)->estList;
  uint8_t maxEstEntries;
  uint8_t i;
#line 380
  uint8_t j;

  if (MultiHopLEPSM$gfSendRouteBusy[tos_state.current_node]) {
      return;
    }

  dbg(DBG_ROUTE, "MultiHopLEPSM Sending route update msg.\n");

  maxEstEntries = 29 - length;
  maxEstEntries = maxEstEntries / sizeof(MultiHopLEPSM$RPEstEntry );

  for (i = 0, j = 0; i < MultiHopLEPSM$ROUTE_TABLE_SIZE; i++) {
      if (MultiHopLEPSM$NeighborTbl[tos_state.current_node][i].flags & MultiHopLEPSM$NBRFLAG_VALID) {
          sortTbl[j].id = MultiHopLEPSM$NeighborTbl[tos_state.current_node][i].id;
          sortTbl[j].receiveEst = MultiHopLEPSM$NeighborTbl[tos_state.current_node][i].receiveEst;
          j++;
        }
    }
  qsort(sortTbl, j, sizeof(struct MultiHopLEPSM$SortEntry ), MultiHopLEPSM$sortByReceiveEstFcn);

  pRP->parent = MultiHopLEPSM$gpCurrentParent[tos_state.current_node] ? MultiHopLEPSM$gpCurrentParent[tos_state.current_node]->id : MultiHopLEPSM$ROUTE_INVALID;


  pRP->estEntries = j > maxEstEntries ? maxEstEntries : j;
  for (i = 0; i < pRP->estEntries; i++) {
      pRP->estList[i].id = sortTbl[i].id;
      pRP->estList[i].receiveEst = sortTbl[i].receiveEst;
      length += sizeof(MultiHopLEPSM$RPEstEntry );
    }

  pMHMsg->sourceaddr = pMHMsg->originaddr = TOS_LOCAL_ADDRESS;
  pMHMsg->hopcount = MultiHopLEPSM$gbCurrentHopCount[tos_state.current_node];
  pMHMsg->seqno = MultiHopLEPSM$gCurrentSeqNo[tos_state.current_node]++;

  if (MultiHopLEPSM$SendMsg$send(TOS_BCAST_ADDR, length, &MultiHopLEPSM$routeMsg[tos_state.current_node]) == SUCCESS) {
      MultiHopLEPSM$gfSendRouteBusy[tos_state.current_node] = TRUE;
    }
}

# 55 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/UARTNoCRCPacketM.nc"
static inline  result_t UARTNoCRCPacketM$Control$init(void)
#line 55
{
  dbg(DBG_BOOT, "UART initialized.\n");
  return SUCCESS;
}

# 63 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
inline static  result_t AMPromiscuous$UARTControl$init(void){
#line 63
  unsigned char result;
#line 63

#line 63
  result = UARTNoCRCPacketM$Control$init();
#line 63

#line 63
  return result;
#line 63
}
#line 63
# 64 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/contrib/ptII/ptinyos/beta/TOSSIM-packet/TossimPacketM.nc"
static inline  result_t TossimPacketM$Control$init(void)
#line 64
{
  TossimPacketM$bufferPtr[tos_state.current_node] = &TossimPacketM$buffer[tos_state.current_node];

  return SUCCESS;
}

# 63 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
inline static  result_t AMPromiscuous$RadioControl$init(void){
#line 63
  unsigned char result;
#line 63

#line 63
  result = TossimPacketM$Control$init();
#line 63

#line 63
  return result;
#line 63
}
#line 63
# 110 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Queue/QueuedSendM.nc"
static inline  result_t QueuedSendM$StdControl$start(void)
#line 110
{
  return SUCCESS;
}

# 70 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
inline static  result_t BcastM$SubControl$start(void){
#line 70
  unsigned char result;
#line 70

#line 70
  result = QueuedSendM$StdControl$start();
#line 70
  result = rcombine(result, AMPromiscuous$Control$start());
#line 70

#line 70
  return result;
#line 70
}
#line 70
# 120 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Broadcast/BcastM.nc"
static inline  result_t BcastM$StdControl$start(void)
#line 120
{
  return BcastM$SubControl$start();
}

# 87 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/TimerM.nc"
static inline  result_t TimerM$StdControl$start(void)
#line 87
{
  return SUCCESS;
}

# 217 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/PowerStateM.nc"
static inline   void PowerStateM$PowerState$sensorPhotoOn(void)
#line 217
{
  if (!prof_on) {
#line 218
    return;
    }
#line 219
  dbg(DBG_POWER, "POWER: Mote %d SENSOR_STATE PHOTO ON at %lld\n", tos_state.current_node, 
  tos_state.tos_time);
}

# 55 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/PowerState.nc"
inline static   void PhotoTempM$PowerState$sensorPhotoOn(void){
#line 55
  PowerStateM$PowerState$sensorPhotoOn();
#line 55
}
#line 55
# 145 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/PhotoTempM.nc"
static inline  result_t PhotoTempM$PhotoStdControl$start(void)
#line 145
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 146
    {
      PhotoTempM$photoSensor[tos_state.current_node] = PhotoTempM$stateIdle;
    }
#line 148
    __nesc_atomic_end(__nesc_atomic); }
#line 148
  ;
  PhotoTempM$PowerState$sensorPhotoOn();
  return SUCCESS;
}

# 146 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/AMPromiscuous.nc"
static inline  result_t AMPromiscuous$CommControl$setPromiscuous(bool value)
#line 146
{
  AMPromiscuous$promiscuous_mode[tos_state.current_node] = value;
  return SUCCESS;
}

# 65 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/CommControl.nc"
inline static  result_t MultiHopEngineM$CommControl$setPromiscuous(bool arg_0x7fa46ab726f8){
#line 65
  unsigned char result;
#line 65

#line 65
  result = AMPromiscuous$CommControl$setPromiscuous(arg_0x7fa46ab726f8);
#line 65

#line 65
  return result;
#line 65
}
#line 65
# 59 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Timer.nc"
inline static  result_t MultiHopLEPSM$Timer$start(char arg_0x7fa46ab515c0, uint32_t arg_0x7fa46ab51888){
#line 59
  unsigned char result;
#line 59

#line 59
  result = TimerM$Timer$start(2U, arg_0x7fa46ab515c0, arg_0x7fa46ab51888);
#line 59

#line 59
  return result;
#line 59
}
#line 59
# 478 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Route/MultiHopLEPSM.nc"
static inline  result_t MultiHopLEPSM$StdControl$start(void)
#line 478
{
  TOS_post(MultiHopLEPSM$TimerTask);
  MultiHopLEPSM$Timer$start(TIMER_REPEAT, MultiHopLEPSM$gUpdateInterval[tos_state.current_node]);




  return SUCCESS;
}

# 70 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
inline static  result_t MultiHopEngineM$SubControl$start(void){
#line 70
  unsigned char result;
#line 70

#line 70
  result = QueuedSendM$StdControl$start();
#line 70
  result = rcombine(result, MultiHopLEPSM$StdControl$start());
#line 70

#line 70
  return result;
#line 70
}
#line 70
inline static  result_t MultiHopEngineM$CommStdControl$start(void){
#line 70
  unsigned char result;
#line 70

#line 70
  result = AMPromiscuous$Control$start();
#line 70

#line 70
  return result;
#line 70
}
#line 70
# 107 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Route/MultiHopEngineM.nc"
static inline  result_t MultiHopEngineM$StdControl$start(void)
#line 107
{
  MultiHopEngineM$CommStdControl$start();
  MultiHopEngineM$SubControl$start();
  return MultiHopEngineM$CommControl$setPromiscuous(TRUE);
}

# 59 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Timer.nc"
inline static  result_t SurgeM$Timer$start(char arg_0x7fa46ab515c0, uint32_t arg_0x7fa46ab51888){
#line 59
  unsigned char result;
#line 59

#line 59
  result = TimerM$Timer$start(0U, arg_0x7fa46ab515c0, arg_0x7fa46ab51888);
#line 59

#line 59
  return result;
#line 59
}
#line 59
# 106 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../apps/Surge/SurgeM.nc"
static inline  result_t SurgeM$StdControl$start(void)
#line 106
{
  return SurgeM$Timer$start(TIMER_REPEAT, SurgeM$timer_rate[tos_state.current_node]);
  return SUCCESS;
}

# 70 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
inline static  result_t Nido$StdControl$start(void){
#line 70
  unsigned char result;
#line 70

#line 70
  result = QueuedSendM$StdControl$start();
#line 70
  result = rcombine(result, SurgeM$StdControl$start());
#line 70
  result = rcombine(result, AMPromiscuous$Control$start());
#line 70
  result = rcombine(result, MultiHopEngineM$StdControl$start());
#line 70
  result = rcombine(result, PhotoTempM$PhotoStdControl$start());
#line 70
  result = rcombine(result, TimerM$StdControl$start());
#line 70
  result = rcombine(result, BcastM$StdControl$start());
#line 70

#line 70
  return result;
#line 70
}
#line 70
inline static  result_t AMPromiscuous$TimerControl$start(void){
#line 70
  unsigned char result;
#line 70

#line 70
  result = TimerM$StdControl$start();
#line 70

#line 70
  return result;
#line 70
}
#line 70
# 60 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/UARTNoCRCPacketM.nc"
static inline  result_t UARTNoCRCPacketM$Control$start(void)
#line 60
{
  dbg(DBG_BOOT, "UART started.\n");
  return SUCCESS;
}

# 70 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
inline static  result_t AMPromiscuous$UARTControl$start(void){
#line 70
  unsigned char result;
#line 70

#line 70
  result = UARTNoCRCPacketM$Control$start();
#line 70

#line 70
  return result;
#line 70
}
#line 70
# 70 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/contrib/ptII/ptinyos/beta/TOSSIM-packet/TossimPacketM.nc"
static inline  result_t TossimPacketM$Control$start(void)
#line 70
{

  return SUCCESS;
}

# 70 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
inline static  result_t AMPromiscuous$RadioControl$start(void){
#line 70
  unsigned char result;
#line 70

#line 70
  result = TossimPacketM$Control$start();
#line 70

#line 70
  return result;
#line 70
}
#line 70
# 59 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Timer.nc"
inline static  result_t AMPromiscuous$ActivityTimer$start(char arg_0x7fa46ab515c0, uint32_t arg_0x7fa46ab51888){
#line 59
  unsigned char result;
#line 59

#line 59
  result = TimerM$Timer$start(1U, arg_0x7fa46ab515c0, arg_0x7fa46ab51888);
#line 59

#line 59
  return result;
#line 59
}
#line 59
# 41 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/PowerManagement.nc"
inline static   uint8_t AMPromiscuous$PowerManagement$adjustPower(void){
#line 41
  unsigned char result;
#line 41

#line 41
  result = HPLPowerManagementM$PowerManagement$adjustPower();
#line 41

#line 41
  return result;
#line 41
}
#line 41
# 133 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/tos.h"
static inline result_t rcombine4(result_t r1, result_t r2, result_t r3, 
result_t r4)
{
  return rcombine(r1, rcombine(r2, rcombine(r3, r4)));
}

# 79 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/hardware.h"
static inline void __nesc_atomic_sleep(void)
{
}

# 113 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Queue/QueuedSendM.nc"
static inline  result_t QueuedSendM$StdControl$stop(void)
#line 113
{
  return SUCCESS;
}

# 78 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
inline static  result_t BcastM$SubControl$stop(void){
#line 78
  unsigned char result;
#line 78

#line 78
  result = QueuedSendM$StdControl$stop();
#line 78
  result = rcombine(result, AMPromiscuous$Control$stop());
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 124 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Broadcast/BcastM.nc"
static inline  result_t BcastM$StdControl$stop(void)
#line 124
{
  return BcastM$SubControl$stop();
}

# 91 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/TimerM.nc"
static inline  result_t TimerM$StdControl$stop(void)
#line 91
{
  TimerM$mState[tos_state.current_node] = 0;
  TimerM$mInterval[tos_state.current_node] = TimerM$maxTimerInterval;
  TimerM$setIntervalFlag[tos_state.current_node] = 0;
  return SUCCESS;
}

# 223 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/PowerStateM.nc"
static inline   void PowerStateM$PowerState$sensorPhotoOff(void)
#line 223
{
  if (!prof_on) {
#line 224
    return;
    }
#line 225
  dbg(DBG_POWER, "POWER: Mote %d SENSOR_STATE PHOTO OFF at %lld\n", tos_state.current_node, 
  tos_state.tos_time);
}

# 56 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/PowerState.nc"
inline static   void PhotoTempM$PowerState$sensorPhotoOff(void){
#line 56
  PowerStateM$PowerState$sensorPhotoOff();
#line 56
}
#line 56
# 153 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/PhotoTempM.nc"
static inline  result_t PhotoTempM$PhotoStdControl$stop(void)
#line 153
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 154
    {
      PhotoTempM$photoSensor[tos_state.current_node] = PhotoTempM$stateIdle;
    }
#line 156
    __nesc_atomic_end(__nesc_atomic); }
#line 156
  ;
  PhotoTempM$PowerState$sensorPhotoOff();
  return SUCCESS;
}

# 78 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
inline static  result_t MultiHopEngineM$CommStdControl$stop(void){
#line 78
  unsigned char result;
#line 78

#line 78
  result = AMPromiscuous$Control$stop();
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 68 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Timer.nc"
inline static  result_t MultiHopLEPSM$Timer$stop(void){
#line 68
  unsigned char result;
#line 68

#line 68
  result = TimerM$Timer$stop(2U);
#line 68

#line 68
  return result;
#line 68
}
#line 68
# 488 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Route/MultiHopLEPSM.nc"
static inline  result_t MultiHopLEPSM$StdControl$stop(void)
#line 488
{
  MultiHopLEPSM$Timer$stop();
  return SUCCESS;
}

# 78 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
inline static  result_t MultiHopEngineM$SubControl$stop(void){
#line 78
  unsigned char result;
#line 78

#line 78
  result = QueuedSendM$StdControl$stop();
#line 78
  result = rcombine(result, MultiHopLEPSM$StdControl$stop());
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 113 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Route/MultiHopEngineM.nc"
static inline  result_t MultiHopEngineM$StdControl$stop(void)
#line 113
{
  MultiHopEngineM$SubControl$stop();

  return MultiHopEngineM$CommStdControl$stop();
}

# 68 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Timer.nc"
inline static  result_t SurgeM$Timer$stop(void){
#line 68
  unsigned char result;
#line 68

#line 68
  result = TimerM$Timer$stop(0U);
#line 68

#line 68
  return result;
#line 68
}
#line 68
# 111 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../apps/Surge/SurgeM.nc"
static inline  result_t SurgeM$StdControl$stop(void)
#line 111
{
  return SurgeM$Timer$stop();
}

# 78 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
inline static  result_t Nido$StdControl$stop(void){
#line 78
  unsigned char result;
#line 78

#line 78
  result = QueuedSendM$StdControl$stop();
#line 78
  result = rcombine(result, SurgeM$StdControl$stop());
#line 78
  result = rcombine(result, AMPromiscuous$Control$stop());
#line 78
  result = rcombine(result, MultiHopEngineM$StdControl$stop());
#line 78
  result = rcombine(result, PhotoTempM$PhotoStdControl$stop());
#line 78
  result = rcombine(result, TimerM$StdControl$stop());
#line 78
  result = rcombine(result, BcastM$StdControl$stop());
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 65 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/UARTNoCRCPacketM.nc"
static inline  result_t UARTNoCRCPacketM$Control$stop(void)
#line 65
{
  dbg(DBG_BOOT, "UART stopped.\n");
  return SUCCESS;
}

# 78 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
inline static  result_t AMPromiscuous$UARTControl$stop(void){
#line 78
  unsigned char result;
#line 78

#line 78
  result = UARTNoCRCPacketM$Control$stop();
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 74 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/contrib/ptII/ptinyos/beta/TOSSIM-packet/TossimPacketM.nc"
static inline  result_t TossimPacketM$Control$stop(void)
#line 74
{

  return SUCCESS;
}

# 78 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
inline static  result_t AMPromiscuous$RadioControl$stop(void){
#line 78
  unsigned char result;
#line 78

#line 78
  result = TossimPacketM$Control$stop();
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 68 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Timer.nc"
inline static  result_t AMPromiscuous$ActivityTimer$stop(void){
#line 68
  unsigned char result;
#line 68

#line 68
  result = TimerM$Timer$stop(1U);
#line 68

#line 68
  return result;
#line 68
}
#line 68
# 128 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/tos.h"
static inline result_t rcombine3(result_t r1, result_t r2, result_t r3)
{
  return rcombine(r1, rcombine(r2, r3));
}

# 275 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/AMPromiscuous.nc"
static inline  TOS_MsgPtr AMPromiscuous$UARTReceive$receive(TOS_MsgPtr packet)
#line 275
{
  packet->group = TOS_AM_GROUP;
  return prom_received(packet);
}

# 75 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
inline static  TOS_MsgPtr Nido$UARTReceiveMsg$receive(TOS_MsgPtr arg_0x7fa46ab6c360){
#line 75
  struct TOS_Msg *result;
#line 75

#line 75
  result = AMPromiscuous$UARTReceive$receive(arg_0x7fa46ab6c360);
#line 75

#line 75
  return result;
#line 75
}
#line 75
# 107 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/dbg.c"
inline void dbg_help(void )
#line 107
{
  int i = 0;

#line 109
  printf("Known dbg modes: ");

  while (dbg_nametab[i].d_name != (void *)0) {
      printf("%s", dbg_nametab[i].d_name);
      if (dbg_nametab[i + 1].d_name != (void *)0) {
          printf(", ");
        }
      i++;
    }

  printf("\n");
}

# 74 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/contrib/ptII/ptinyos/beta/TOSSIM-packet/Nido.nc"
static inline void Nido$usage(char *progname)
#line 74
{
  fprintf(stderr, "Usage: %s [-h|--help] [options] num_nodes_total\n", progname);
  exit(-1);
}

# 58 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/dbg.c"
inline void dbg_add_mode(const char *name)
#line 58
{
  int cancel;
  TOS_dbg_mode_names *mode;

  if (*name == '-') {
      cancel = 1;
      name++;
    }
  else {
    cancel = 0;
    }
  for (mode = dbg_nametab; mode->d_name != (void *)0; mode++) 
    if (strcmp(name, mode->d_name) == 0) {
      break;
      }
#line 72
  if (mode->d_name == (void *)0) {
      fprintf(stderr, "Warning: Unknown debug option: "
      "\"%s\"\n", name);
      return;
    }

  if (cancel) {
    dbg_modes &= ~ mode->d_mode;
    }
  else {
#line 81
    dbg_modes |= mode->d_mode;
    }
}

#line 84
inline void dbg_add_modes(const char *modes)
#line 84
{
  char env[256];
  char *name;

  strncpy(env, modes, sizeof env);
  for (name = strtok(env, ","); name; name = strtok((void *)0, ",")) 
    dbg_add_mode(name);
}

inline void dbg_init(void )
#line 93
{
  const char *dbg_env;

  dbg_modes = DBG_NONE;

  dbg_env = getenv("DBG");
  if (!dbg_env) {
      dbg_modes = DBG_DEFAULT;
      return;
    }

  dbg_add_modes(dbg_env);
}

# 311 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/PowerStateM.nc"
static inline int PowerStateM$num_bbs(void)
#line 311
{

  int POWERPROF_NUM_BBS;

#line 314
  return POWERPROF_NUM_BBS;
}

#line 23
static inline   result_t PowerStateM$PowerState$init(int prof, int cpu_prof)
#line 23
{
  FILE *cycle_file;
  char cycle_map[13] = "bb_cycle_map";
  int bb;
  double bbcyc;

#line 28
  if (power_init == 1) {
      fprintf(stderr, "PowerState.init() called twice...\n");
      return SUCCESS;
    }
  power_init = 1;
  prof_on = prof;
  cpu_prof_on = cpu_prof;

  if (cpu_prof_on) {
      cycle_file = fopen(cycle_map, "r");
      if (!cycle_file) {
          fprintf(stderr, "Couldn't open '%s', exiting\n", cycle_map);
          exit(-1);
        }

      cycles = calloc(PowerStateM$num_bbs(), sizeof(double ));

      while (-1 != fscanf(cycle_file, " %d %lf", &bb, &bbcyc)) {
          cycles[bb] = bbcyc;
        }
      fclose(cycle_file);
    }
  return SUCCESS;
}

# 14 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/PowerState.nc"
inline static   result_t Nido$PowerState$init(int arg_0x7fa46aaed390, int arg_0x7fa46aaed648){
#line 14
  unsigned char result;
#line 14

#line 14
  result = PowerStateM$PowerState$init(arg_0x7fa46aaed390, arg_0x7fa46aaed648);
#line 14

#line 14
  return result;
#line 14
}
#line 14
# 52 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/tos.c"
static inline void init_signals(void )
#line 52
{
  struct sigaction action;

#line 54
  action.__sigaction_handler.sa_handler = handle_signal;
  sigemptyset(& action.sa_mask);
  action.sa_flags = 0;
  sigaction(2, &action, (void *)0);
  signal(13, (__sighandler_t )1);
}

# 135 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/rfm_model.c"
static inline link_t *simple_neighbors(int moteID)
#line 135
{
  link_t *thelink;


  ptII_MonitorEnter(radioConnectivityLock);


  thelink = radio_connectivity[moteID];


  ptII_MonitorExit(radioConnectivityLock);

  return thelink;
}

#line 85
static inline bool simple_connected(int moteID1, int moteID2)
#line 85
{
  return TRUE;
}

#line 123
static inline char simple_hears(int moteID)
#line 123
{







  return radio_active[moteID] > 0 ? 1 : 0;
}

#line 112
static inline void simple_stops_transmit(int moteID)
#line 112
{
  int i;

  if (transmitting[moteID]) {
      transmitting[moteID] = 0;
      for (i = 0; i < tos_state.num_nodes; i++) {
          radio_active[i]--;
        }
    }
}

#line 103
static inline void simple_transmit(int moteID, char bit)
#line 103
{
  int i;

  transmitting[moteID] = bit;
  for (i = 0; i < tos_state.num_nodes; i++) {
      radio_active[i] += bit;
    }
}

#line 89
static inline void simple_init(void)
#line 89
{
  int i;


  radioConnectivityLock = ptII_createMonitorObject();


  adjacency_list_init();
  static_one_cell_init();
  for (i = 0; i < tos_state.num_nodes; i++) {
      radio_active[i] = 0;
    }
}

#line 150
static inline rfm_model *create_simple_model(void)
#line 150
{
  rfm_model *model = (rfm_model *)malloc(sizeof(rfm_model ));

#line 152
  model->init = simple_init;
  model->transmit = simple_transmit;
  model->stop_transmit = simple_stops_transmit;
  model->hears = simple_hears;
  model->connected = simple_connected;
  model->neighbors = simple_neighbors;
  return model;
}

#line 596
static inline link_t *lossy_neighbors(int moteID)
#line 596
{
  link_t *thelink;


  ptII_MonitorEnter(radioConnectivityLock);


  thelink = radio_connectivity[moteID];


  ptII_MonitorExit(radioConnectivityLock);

  return thelink;
}

#line 369
static inline bool lossy_connected(int moteID1, int moteID2)
#line 369
{




  link_t *current_link;


  ptII_MonitorEnter(radioConnectivityLock);


  current_link = radio_connectivity[moteID1];
  dbg(DBG_TEMP, "connections for %i\n", moteID1);
  while (current_link) {
      if (current_link->mote == moteID2 && 
      current_link->data < 1.0) {
          dbg(DBG_TEMP, "connected to %i\n", moteID2);



          ptII_MonitorExit(radioConnectivityLock);

          return TRUE;
        }
      current_link = current_link->next_link;
    }


  ptII_MonitorExit(radioConnectivityLock);

  return FALSE;
}

#line 447
static inline char lossy_hears(int moteID)
#line 447
{
  char bit_heard = radio_active[moteID] > 0 ? 1 : 0;

#line 449
  if (radio_idle_state[moteID]) {
      int r = rand() % 100000;
      double prob = (double )r / 100000.0;

#line 452
      if (prob < noise_prob) {
          bit_heard = bit_heard ? 0 : 1;
        }
    }
  else {
      short temp_heard = radio_heard[moteID];

#line 458
      temp_heard <<= 1;
      temp_heard |= bit_heard;
      radio_heard[moteID] = temp_heard;
      if ((radio_heard[moteID] & IDLE_STATE_MASK) == 0) {
          radio_idle_state[moteID] = 1;
        }
    }
  return bit_heard;
}

#line 428
static inline void lossy_stop_transmit(int moteID)
#line 428
{
  link_t *current_link;


  ptII_MonitorEnter(radioConnectivityLock);


  current_link = radio_connectivity[moteID];
  transmitting[moteID] = 0;
  while (current_link) {
      radio_active[current_link->mote] -= current_link->bit;
      current_link->bit = 0;
      current_link = current_link->next_link;
    }


  ptII_MonitorExit(radioConnectivityLock);
}

#line 402
static inline void lossy_transmit(int moteID, char bit)
#line 402
{
  link_t *current_link;


  ptII_MonitorEnter(radioConnectivityLock);


  current_link = radio_connectivity[moteID];
  transmitting[moteID] = bit;
  while (current_link) {
      int r = rand() % 100000;
      double prob = (double )r / 100000.0;
      int tmp_bit = bit;

#line 415
      if (prob < current_link->data) {
          tmp_bit = tmp_bit ? 0 : 1;
        }
      radio_active[current_link->mote] += tmp_bit;
      radio_idle_state[current_link->mote] = 0;
      current_link->bit = tmp_bit;
      current_link = current_link->next_link;
    }


  ptII_MonitorExit(radioConnectivityLock);
}

#line 468
static inline int read_lossy_entry(FILE *file, int *mote_one, int *mote_two, double *loss)
#line 468
{
  char buf[128];
  int findex = 0;
  int ch;


  while (1) {
      ch = _IO_getc(file);
      if (ch == -1) {
#line 476
          return 0;
        }
      else {
#line 477
        if (ch >= '0' && ch <= '9') {
            buf[findex] = (char )ch;
            findex++;
          }
        else {
#line 481
          if (ch == ':') {
              buf[findex] = 0;
              break;
            }
          else {
#line 485
            if ((ch == '\n' || ch == ' ') || ch == '\t') {
                if (findex > 0) {
#line 486
                    return 0;
                  }
              }
            else 
#line 488
              {
                return 0;
              }
            }
          }
        }
    }
#line 493
  *mote_one = atoi(buf);
  findex = 0;

  while (1) {
      ch = _IO_getc(file);
      if (ch == -1) {
#line 498
          return 0;
        }
      else {
#line 499
        if (ch >= '0' && ch <= '9') {
            buf[findex] = (char )ch;
            findex++;
          }
        else {
#line 503
          if (ch == ':') {
              buf[findex] = 0;
              break;
            }
          else {
#line 507
            if ((ch == '\n' || ch == ' ') || ch == '\t') {
                if (findex == 0) {
#line 508
                    return 0;
                  }
                else 
#line 509
                  {
                    buf[findex] = 0;
                    break;
                  }
              }
            else {
                return 0;
              }
            }
          }
        }
    }
#line 519
  *mote_two = atoi(buf);

  findex = 0;

  while (1) {
      ch = _IO_getc(file);
      if (ch == -1) {
#line 525
          return 0;
        }
      else {
#line 527
        if (((((
#line 526
        ch >= '0' && ch <= '9') || ch == '.') || ch == '-') || ch == 'E')
         || ch == 'e') {
            buf[findex] = (char )ch;
            findex++;
          }
        else {
#line 531
          if ((ch == '\n' || ch == ' ') || ch == '\t') {
              if (findex == 0) {
#line 532
                  return 0;
                }
              else 
#line 533
                {
                  buf[findex] = 0;
                  break;
                }
            }
          else {
              return 0;
            }
          }
        }
    }
#line 542
  *loss = atof(buf);

  return 1;
}

static inline void lossy_init(void)
#line 547
{
  int sfd = open(lossyFileName, 00);
  int i;
  FILE *file = fdopen(sfd, "r");
  link_t *new_link;

  dbg_clear(DBG_SIM, "Initializing lossy model from %s.\n", lossyFileName);






  radioConnectivityLock = ptII_createMonitorObject();


  adjacency_list_init();

  if (sfd < 0) {
      dbg(DBG_SIM, "Cannot open %s - assuming single radio cell\n", lossyFileName);
      static_one_cell_init();
      return;
    }

  for (i = 0; i < TOSNODES; i++) {
      radio_connectivity[i] = (void *)0;
      radio_idle_state[i] = 0;
      radio_heard[i] = 0;
    }
  while (1) {
      int mote_one;
      int mote_two;
      double loss;

#line 580
      if (read_lossy_entry(file, &mote_one, &mote_two, &loss)) {
          if (mote_one != mote_two) {
              new_link = allocate_link(mote_two);
              new_link->data = loss;
              new_link->next_link = radio_connectivity[mote_one];
              radio_connectivity[mote_one] = new_link;
            }
        }
      else {
          break;
        }
    }
  dbg(DBG_BOOT, "RFM connectivity graph constructed.\n");
}

#line 611
static inline rfm_model *create_lossy_model(char *file)
#line 611
{
  rfm_model *model = (rfm_model *)malloc(sizeof(rfm_model ));

#line 613
  if (file != (void *)0) {
      lossyFileName = file;
    }
  model->init = lossy_init;
  model->transmit = lossy_transmit;
  model->stop_transmit = lossy_stop_transmit;
  model->hears = lossy_hears;
  model->connected = lossy_connected;
  model->neighbors = lossy_neighbors;
  return model;
}

# 96 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/adc_model.c"
static inline uint16_t generic_adc_read(int moteID, uint8_t port, long long ftime)
#line 96
{
  uint16_t value;


  if (moteID >= TOSNODES || moteID < 0) {
      dbg(DBG_ERROR, "GENERIC_ADC_MODEL: trying to read value with invalid parameters: [moteID = %d] [port = %d]", moteID, port);
      return -1;
    }


  ptII_MonitorEnter(adcValuesLock);


  value = adcValues[moteID][(int )port];


  ptII_MonitorExit(adcValuesLock);

  if (value == 0xffff) {
      char *portname = (void *)0;

#line 116
      switch (port) {
          case TOS_ADC_PHOTO_PORT: portname = "photo";
          break;
          case TOS_ADC_TEMP_PORT: portname = "temperature";
          break;
          case TOS_ADC_MIC_PORT: portname = "microphone";
          break;
          case TOS_ADC_ACCEL_X_PORT: portname = "accelerometerX";
          break;
          case TOS_ADC_ACCEL_Y_PORT: portname = "accelerometerY";
          break;
          case TOS_ADC_MAG_X_PORT: portname = "magnetometerX";
          break;
          case TOS_ADC_MAG_Y_PORT: portname = "magnetometerY";
          break;
          default: ;
        }
      if (portname != (void *)0) {
          return ptII_get_adc_value(portname) & 0x3ff;
        }
      else 
#line 135
        {
          return (short )(rand() & 0x3ff);
        }
    }
  else {
#line 139
    return value;
    }
}

#line 81
static inline void generic_adc_init(void)
#line 81
{
  int i;
#line 82
  int j;

#line 83
  for (i = 0; i < TOSNODES; i++) {
      for (j = 0; j < ADC_NUM_PORTS_PER_NODE; j++) {
          adcValues[i][j] = 0xffff;
        }
    }


  adcValuesLock = ptII_createMonitorObject();
}

#line 142
static inline adc_model *create_generic_adc_model(void)
#line 142
{
  adc_model *model = (adc_model *)malloc(sizeof(adc_model ));

#line 144
  model->init = generic_adc_init;
  model->read = generic_adc_read;
  return model;
}

#line 57
static inline uint16_t random_adc_read(int moteID, uint8_t port, long long ftime)
#line 57
{
  return (uint16_t )(rand() & 0x3ff);
}

#line 55
static inline void random_adc_init(void)
#line 55
{
}




static inline adc_model *create_random_adc_model(void)
#line 61
{
  adc_model *model = (adc_model *)malloc(sizeof(adc_model ));

#line 63
  model->init = random_adc_init;
  model->read = random_adc_read;
  return model;
}

# 104 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/eeprom.c"
static inline int namedEEPROM(char *name, int fnumMotes, int eepromSize)
#line 104
{
  int filedes = createEEPROM(name, fnumMotes, eepromSize);

#line 106
  if (filedes >= 0) {
      return 0;
    }
  else {
      dbg(DBG_ERROR, "ERROR: Unable to create named EEPROM region: %s.\n", name);
      return -1;
    }
}

#line 91
static inline int anonymousEEPROM(int fnumMotes, int eepromSize)
#line 91
{
  int filedes;

#line 93
  filedes = createEEPROM("/tmp/anonymous", fnumMotes, eepromSize);
  if (filedes >= 0) {
      unlink("/tmp/anonymous");
      return 0;
    }
  else {
      dbg(DBG_ERROR, "ERROR: Unable to create anonymous EEPROM region.\n");
      return -1;
    }
}

# 63 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/spatial_model.c"
static inline void simple_spatial_get_position(int moteID, long long ftime, point3D *point)
#line 63
{
  point->xCoordinate = points[moteID].xCoordinate;
  point->yCoordinate = points[moteID].yCoordinate;
  point->zCoordinate = points[moteID].zCoordinate;
}

#line 51
static inline void simple_spatial_init(void)
#line 51
{
  int i;

#line 53
  points = (point3D *)malloc(sizeof(point3D ) * TOSNODES);

  for (i = 0; i < TOSNODES; i++) {
      points[i].xCoordinate = (double )(rand() % 1000);
      points[i].yCoordinate = (double )(rand() % 1000);
      points[i].zCoordinate = (double )(rand() % 1000);
    }
}









static inline spatial_model *create_simple_spatial_model(void)
#line 70
{
  spatial_model *model = (spatial_model *)malloc(sizeof(spatial_model ));

#line 72
  model->init = simple_spatial_init;
  model->get_position = simple_spatial_get_position;

  return model;
}

# 132 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/contrib/ptII/ptinyos/beta/TOSSIM-packet/nido.h"
static inline void tos_state_model_init(void )
{

  tos_state.space->init();


  tos_state.rfm->init();


  tos_state.adc->init();
}

# 490 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/contrib/ptII/ptinyos/beta/TOSSIM-packet/packet_sim.c"
static inline int read_packet_entry(FILE *file, int *mote_one, int *mote_two, double *packet_loss, double *falsePos, double *falseNeg)
#line 490
{
  bool okFormat = TRUE;

#line 492
  if ((*mote_one = read_int(file)) < 0) {
#line 492
      okFormat = FALSE;
    }
  else {
#line 493
    if ((*mote_two = read_int(file)) < 0) {
#line 493
        okFormat = FALSE;
      }
    else {
#line 494
      if ((*packet_loss = read_double(file)) < 0) {
#line 494
          okFormat = FALSE;
        }
      else {
#line 495
        if ((*falsePos = read_double(file)) < 0) {
#line 495
            okFormat = FALSE;
          }
        else {
#line 496
          if ((*falseNeg = read_double(file)) < 0) {
#line 496
              okFormat = FALSE;
            }
          else 
#line 497
            {
              dbg_clear(DBG_SIM, "SIM: Read in packet entry %i->%i, packet loss: %lf, ack false pos: %lf, neg: %lf\n", *mote_one, *mote_two, *packet_loss, *falsePos, *falseNeg);
            }
          }
        }
      }
    }
#line 500
  return okFormat == TRUE;
}

static inline void connectivity_init(char *cFile)
#line 503
{
  int mote_one;
#line 504
  int mote_two;
  double packet;
#line 505
  double positive;
#line 505
  double negative;
  FILE *f = fopen(cFile, "r");

#line 507
  if (f == (void *)0) {
      fprintf(stderr, "SIM: Could not load packet configuration file %s\n", cFile);
      return;
    }
  while (read_packet_entry(f, &mote_one, &mote_two, &packet, &positive, &negative)) {
      link_t *new_link;

#line 513
      new_link = allocate_link(mote_two);
      new_link->data = packet;
      new_link->neg = negative;
      new_link->pos = positive;
      new_link->next_link = packet_connectivity[mote_one];
      packet_connectivity[mote_one] = new_link;
    }
}

#line 174
static inline void packet_sim_init(char *cFile)
#line 174
{
  int i;

#line 176
  for (i = 0; i < TOSNODES; i++) {
      packet_transmitting[i] = (void *)0;
      incoming[i] = (void *)0;
      lastIncoming[i] = (void *)0;
      packet_connectivity[i] = (void *)0;
      rxState[i] = RADIO_RX_IDLE;
      txState[i] = RADIO_TX_IDLE;
      current_ptr[i] = &packet_sim_bufs[i];
    }

  if (cFile != (void *)0) {
      connectivity_init(cFile);
    }
}

# 51 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/hardware.c"
static inline void init_hardware(void)
#line 51
{
  int i;

#line 53
  for (i = 0; i < tos_state.num_nodes; i++) {
      tos_state.current_node = i;
      TOSH_pc_hardware.status_register = 0xff;
    }
}

# 68 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/heap_array.c"
static inline void init_heap(heap_t *heap)
#line 68
{
  heap->size = 0;
  heap->private_size = STARTING_SIZE;
  heap->data = malloc(sizeof(node_t ) * heap->private_size);
}

# 56 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/event_queue.c"
static inline void queue_init(event_queue_t *queue, int fpause)
#line 56
{
  init_heap(& queue->heap);
  queue->pause = fpause;



  queue->lock = ptII_createMonitorObject();
}

# 161 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/external_comm.c"
static inline void initializeSockets(void)
#line 161
{
  int i;

  dbg_clear(DBG_SIM, "SIM: Initializing sockets for mote %i\n", 0);


  tos_state.pause_lock = ptII_createMonitorObject();






  for (i = 0; i < 4; i++) {


      commandClients[i] = (void *)0;

      eventClients[i] = (void *)0;
      batchState[i] = 0;
    }
  eventMask = 0xffff;


  commandServerSocket = ptII_serverSocketCreate(10584);

  eventServerSocket = ptII_serverSocketCreate(10585);


  eventClientsLock = ptII_createMonitorObject();






  ptII_startThreads();

  socketsInitialized = 1;
}

#line 357
static inline void waitForGuiConnection(void)
#line 357
{
  int numclients = 0;
  int n;

  dbg_clear(DBG_SIM, "SIM: Waiting for connection from GUI...for mote %i\n", 0);


  ptII_MonitorEnter(eventClientsLock);


  while (numclients == 0) {
      for (n = 0; n < 4; n++) {

          if (eventClients[n] != (void *)0) {


              dbg_clear(DBG_SIM, "SIM: Got client connection fd %p for mote %i\n", eventClients[n], 0);
              numclients++;
            }
        }
      if (numclients == 0) {

          ptII_MonitorWait(eventClientsLock);
        }
    }


  ptII_MonitorExit(eventClientsLock);
}

# 43 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/events.c"
static inline void event_default_cleanup(event_t *event)
#line 43
{
  free(event->data);
  dbg(DBG_MEM, "event_default_cleanup: freeing event: 0x%x\n", (unsigned int )event);
}

# 78 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/heap_array.c"
static inline int is_empty(heap_t *heap)
#line 78
{
  return heap->size == 0;
}

static inline int heap_is_empty(heap_t *heap)
#line 82
{
  return is_empty(heap);
}

static inline long long heap_get_min_key(heap_t *heap)
#line 86
{
  if (is_empty(heap)) {
      return -1;
    }
  else {
      return ((node_t *)heap->data)[0].key;
    }
}

# 317 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/PowerStateM.nc"
static inline int PowerStateM$bb_exec_count(int mote, int bb)
#line 317
{
  int POWERPROF_BB_EXEC_COUNT;

#line 319
  return POWERPROF_BB_EXEC_COUNT;
}

#line 361
static inline void PowerStateM$dump_power_details(void)
#line 361
{
  char exec_cnts[12] = "bb_exec_cnt";
  FILE *f;
  int mote;
#line 364
  int bb;

  if (!cpu_prof_on) {
      fprintf(stderr, "dump_power_details() called when cpu prof is off!  Shouldn't happen!\n");
      exit(-1);
    }

  f = fopen(exec_cnts, "w");
  if (!f) {
      fprintf(stderr, "Couldn't open '%s', exiting\n", exec_cnts);
      exit(-1);
    }
  for (mote = 0; mote < tos_state.num_nodes; mote++) {
      fprintf(f, "mote %d total cycles: %.1lf\n", mote, PowerStateM$PowerState$get_mote_cycles(mote));
      dbg(DBG_POWER, "POWER: Mote %d CPU_CYCLES %.1lf at %lld\n", mote, PowerStateM$PowerState$get_mote_cycles(mote), tos_state.tos_time);

      for (bb = 1; bb < PowerStateM$num_bbs(); bb++) {
          fprintf(f, "%6d %6d %8d\n", mote, bb, PowerStateM$bb_exec_count(mote, bb));
        }
    }

  fclose(f);
}

#line 54
static inline   result_t PowerStateM$PowerState$stop(void)
#line 54
{
  if (cpu_prof_on) {
    PowerStateM$dump_power_details();
    }
#line 57
  return SUCCESS;
}

# 18 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/PowerState.nc"
inline static   result_t Nido$PowerState$stop(void){
#line 18
  unsigned char result;
#line 18

#line 18
  result = PowerStateM$PowerState$stop();
#line 18

#line 18
  return result;
#line 18
}
#line 18
# 81 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/event_queue.c"
static inline event_t *queue_pop_event(event_queue_t *queue)
#line 81
{
  long long ftime;
  event_t *event;


  ptII_MonitorEnter(queue->lock);


  event = (event_t *)heap_pop_min_data(& queue->heap, &ftime);


  ptII_MonitorExit(queue->lock);

  if (dbg_active(DBG_QUEUE)) {
      char timeStr[128];

#line 96
      timeStr[0] = 0;
      printOtherTime(timeStr, 128, ftime);



      dbg(DBG_QUEUE, "Popping event for mote %i with time %s.\n", 0, timeStr);
    }

  if (queue->pause > 0 && event->pause) {
      sleep(queue->pause);
    }


  return event;
}

#line 148
static inline void queue_handle_next_event(event_queue_t *queue)
#line 148
{
  event_t *event = queue_pop_event(queue);

#line 150
  if (event != (void *)0) {
      if (tos_state.moteOn[event->mote] || event->force) {
          tos_state.current_node = event->mote;




          dbg(DBG_QUEUE, "Setting TOS_LOCAL_ADDRESS to %hi\n", (short )(0 & 0xffff));

          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 159
            TOS_LOCAL_ADDRESS = (short )(0 & 0xffff);
#line 159
            __nesc_atomic_end(__nesc_atomic); }

          event->handle(event, &tos_state);
        }
    }
}

# 86 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/tos.c"
static inline void rate_based_wait(void)
#line 86
{
  long long rtElapsed;
  long long diffVal;
  long long secondVal;

#line 90
  gettimeofday(&thisTime, (void *)0);
  rtElapsed = thisTime.tv_usec - startTime.tv_usec;
  secondVal = thisTime.tv_sec - startTime.tv_sec;
  secondVal *= (long long )1000000;
  rtElapsed += secondVal;
  rtElapsed *= (long long )4;
  rtElapsed = (long long )((double )rtElapsed * rate_value);
  if (rtElapsed + 10000 < tos_state.tos_time - rate_checkpoint_time) {
      diffVal = tos_state.tos_time - rate_checkpoint_time - rtElapsed;
      diffVal /= 4;
      usleep(diffVal);
    }
}

# 339 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/PowerStateM.nc"
static inline void PowerStateM$print_power_info(void)
#line 339
{
  int mote;

#line 341
  if (!cpu_prof_on) {
      fprintf(stderr, "print_power_info() called when cpu prof is off!  Shouldn't happen!\n");
      exit(-1);
    }


  if (!power_init) {
      fprintf(stderr, "print_power_info() called before init_power_info()! Should never happen!\n");
      exit(-1);
    }

  for (mote = 0; mote < tos_state.num_nodes; mote++) {

      dbg(DBG_POWER, "POWER: Mote %d CPU_CYCLES %.1lf at %lld\n", mote, 
      PowerStateM$PowerState$get_mote_cycles(mote), 
      tos_state.tos_time);
    }
}

#line 389
static inline   void PowerStateM$PowerState$CPUCycleCheckpoint(void)
#line 389
{
  if (!cpu_prof_on) {
      fprintf(stderr, "CPUCycleCheckpoint() called when cpu prof is off!  Shouldn't happen!\n");
      exit(-1);
    }


  PowerStateM$print_power_info();
}

# 22 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/PowerState.nc"
inline static   void Nido$PowerState$CPUCycleCheckpoint(void){
#line 22
  PowerStateM$PowerState$CPUCycleCheckpoint();
#line 22
}
#line 22
# 97 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/hardware.h"
static __inline void __nesc_enable_interrupt(void)
{
}

# 526 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/contrib/ptII/ptinyos/beta/TOSSIM-packet/Nido.nc"
  void packet_sim_transmit_done(TOS_MsgPtr msg)
#line 526
{
  dbg(DBG_PACKET, "TossimPacketMica2M: Send done.\n");
  Nido$RadioSendMsg$sendDone(msg, SUCCESS);
}

# 97 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/types/dbg.h"
  void dbg(TOS_dbg_mode mode, const char *format, ...)
{
  DebugMsgEvent ev;

  if (dbg_active(mode)) {
      va_list args;

      __builtin_va_start(args, format);
      if (!(mode & DBG_SIM)) {
          vsnprintf(ev.debugMessage, sizeof  ev.debugMessage, format, args);
          sendTossimEvent(tos_state.current_node, AM_DEBUGMSGEVENT, tos_state.tos_time, &ev);
        }
      if (!dbg_suppress_stdout) {




          fprintf(stdout, "%i: ", 0);
          vfprintf(stdout, format, args);
        }



      __builtin_va_end(args);

      {

        DebugMsgEvent ptII_ev;

#line 125
        __builtin_va_start(args, format);
        vsnprintf(ptII_ev.debugMessage, sizeof  ptII_ev.debugMessage, 
        format, args);
        __builtin_va_end(args);





        ptII_dbg(mode, ptII_ev.debugMessage, 0, TRUE);
      }
    }
}

# 1140 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/external_comm.c"
static void sendTossimEvent(uint16_t moteID, uint16_t type, long long ftime, void *data)
#line 1140
{
  unsigned char *msg;
  int total_size;
  int n;
  int numclients = 0;


  void *clients[4];

  if (!socketsInitialized) {
#line 1149
    return;
    }

  ptII_MonitorEnter(eventClientsLock);


  while (numclients == 0) {
      for (n = 0; n < 4; n++) {

          clients[n] = (void *)0;

          if (eventClients[n] != (void *)0) {
              clients[n] = eventClients[n];
              numclients++;
            }
        }

      if (numclients == 0 && GUI_enabled) {
          fprintf(stderr, "sendTossimEvent waiting for connection\n");


          ptII_MonitorWait(eventClientsLock);

          fprintf(stderr, "sendTossimEvent woke up\n");
        }
      else {
#line 1173
        if (numclients == 0) {



            ptII_MonitorExit(eventClientsLock);

            return;
          }
        }
    }

  ptII_MonitorExit(eventClientsLock);


  fprintf(stderr, "sendTossimEvent: msgType %d (0x%02x) moteID %d (0x%02x)\n", type, type, moteID, moteID);

  buildTossimEvent(moteID, type, ftime, data, &msg, &total_size);

  for (n = 0; n < 4; n++) {

      if (clients[n] != (void *)0 && (type & eventMask) != 0) {
          if (writeTossimEvent(msg, total_size, clients[n]) < 0) {



              ptII_MonitorEnter(eventClientsLock);



              eventClients[n] = (void *)0;


              ptII_MonitorExit(eventClientsLock);
            }
        }
    }
  fprintf(stderr, "Sent.\n");
  free(msg);
}

#line 1080
static void buildTossimEvent(uint16_t moteID, uint16_t type, long long ftime, void *data, 
unsigned char **msgp, int *lenp)
#line 1081
{
  unsigned char *msg;
  int payload_size;
#line 1083
  int total_size;



  switch (type) {
      case AM_DEBUGMSGEVENT: 
        payload_size = sizeof(DebugMsgEvent );
      break;
      case AM_RADIOMSGSENTEVENT: 
        payload_size = sizeof(RadioMsgSentEvent );
      break;
      case AM_UARTMSGSENTEVENT: 
        payload_size = sizeof(RadioMsgSentEvent );
      break;
      case AM_ADCDATAREADYEVENT: 
        payload_size = sizeof(ADCDataReadyEvent );
      break;
      case AM_TOSSIMINITEVENT: 
        payload_size = sizeof(TossimInitEvent );
      break;
      case AM_VARIABLERESOLVERESPONSE: 
        payload_size = sizeof(VariableResolveResponse );
      break;
      case AM_VARIABLEREQUESTRESPONSE: 
        payload_size = sizeof(VariableRequestResponse );
      break;
      case AM_INTERRUPTEVENT: 
        payload_size = sizeof(InterruptEvent );
      dbg(DBG_TEMP, "SIM: Sending InterruptEvent, payload is %i\n", (int )payload_size);
      break;
      case AM_LEDEVENT: 
        payload_size = sizeof(LedEvent );
      break;
      default: 
        fprintf(stderr, "buildTossimEvent for invalid type: %d", type);
      return;
    }

  total_size = 14 + payload_size;
  msg = (unsigned char *)malloc(total_size);

  * (unsigned short *)&msg[0] = htons(type);
  * (unsigned short *)&msg[2] = htons(moteID);
  * (long long *)&msg[4] = __extension__ ({
#line 1126
    register unsigned long __v;
#line 1126
    register unsigned long __x = ftime;

#line 1126
    if (__builtin_constant_p(__x)) {
#line 1126
      __v = ((((((((__x & 0xff00000000000000ull) >> 56) | ((__x & 0x00ff000000000000ull) >> 40)) | ((__x & 0x0000ff0000000000ull) >> 24)) | ((__x & 0x000000ff00000000ull) >> 8)) | ((__x & 0x00000000ff000000ull) << 8)) | ((__x & 0x0000000000ff0000ull) << 24)) | ((__x & 0x000000000000ff00ull) << 40)) | ((__x & 0x00000000000000ffull) << 56);
      }
    else {
#line 1126
       __asm ("bswap %q0" : "=r"(__v) : "0"(__x));
      }
#line 1126
    __v;
  }
  );
#line 1127
  * (unsigned short *)&msg[12] = htons(payload_size);
  memcpy((unsigned char *)msg + 14, data, payload_size);

  fprintf(stderr, "buildTossimEvent: msgType %d (0x%02x) moteID %d (0x%02x) payload size %d total size %d\n", type, type, moteID, moteID, payload_size, total_size);


  *msgp = msg;
  *lenp = total_size;
}

#line 1036
static int writeTossimEvent(void *data, int datalen, void *socketChannel)
#line 1036
{
  unsigned char ack;
  int i;
#line 1038
  int j;










  fprintf(stderr, "writeTossimEvent: socketChannel %p datalen %d (0x%2x)\n", socketChannel, datalen, datalen);
  j = 0;





  i = ptII_socketChannelWrite(socketChannel, data, datalen);

  fprintf(stderr, "writeTossimEvent: waiting for ack...\n");


  if (i >= 0) {
      j = ptII_socketChannelRead(socketChannel, &ack, 1);
    }

  fprintf(stderr, "writeTossimEvent: ack received...\n");
  if (i < 0 || j < 0) {
      fprintf(stderr, "writeTossimEvent: Socket closed: %s\n", strerror(*__errno_location()));


      ptII_socketChannelClose(socketChannel);

      return -1;
    }


  fprintf(stderr, "writeTossimEvent: done\n");
  return 0;
}

# 170 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/AMPromiscuous.nc"
static result_t AMPromiscuous$reportSendDone(TOS_MsgPtr msg, result_t success)
#line 170
{
  dbg(DBG_AM, "AM report send done for message to 0x%x, type %d.\n", msg->addr, msg->type);
  AMPromiscuous$state[tos_state.current_node] = FALSE;
  AMPromiscuous$SendMsg$sendDone(msg->type, msg, success);
  AMPromiscuous$sendDone();

  return SUCCESS;
}

# 49 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/SendMsg.nc"
static  result_t QueuedSendM$QueueSendMsg$sendDone(uint8_t arg_0x7fa46abb65b8, TOS_MsgPtr arg_0x7fa46abbe210, result_t arg_0x7fa46abbe4d0){
#line 49
  unsigned char result;
#line 49

#line 49
  result = BcastM$SendMsg$sendDone(arg_0x7fa46abb65b8, arg_0x7fa46abbe210, arg_0x7fa46abbe4d0);
#line 49
  result = rcombine(result, MultiHopEngineM$SendMsg$sendDone(arg_0x7fa46abb65b8, arg_0x7fa46abbe210, arg_0x7fa46abbe4d0));
#line 49
  switch (arg_0x7fa46abb65b8) {
#line 49
    case AM_MULTIHOPMSG:
#line 49
      result = rcombine(result, MultiHopLEPSM$SendMsg$sendDone(arg_0x7fa46abbe210, arg_0x7fa46abbe4d0));
#line 49
      break;
#line 49
  }
#line 49

#line 49
  return result;
#line 49
}
#line 49
# 125 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Queue/QueuedSendM.nc"
static  void QueuedSendM$QueueServiceTask(void)
#line 125
{
  uint8_t id;

  if (QueuedSendM$msgqueue[tos_state.current_node][QueuedSendM$dequeue_next[tos_state.current_node]].pMsg != (void *)0) {
      QueuedSendM$Leds$greenToggle();
      dbg(DBG_USR2, "QueuedSend: sending msg (0x%x)\n", QueuedSendM$dequeue_next[tos_state.current_node]);
      id = QueuedSendM$msgqueue[tos_state.current_node][QueuedSendM$dequeue_next[tos_state.current_node]].id;

      if (!QueuedSendM$SerialSendMsg$send(id, QueuedSendM$msgqueue[tos_state.current_node][QueuedSendM$dequeue_next[tos_state.current_node]].address, 
      QueuedSendM$msgqueue[tos_state.current_node][QueuedSendM$dequeue_next[tos_state.current_node]].length, 
      QueuedSendM$msgqueue[tos_state.current_node][QueuedSendM$dequeue_next[tos_state.current_node]].pMsg)) {



          dbg(DBG_USR2, "QueuedSend: send request failed. stuck in queue\n");
        }
    }
  else {
      QueuedSendM$fQueueIdle[tos_state.current_node] = TRUE;
    }
}

# 149 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/tos.h"
static void *nmemcpy(void *to, const void *from, size_t n)
{
  char *cto = to;
  const char *cfrom = from;

  while (n--) * cto++ = * cfrom++;

  return to;
}

# 82 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/UARTNoCRCPacketM.nc"
  void NIDO_uart_send_done(TOS_MsgPtr fmsg, result_t fsuccess)
#line 82
{
  UARTNoCRCPacketM$Send$sendDone(fmsg, fsuccess);
}

# 48 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/events.c"
static void event_total_cleanup(event_t *event)
#line 48
{
  free(event->data);
  dbg(DBG_MEM, "event_total_cleanup: freeing event data: 0x%x\n", (unsigned int )event->data);
  event->data = (void *)0;
  free(event);
  dbg(DBG_MEM, "event_total_cleanup: freeing event: 0x%x\n", (unsigned int )event);
}

# 68 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/event_queue.c"
static void queue_insert_event(event_queue_t *queue, event_t *event)
#line 68
{
  ptII_queue_insert_event(event->time);


  ptII_MonitorEnter(queue->lock);


  heap_insert(& queue->heap, event, event->time);


  ptII_MonitorExit(queue->lock);
}

# 187 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/heap_array.c"
static void up_heap(heap_t *heap, int findex)
#line 187
{
  int parent_index;

#line 189
  if (findex == 0) {
      return;
    }

  parent_index = (findex - 1) / 2;

  if (((node_t *)heap->data)[parent_index].key > ((node_t *)heap->data)[findex].key) {
      swap(&((node_t *)heap->data)[findex], &((node_t *)heap->data)[parent_index]);
      up_heap(heap, parent_index);
    }
}

#line 148
static void swap(node_t *first, node_t *second)
#line 148
{
  long long key;
  void *data;

  key = first->key;
  first->key = second->key;
  second->key = key;

  data = first->data;
  first->data = second->data;
  second->data = data;
}

# 387 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/external_comm.c"
static int printOtherTime(char *buf, int len, long long int ftime)
#line 387
{
  int hours;
  int minutes;
  int seconds;
  int secondBillionths;

  secondBillionths = (int )(ftime % (long long )4000000);
  seconds = (int )(ftime / (long long )4000000);
  minutes = seconds / 60;
  hours = minutes / 60;
  secondBillionths *= (long long )25;
  seconds %= 60;
  minutes %= 60;

  return snprintf(buf, len, "%i:%i:%i.%08i", hours, minutes, seconds, secondBillionths);
}

# 216 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/contrib/ptII/ptinyos/beta/TOSSIM-packet/packet_sim.c"
static void event_backoff_create(event_t *event, int node, long long eventTime)
#line 216
{
  event->mote = node;
  event->force = 0;
  event->pause = 0;
  event->data = (void *)0;
  event->time = eventTime;
  event->handle = event_backoff_handle;
  event->cleanup = event_total_cleanup;
}


  void event_backoff_handle(event_t *event, struct TOS_state *state)
#line 227
{
  dbg(DBG_PACKET, "SIM_PACKET: Handling backoff event @%s.\n", currentTime());
  if (txState[tos_state.current_node] != RADIO_TX_BACK) {
      dbg(DBG_ERROR, "SIM_PACKET: Backing off in non-backoff state.\n");
    }

  if (incoming[tos_state.current_node] != (void *)0) {
      int backoffAmount = backoffLow;

#line 235
      backoffAmount += rand() % (backoffHigh - backoffLow);
      event_backoff_create(event, tos_state.current_node, tos_state.tos_time + backoffAmount);
      dbg(DBG_PACKET, "SIM_PACKET: Backoff more: %i.\n", backoffAmount);
      queue_insert_event(& tos_state.queue, event);
#line 238
      ;
    }
  else {
      dbg(DBG_PACKET, "SIM_PACKET: No incoming packet, transmit OK.\n");
      txState[tos_state.current_node] = RADIO_TX_TRANS;
      event_start_transmit_create(event, tos_state.current_node, tos_state.tos_time + txChangeLatency);
      queue_insert_event(& tos_state.queue, event);
#line 244
      ;
    }
}

# 408 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/external_comm.c"
static char *currentTime(void)
#line 408
{
  static char timeBuf[128];

#line 410
  printTime(timeBuf, 128);
  return timeBuf;
}

# 268 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/contrib/ptII/ptinyos/beta/TOSSIM-packet/packet_sim.c"
  void event_start_transmit_handle(event_t *event, struct TOS_state *state)
#line 268
{
  link_t *connectLink;
  TOS_MsgPtr msg = packet_transmitting[tos_state.current_node];
  int transmitTime = preambleLength + msg->length + headerLength;
  bool ack = FALSE;

#line 273
  transmitTime *= byteTransmitTime;
  connectLink = packet_connectivity[tos_state.current_node];
  msg->crc = 1;

  dbg(DBG_PACKET, "SIM_PACKET: Transmitting, transmit time is %i.\n", transmitTime);



  ptII_send_packet(msg);

  while (connectLink != (void *)0) {
      int mote = connectLink->mote;


      event_t *recvEvent = (event_t *)malloc(sizeof(event_t ));
      IncomingMsg *msgEvent = (IncomingMsg *)malloc(sizeof(IncomingMsg ));

#line 289
      msgEvent->fromID = tos_state.current_node;
      msgEvent->next = (void *)0;
      nmemcpy(& msgEvent->msg, msg, sizeof(TOS_Msg ));

      dbg(DBG_PACKET, "SIM_PACKET: Considering reception at %i\n", (int )mote);


      if (
#line 295
      incoming[mote] == (void *)0 && 
      txState[mote] != RADIO_TX_TRANS && 
      tos_state.moteOn[mote]) {
          int r;
          double prob;

          r = rand() % 100000;
          prob = (double )r / 100000.0;
          if (prob < connectLink->data) {
              corruptPacket(msgEvent, tos_state.current_node, mote);
              rxState[mote] = RADIO_RX_RECV;
            }
          else {
              if (msg->addr == TOS_BCAST_ADDR || 
              msg->addr == mote) {
                  ack = TRUE;
                }
              rxState[mote] = RADIO_RX_RECV;
              current_ptr[mote]->crc = 1;
            }
          dbg(DBG_PACKET, "SIM_PACKET: Enqueueing receive for %i.\n", mote);
          event_receive_packet_create(recvEvent, mote, tos_state.tos_time + transmitTime, msgEvent, TRUE);
          addIncomingEntry(mote, msgEvent);
          queue_insert_event(& tos_state.queue, recvEvent);
#line 318
          ;
        }
      else {
          IncomingMsg *alreadyIncoming = incoming[mote];

#line 322
          dbg(DBG_PACKET, "SIM_PACKET: %i already receiving or transmitting: enqueue event for non-receive (noise), corrupt all already incoming\n", mote);
          while (alreadyIncoming != (void *)0) {
              corruptPacket(alreadyIncoming, tos_state.current_node, mote);




              if (packet_transmitting[alreadyIncoming->fromID] != (void *)0 && 
              packet_transmitting[alreadyIncoming->fromID]->addr == mote) {
                  packet_transmitting[alreadyIncoming->fromID]->ack = 0;
                }
              alreadyIncoming = alreadyIncoming->next;
            }
          event_receive_packet_create(recvEvent, mote, tos_state.tos_time + transmitTime, msgEvent, FALSE);
          addIncomingEntry(mote, msgEvent);
          queue_insert_event(& tos_state.queue, recvEvent);
#line 337
          ;
        }
      connectLink = connectLink->next_link;
    }

  packet_transmitting[tos_state.current_node] = msg;
  msg->ack = ack;
  dbg(DBG_PACKET, "SIM_PACKET: Enqueueing send done.\n");
  event_send_packet_done_create(event, tos_state.current_node, tos_state.tos_time + transmitTime - 1);
  queue_insert_event(& tos_state.queue, event);
#line 346
  ;
}

#line 258
static void corruptPacket(IncomingMsg *msg, int src, int dest)
#line 258
{
  int i;
  uint8_t *buf = (uint8_t *)& msg->msg;

#line 261
  dbg(DBG_PACKET, "SIM_PACKET: Corrupting message from %i to %i\n", src, dest);
  for (i = 0; i < 29 + 7; i++) {
      buf[i] = (uint8_t )(rand() & 0xff);
    }
  msg->msg.crc = 0;
}

#line 350
  void event_receive_packet_create(event_t *event, int node, long long eventTime, IncomingMsg *msg, bool deliver)
#line 350
{
  event->mote = node;
  event->force = 1;
  event->pause = 0;
  event->time = eventTime;
  if (deliver) {
      event->handle = event_receive_packet_handle;
    }
  else {
      event->handle = event_receive_packet_noise_handle;
    }
  event->cleanup = event_total_cleanup;
  event->data = msg;
  msg->next = (void *)0;
}

#line 379
  void event_receive_packet_handle(event_t *event, struct TOS_state *state)
#line 379
{
  IncomingMsg *receivedPacket;

  receivedPacket = (IncomingMsg *)event->data;

  removeIncomingEntry(tos_state.current_node, receivedPacket);

  rxState[tos_state.current_node] = RADIO_RX_IDLE;

  if (tos_state.current_node < tos_state.num_nodes && 
  tos_state.moteOn[tos_state.current_node]) {
      dbg(DBG_PACKET, "SIM_PACKET: Receiving\n");
      nmemcpy(current_ptr[tos_state.current_node], & receivedPacket->msg, sizeof(TOS_Msg ));
      current_ptr[tos_state.current_node] = packet_sim_receive_msg(current_ptr[tos_state.current_node]);
    }

  event_cleanup(event);
}

#line 111
static bool removeIncomingEntry(int moteID, IncomingMsg *entry)
#line 111
{
  dbg(DBG_PACKET, "SIM_PACKET: Removing incoming packet from %i to %i\n", (int )entry->fromID, (int )moteID);
  if (incoming[moteID] == (void *)0) {
      dbg(DBG_ERROR, "SIM_PACKET: Could not find IncomingMsg entry 0x%x for mote %i.\n", entry, moteID);
      return FALSE;
    }
  else {
      if (incoming[moteID] == entry) {
          dbg(DBG_PACKET, "SIM_PACKET: Incoming: 0x%x\n", incoming[moteID]);
          if (lastIncoming[moteID] == entry) {
              lastIncoming[moteID] = (void *)0;
              incoming[moteID] = (void *)0;
            }
          else {
              incoming[moteID] = incoming[moteID]->next;
            }
          return TRUE;
        }
      else {
          IncomingMsg *prevMsg = incoming[moteID];
          IncomingMsg *currentMsg = incoming[moteID]->next;
          IncomingMsg *nextMsg;

#line 133
          if (currentMsg == (void *)0) {
              dbg(DBG_ERROR, "SIM_PACKET: Could not find IncomingMsg entry 0x%x for mote %i.\n", entry, moteID);
              return FALSE;
            }
          nextMsg = currentMsg->next;

          while (currentMsg != entry && nextMsg != (void *)0) {
              prevMsg = currentMsg;
              currentMsg = nextMsg;
              nextMsg = currentMsg->next;
            }
          if (currentMsg != entry) {
              dbg(DBG_ERROR, "SIM_PACKET: Could not find IncomingMsg entry 0x%x for mote %i.\n", entry, moteID);
              return FALSE;
            }
          prevMsg->next = nextMsg;

          if (lastIncoming[moteID] == entry) {
              lastIncoming[moteID] = prevMsg;
            }

          dbg(DBG_PACKET, "SIM_PACKET: Incoming: 0x%x\n", incoming[moteID]);
          return TRUE;
        }
    }
}

# 531 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/contrib/ptII/ptinyos/beta/TOSSIM-packet/Nido.nc"
  TOS_MsgPtr packet_sim_receive_msg(TOS_MsgPtr msg)
#line 531
{
  if (msg->crc) {
      return Nido$RadioReceiveMsg$receive(msg);
    }
  else {
      return msg;
    }
}

# 79 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/contrib/ptII/ptinyos/beta/TOSSIM-packet/TossimPacketM.nc"
static  TOS_MsgPtr TossimPacketM$ReceiveMain$receive(TOS_MsgPtr msg)
#line 79
{
  nmemcpy(TossimPacketM$bufferPtr[tos_state.current_node], msg, sizeof(TOS_Msg ));
  TossimPacketM$bufferPtr[tos_state.current_node] = TossimPacketM$Receive$receive(TossimPacketM$bufferPtr[tos_state.current_node]);
  return msg;
}

# 244 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/AMPromiscuous.nc"
  TOS_MsgPtr prom_received(TOS_MsgPtr packet)
#line 244
{
  AMPromiscuous$counter[tos_state.current_node]++;
  dbg(DBG_AM, "AM_address = %hx, %hhx; counter:%i\n", packet->addr, packet->type, (int )AMPromiscuous$counter[tos_state.current_node]);




  if (
#line 248
  packet->group == TOS_AM_GROUP && ((
  AMPromiscuous$promiscuous_mode[tos_state.current_node] == TRUE || 
  packet->addr == TOS_BCAST_ADDR) || 
  packet->addr == TOS_LOCAL_ADDRESS) && (
  AMPromiscuous$crc_check[tos_state.current_node] == FALSE || packet->crc == 1)) 
    {
      uint8_t type = packet->type;
      TOS_MsgPtr tmp;


      dbg(DBG_AM, "Received message:\n\t");
      AMPromiscuous$dbgPacket(packet);
      dbg(DBG_AM, "AM_type = %d\n", type);


      tmp = AMPromiscuous$ReceiveMsg$receive(type, packet);
      if (tmp) {
        packet = tmp;
        }
    }
#line 267
  return packet;
}

#line 159
static void AMPromiscuous$dbgPacket(TOS_MsgPtr data)
#line 159
{
  uint8_t i;

  for (i = 0; i < sizeof(TOS_Msg ); i++) 
    {
      dbg_clear(DBG_AM, "%02hhx ", ((uint8_t *)data)[i]);
    }
  dbg(DBG_AM, "\n");
}

# 140 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/types/dbg.h"
  void dbg_clear(TOS_dbg_mode mode, const char *format, ...)
{
  DebugMsgEvent ev;

#line 143
  if (dbg_active(mode)) {
      va_list args;

#line 145
      __builtin_va_start(args, format);
      if (!(mode & DBG_SIM)) {
          vsnprintf(ev.debugMessage, sizeof  ev.debugMessage, format, args);
          sendTossimEvent(tos_state.current_node, AM_DEBUGMSGEVENT, tos_state.tos_time, &ev);
        }
      if (!dbg_suppress_stdout) {

          vfprintf(stdout, format, args);
        }



      __builtin_va_end(args);

      {

        DebugMsgEvent ptII_ev;

#line 162
        __builtin_va_start(args, format);
        vsnprintf(ptII_ev.debugMessage, sizeof  ptII_ev.debugMessage, 
        format, args);
        __builtin_va_end(args);


        ptII_dbg(mode, ptII_ev.debugMessage, 0, FALSE);
      }
    }
}

# 292 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Route/MultiHopLEPSM.nc"
static bool MultiHopLEPSM$updateNbrCounters(uint16_t saddr, int16_t seqno, uint8_t *NbrIndex)
#line 292
{
  MultiHopLEPSM$TableEntry *pNbr;
  int16_t sDelta;
  uint8_t iNbr;
  bool Result = FALSE;

  iNbr = MultiHopLEPSM$findPreparedIndex(saddr);
  pNbr = &MultiHopLEPSM$NeighborTbl[tos_state.current_node][iNbr];

  sDelta = seqno - MultiHopLEPSM$NeighborTbl[tos_state.current_node][iNbr].lastSeqno - 1;

  if (pNbr->flags & MultiHopLEPSM$NBRFLAG_NEW) {
      pNbr->received++;
      pNbr->lastSeqno = seqno;
      pNbr->flags ^= MultiHopLEPSM$NBRFLAG_NEW;
    }
  else {
#line 308
    if (sDelta >= 0) {
        pNbr->missed += sDelta;
        pNbr->received++;
        pNbr->lastSeqno = seqno;
      }
    else {
#line 313
      if (sDelta < MultiHopLEPSM$ACCEPTABLE_MISSED) {

          MultiHopLEPSM$newEntry(iNbr, saddr);
          pNbr->received++;
          pNbr->lastSeqno = seqno;
          pNbr->flags ^= MultiHopLEPSM$NBRFLAG_NEW;
        }
      else {
          Result = TRUE;
        }
      }
    }
#line 324
  *NbrIndex = iNbr;
  return Result;
}

#line 173
static void MultiHopLEPSM$newEntry(uint8_t indes, uint16_t id)
#line 173
{
  MultiHopLEPSM$NeighborTbl[tos_state.current_node][indes].id = id;
  MultiHopLEPSM$NeighborTbl[tos_state.current_node][indes].flags = MultiHopLEPSM$NBRFLAG_VALID | MultiHopLEPSM$NBRFLAG_NEW;
  MultiHopLEPSM$NeighborTbl[tos_state.current_node][indes].liveliness = 0;
  MultiHopLEPSM$NeighborTbl[tos_state.current_node][indes].parent = MultiHopLEPSM$ROUTE_INVALID;
  MultiHopLEPSM$NeighborTbl[tos_state.current_node][indes].hop = MultiHopLEPSM$ROUTE_INVALID;
  MultiHopLEPSM$NeighborTbl[tos_state.current_node][indes].missed = 0;
  MultiHopLEPSM$NeighborTbl[tos_state.current_node][indes].received = 0;
  MultiHopLEPSM$NeighborTbl[tos_state.current_node][indes].receiveEst = 0;
  MultiHopLEPSM$NeighborTbl[tos_state.current_node][indes].sendEst = 0;
}

#line 507
static  result_t MultiHopLEPSM$RouteSelect$selectRoute(TOS_MsgPtr Msg, uint8_t id)
#line 507
{
  TOS_MHopMsg *pMHMsg = (TOS_MHopMsg *)&Msg->data[0];

  uint8_t iNbr;
  bool fIsDuplicate;
  result_t Result = SUCCESS;


  if (MultiHopLEPSM$gpCurrentParent[tos_state.current_node] == (void *)0) {


      if (pMHMsg->sourceaddr == TOS_LOCAL_ADDRESS && 
      pMHMsg->originaddr == TOS_LOCAL_ADDRESS) {
          pMHMsg->sourceaddr = TOS_LOCAL_ADDRESS;
          pMHMsg->hopcount = MultiHopLEPSM$gbCurrentHopCount[tos_state.current_node];
          pMHMsg->seqno = MultiHopLEPSM$gCurrentSeqNo[tos_state.current_node]++;
          Msg->addr = TOS_BCAST_ADDR;
          return SUCCESS;
        }
      else {
          return FAIL;
        }
    }

  if (MultiHopLEPSM$gbCurrentHopCount[tos_state.current_node] >= pMHMsg->hopcount) {

      return FAIL;
    }

  if (pMHMsg->sourceaddr == TOS_LOCAL_ADDRESS && 
  pMHMsg->originaddr == TOS_LOCAL_ADDRESS) {
      fIsDuplicate = FALSE;
    }
  else {
      fIsDuplicate = MultiHopLEPSM$updateNbrCounters(pMHMsg->sourceaddr, pMHMsg->seqno, &iNbr);
    }

  if (!fIsDuplicate) {
      pMHMsg->sourceaddr = TOS_LOCAL_ADDRESS;
      pMHMsg->hopcount = MultiHopLEPSM$gbCurrentHopCount[tos_state.current_node];
      if (MultiHopLEPSM$gpCurrentParent[tos_state.current_node]->id != TOS_UART_ADDR) {
          pMHMsg->seqno = MultiHopLEPSM$gCurrentSeqNo[tos_state.current_node]++;
        }
      Msg->addr = MultiHopLEPSM$gpCurrentParent[tos_state.current_node]->id;
    }
  else {
      Result = FAIL;
    }

  return Result;
}

# 147 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Queue/QueuedSendM.nc"
static  result_t QueuedSendM$QueueSendMsg$send(uint8_t id, uint16_t address, uint8_t length, TOS_MsgPtr msg)
#line 147
{
  dbg(DBG_USR2, "QueuedSend: queue msg enq %d deq %d\n", QueuedSendM$enqueue_next[tos_state.current_node], QueuedSendM$dequeue_next[tos_state.current_node]);

  if ((QueuedSendM$enqueue_next[tos_state.current_node] + 1) % QueuedSendM$MESSAGE_QUEUE_SIZE == QueuedSendM$dequeue_next[tos_state.current_node]) {

      dbg(DBG_USR2, "QueuedSend: queue is full!\n");
      return FAIL;
    }

  if (length > 29) {
      dbg(DBG_USR2, "QueuedSend: message too long to send!\n");
      return FAIL;
    }

  if (msg == (void *)0) {
      dbg(DBG_USR2, "QueuedSend: No storage allocated!\n");
      return FAIL;
    }

  QueuedSendM$msgqueue[tos_state.current_node][QueuedSendM$enqueue_next[tos_state.current_node]].address = address;
  QueuedSendM$msgqueue[tos_state.current_node][QueuedSendM$enqueue_next[tos_state.current_node]].length = length;
  QueuedSendM$msgqueue[tos_state.current_node][QueuedSendM$enqueue_next[tos_state.current_node]].id = id;
  QueuedSendM$msgqueue[tos_state.current_node][QueuedSendM$enqueue_next[tos_state.current_node]].pMsg = msg;
  QueuedSendM$msgqueue[tos_state.current_node][QueuedSendM$enqueue_next[tos_state.current_node]].xmit_count = 0;
  QueuedSendM$msgqueue[tos_state.current_node][QueuedSendM$enqueue_next[tos_state.current_node]].pMsg->ack = 0;

  QueuedSendM$enqueue_next[tos_state.current_node]++;
#line 173
  QueuedSendM$enqueue_next[tos_state.current_node] %= QueuedSendM$MESSAGE_QUEUE_SIZE;

  dbg(DBG_USR2, "QueuedSend: Successfully queued msg to 0x%x, enq %d, deq %d\n", address, QueuedSendM$enqueue_next[tos_state.current_node], QueuedSendM$dequeue_next[tos_state.current_node]);








  if (QueuedSendM$fQueueIdle[tos_state.current_node]) {
      QueuedSendM$fQueueIdle[tos_state.current_node] = FALSE;
      TOS_post(QueuedSendM$QueueServiceTask);
    }
  return SUCCESS;
}

# 366 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/contrib/ptII/ptinyos/beta/TOSSIM-packet/packet_sim.c"
  void event_receive_packet_noise_handle(event_t *event, struct TOS_state *state)
#line 366
{
  IncomingMsg *receivedPacket;

  receivedPacket = (IncomingMsg *)event->data;

  removeIncomingEntry(tos_state.current_node, receivedPacket);

  rxState[tos_state.current_node] = RADIO_RX_IDLE;

  dbg(DBG_PACKET, "SIM_PACKET: Noise packet (no proper detection), don't deliver\n");
  event_cleanup(event);
}

#line 160
static void addIncomingEntry(int moteID, IncomingMsg *entry)
#line 160
{
  dbg(DBG_PACKET, "SIM_PACKET: Adding incoming packet from %i to %i (incoming=0x%x)\n", (int )entry->fromID, (int )moteID, incoming[moteID]);
  entry->next = (void *)0;
  if (lastIncoming[moteID] == (void *)0) {
      incoming[moteID] = entry;
      lastIncoming[moteID] = entry;
    }
  else {
      lastIncoming[moteID]->next = entry;
      lastIncoming[moteID] = entry;
    }
}

#line 398
  void event_send_packet_done_create(event_t *event, int node, long long eventTime)
#line 398
{
  event->mote = node;
  event->force = 0;
  event->pause = 0;
  event->time = eventTime;
  event->handle = event_send_packet_done_handle;
  event->cleanup = event_total_cleanup;
  event->data = (void *)0;
}


  void event_send_packet_done_handle(event_t *event, struct TOS_state *state)
#line 409
{
  RadioMsgSentEvent ev;
  TOS_MsgPtr bufferPtr = packet_transmitting[tos_state.current_node];

#line 412
  if (dbg_active(DBG_PACKET)) {
      char timeBuf[128];

#line 414
      printTime(timeBuf, 128);
      dbg(DBG_PACKET, "SIM_PACKET: Send done @%s\n", timeBuf);
    }

  nmemcpy(& ev.message, bufferPtr, sizeof  ev.message);
  ev.message.crc = 1;
  sendTossimEvent(tos_state.current_node, AM_RADIOMSGSENTEVENT, tos_state.tos_time, &ev);

  packet_transmitting[tos_state.current_node] = (void *)0;
  packet_sim_transmit_done(bufferPtr);
  txState[tos_state.current_node] = RADIO_TX_IDLE;
  event_cleanup(event);
}

# 276 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/external_comm.c"
  void shutdownSockets(void)
#line 276
{



  socketsInitialized = 0;
#line 293
  ptII_selectorClose(selectorCommandReadThread);
  dbg_clear(DBG_SIM | DBG_ERROR, "SIM: Shut down command server selector for mote %i.\n", 0);
  ptII_serverSocketClose(commandServerSocket);
  dbg_clear(DBG_SIM | DBG_ERROR, "SIM: Closed command server socket for mote %i.\n", 0);
#line 309
  ptII_selectorClose(selectorEventAcceptThread);
  dbg_clear(DBG_SIM | DBG_ERROR, "SIM: Shut down event server selector for mote %i.\n", 0);
  ptII_serverSocketClose(eventServerSocket);
  dbg_clear(DBG_SIM | DBG_ERROR, "SIM: Closed event server socket for mote %i.\n", 0);

  if (ptII_joinThreads()) {
      dbg_clear(DBG_SIM | DBG_ERROR, "SIM: Joined commandReadThread for mote %i.\n", 0);
      dbg_clear(DBG_SIM | DBG_ERROR, "SIM: Joined eventAcceptThread for mote %i.\n", 0);
    }
  else 
#line 317
    {
      dbg_clear(DBG_SIM | DBG_ERROR, "SIM: Could not join commandReadThread and/or eventAcceptThread for mote %i.\n", 0);
    }
}

#line 466
  void *eventAcceptThreadFunc(void *arg)
#line 466
{






  void *serverSocketChannel;
  void *socketChannel;
  char selectorIsClosing = 0;

  dbg_clear(DBG_SIM, "SIM: eventAcceptThread running for mote %i.\n", 0);


  selectorEventAcceptThread = ptII_selectorCreate(eventServerSocket, TRUE, FALSE, FALSE, FALSE);

  if (selectorEventAcceptThread == (void *)0) {
      fprintf(stderr, "SIM: eventAcceptThread: selectorCreate returned NULL %i.\n", 0);
      return 0;
    }

  while (1) {



      fprintf(stderr, "SIM: eventAcceptThread: calling select for mote %i\n", 0);



      serverSocketChannel = ptII_selectSocket(selectorEventAcceptThread, &selectorIsClosing, TRUE, FALSE, FALSE, FALSE);
      fprintf(stderr, "SIM: eventAcceptThread: returned from select for mote %i\n", 0);
      if (serverSocketChannel == (void *)0) {
          if (selectorIsClosing) {
              fprintf(stderr, "SIM: eventAcceptThreadFunc: selector is closing for mote %i.\n", 0);
              return 0;
            }
          else 
#line 501
            {

              fprintf(stderr, "SIM: eventAcceptThreadFunc: error in select for mote %i\n", 0);
              return 0;
            }
        }
      fprintf(stderr, "SIM: eventAcceptThread: select returned for mote %i\n", 0);


      if (serverSocketChannel != (void *)0) {
          fprintf(stderr, "SIM: eventAcceptThread: Checking for event connection for mote %i\n", 0);

          socketChannel = acceptConnection(serverSocketChannel);
          fprintf(stderr, "SIM: eventAcceptThread: Returned from acceptConnection for mote %i\n", 0);


          if (socketChannel == (void *)0) {
              fprintf(stderr, "SIM: eventAcceptThread: acceptConnection failed for mote %i\n", 0);
              return 0;
            }

          fprintf(stderr, "SIM: eventAcceptThread: Got event connection %p for mote %i\n", socketChannel, 0);


          ptII_MonitorEnter(eventClientsLock);



          addClient2(eventClients, socketChannel);

          sendInitEvent(socketChannel);

          ptII_MonitorNotifyAll(eventClientsLock);


          ptII_MonitorExit(eventClientsLock);
        }
    }
  return 0;
}

#line 208
static void *acceptConnection(void *serverSocketChannel)
#line 208
{



  void *socketChannel;


  dbg_clear(DBG_SIM, "SIM: Waiting for connection on serverSocketChannel %p for mote %i\n", serverSocketChannel, 0);


  socketChannel = ptII_acceptConnection(serverSocketChannel);


  if (socketChannel == (void *)0) {

      dbg_clear(DBG_SIM, "SIM: Could not accept socket for mote %i.\n", 0);





      return (void *)0;
    }

  dbg_clear(DBG_SIM, "SIM: Accepted client socket: fd %p for mote %i\n", socketChannel, 0);


  return socketChannel;
}

#line 415
static void addClient2(void *clientSockets[], void *socketChannel)
#line 415
{
  int i;

  for (i = 0; i < 4; i++) {
      if (clientSockets[i] == (void *)0) {
          clientSockets[i] = socketChannel;
          return;
        }
    }



  ptII_socketChannelClose(socketChannel);
}

# 548 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/contrib/ptII/ptinyos/beta/TOSSIM-packet/Nido.nc"
  uint32_t get_sim_rate(void)
#line 548
{
  return (uint32_t )(1000.0 * get_rate_value());
}

# 911 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/external_comm.c"
  void *commandReadThreadFunc(void *arg)
#line 911
{
  int i;



  int numclients;


  void *selectableChannel;
  void *socketChannel;
  char selectorIsClosing = 0;

  dbg_clear(DBG_SIM, "SIM: commandReadThread running.\n");


  while (1) {

      selectorCommandReadThread = ptII_selectorCreate(commandServerSocket, TRUE, FALSE, FALSE, FALSE);

      if (selectorCommandReadThread == (void *)0) {
          fprintf(stderr, "SIM: commandReadThread: selectorCreate returned NULL for mote %i.\n", 0);
          return 0;
        }








      numclients = 0;

      for (i = 0; i < 4; i++) {

          if (commandClients[i] != (void *)0) {





              ptII_selectorRegister(selectorCommandReadThread, commandClients[i], FALSE, FALSE, TRUE, FALSE);
              numclients++;
            }
        }



      fprintf(stderr, "SIM: commandReadThread: Doing select for mote %i\n", 0);




      selectableChannel = ptII_selectSocket(selectorCommandReadThread, &selectorIsClosing, FALSE, FALSE, TRUE, FALSE);
      if (selectableChannel == (void *)0) {
          if (selectorIsClosing) {
              dbg_clear(DBG_SIM, "SIM: commandReadThreadFunc: selector is closing for mote %i.\n", 0);
              return 0;
            }
          else 
#line 969
            {

              dbg_clear(DBG_SIM, "SIM: commandReadThreadFunc: error in select for mote %i\n", 0);
              return 0;
            }
        }
      fprintf(stderr, "SIM: commandReadThread: Returned from select for mote %i\n", 0);



      for (i = 0; i < 4; i++) {







          if (commandClients[i] != (void *)0 && commandClients[i] == selectableChannel) {
              if (readTossimCommand(commandClients[i], i) < 0) {

                  ptII_socketChannelClose(commandClients[i]);

                  commandClients[i] = (void *)0;
                }
            }







          ptII_selectorClose(selectorCommandReadThread);
        }




      if (commandServerSocket == selectableChannel) {

          fprintf(stderr, "SIM: commandReadThread: accepting command connection for mote %i\n", 0);

          socketChannel = acceptConnection(commandServerSocket);


          if (socketChannel == (void *)0) {
              fprintf(stderr, "SIM: commandReadThread: acceptConnection failed for mote %i\n", 0);
              return 0;
            }

          fprintf(stderr, "SIM: commandReadThread: Got command connection %p for mote %i\n", socketChannel, 0);

          addClient2(commandClients, socketChannel);
        }
    }
  return 0;
}

# 47 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/adjacency_list.c"
static link_t *allocate_link(int mote)
#line 47
{
  link_t *alloc_link;
  int i;

#line 50
  if (0 == num_free_links) {
      alloc_link = (link_t *)malloc(sizeof(link_t ) * NUM_NODES_ALLOC);
      for (i = 0; i < NUM_NODES_ALLOC - 1; i++) {
          alloc_link[i].next_link = &alloc_link[i + 1];
        }
      alloc_link[NUM_NODES_ALLOC - 1].next_link = free_list;
      free_list = alloc_link;
      num_free_links += NUM_NODES_ALLOC;
    }
  else {
      alloc_link = free_list;
    }

  free_list = free_list->next_link;
  alloc_link->mote = mote;
  alloc_link->next_link = (void *)0;
  num_free_links--;
  return alloc_link;
}

# 540 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/contrib/ptII/ptinyos/beta/TOSSIM-packet/Nido.nc"
  void set_sim_rate(uint32_t rate)
#line 540
{
  double realRate = (double )rate;

#line 542
  realRate /= 1000.0;
  dbg_clear(DBG_SIM, "SIM: Setting rate to %lf\n", realRate);
  set_rate_value(realRate);
  rate_checkpoint();
}

#line 458
  void nido_start_mote(uint16_t moteID)
#line 458
{
  if (!tos_state.moteOn[moteID] && moteID < tos_state.num_nodes) {
      __nesc_nido_initialise(moteID);
      tos_state.moteOn[moteID] = 1;
      tos_state.current_node = moteID;




      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 467
        TOS_LOCAL_ADDRESS = 0;
#line 467
        __nesc_atomic_end(__nesc_atomic); }

      tos_state.node_state[moteID].time = tos_state.tos_time;
      Nido$StdControl$init();
      Nido$StdControl$start();
      tos_state.node_state[moteID].pot_setting = 73;
      while (TOSH_run_next_task()) {
        }
    }
}

# 91 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Queue/QueuedSendM.nc"
static  result_t QueuedSendM$StdControl$init(void)
#line 91
{
  int i;

#line 93
  for (i = 0; i < QueuedSendM$MESSAGE_QUEUE_SIZE; i++) {
      QueuedSendM$msgqueue[tos_state.current_node][i].length = 0;
      QueuedSendM$msgqueue[tos_state.current_node][i].pMsg = (void *)0;
    }




  QueuedSendM$retransmit[tos_state.current_node] = FALSE;


  QueuedSendM$enqueue_next[tos_state.current_node] = 0;
  QueuedSendM$dequeue_next[tos_state.current_node] = 0;
  QueuedSendM$fQueueIdle[tos_state.current_node] = TRUE;
  return SUCCESS;
}

# 92 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/AMPromiscuous.nc"
static  result_t AMPromiscuous$Control$init(void)
#line 92
{
  result_t ok1;
#line 93
  result_t ok2;

#line 94
  AMPromiscuous$TimerControl$init();
  ok1 = AMPromiscuous$UARTControl$init();
  ok2 = AMPromiscuous$RadioControl$init();
  AMPromiscuous$state[tos_state.current_node] = FALSE;
  AMPromiscuous$lastCount[tos_state.current_node] = 0;
  AMPromiscuous$counter[tos_state.current_node] = 0;
  AMPromiscuous$promiscuous_mode[tos_state.current_node] = FALSE;
  AMPromiscuous$crc_check[tos_state.current_node] = TRUE;
  dbg(DBG_BOOT, "AM Module initialized\n");

  return rcombine(ok1, ok2);
}

# 77 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/TimerM.nc"
static  result_t TimerM$StdControl$init(void)
#line 77
{
  TimerM$mState[tos_state.current_node] = 0;
  TimerM$setIntervalFlag[tos_state.current_node] = 0;
  TimerM$queue_head[tos_state.current_node] = TimerM$queue_tail[tos_state.current_node] = -1;
  TimerM$queue_size[tos_state.current_node] = 0;
  TimerM$mScale[tos_state.current_node] = 3;
  TimerM$mInterval[tos_state.current_node] = TimerM$maxTimerInterval;
  return TimerM$Clock$setRate(TimerM$mInterval[tos_state.current_node], TimerM$mScale[tos_state.current_node]);
}

# 86 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/hpl.c"
static void TOSH_clock_set_rate(char interval, char scale)
{
  long long ticks;
  event_t *event = (void *)0;

#line 90
  interval = interval + 1;

  dbg(DBG_CLOCK, "CLOCK: Setting clock rate to interval %u, scale %u\n", (unsigned int )(interval & 0xff), (unsigned int )(scale & 0xff));
  if (clockEvents[tos_state.current_node] != (void *)0) {
      event_clocktick_invalidate(clockEvents[tos_state.current_node]);
    }

  ticks = clockScales[(int )(scale & 0xff)] * (int )(interval & 0xff);

  if (ticks > 0) {
      ticks = clockScales[(int )(scale & 0xff)] * (int )(interval & 0xff);


      event = (event_t *)malloc(sizeof(event_t ));

      event_clocktick_create(event, tos_state.current_node, tos_state.tos_time, ticks);
      queue_insert_event(& tos_state.queue, event);
#line 106
      ;
    }
  intervals[tos_state.current_node] = interval;
  scales[tos_state.current_node] = scale;
  clockEvents[tos_state.current_node] = event;
  setTime[tos_state.current_node] = tos_state.tos_time;
  return;
}

#line 197
static void event_clocktick_create(event_t *event, int mote, long long eventTime, int interval)
#line 197
{


  clock_tick_data_t *data = malloc(sizeof(clock_tick_data_t ));

#line 201
  dbg(DBG_MEM, "malloc data entry for clock event: 0x%x\n", (int )data);
  data->interval = interval;
  data->mote = mote;
  data->valid = 1;
  data->disabled = 0;

  event->mote = mote;
  event->force = 0;
  event->pause = 1;
  event->data = data;
  event->time = eventTime + interval;
  event->handle = event_clocktick_handle;
  event->cleanup = event_total_cleanup;
}

# 81 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/PowerStateM.nc"
static   void PowerStateM$PowerState$ADCsample(uint8_t port)
#line 81
{
  if (!prof_on) {
#line 82
    return;
    }
  dbg(DBG_POWER, "POWER: Mote %d ADC SAMPLE PORT %d at %lld \n", tos_state.current_node, port, 
  tos_state.tos_time);
}

# 247 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/hpl.c"
static void TOSH_adc_sample_port(uint8_t port)
{
  event_t *event = (void *)0;

#line 250
  dbg(DBG_ADC, "ADC: request for port %i\n", (int )port);
  if ((void *)0 == adcEvents[tos_state.current_node]) {
      event = (event_t *)malloc(sizeof(event_t ));
      dbg(DBG_MEM, "malloc adc tick event: 0x%x.\n", (int )event);
      event_adc_create(event, tos_state.current_node, port, tos_state.tos_time, adcSamplingRates[tos_state.current_node]);
      adcEvents[tos_state.current_node] = event;
    }
  else {
      event = adcEvents[tos_state.current_node];
      event_adc_update(event, tos_state.current_node, port, tos_state.tos_time, adcSamplingRates[tos_state.current_node]);
    }

  queue_insert_event(& tos_state.queue, event);
#line 262
  ;
}

#line 278
static void TOSH_adc_sample_stop(void )
{
  ((adc_tick_data_t *)adcEvents[tos_state.current_node]->data)->valid = 0;
}

# 188 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/PhotoTempM.nc"
static  void PhotoTempM$getSample(void)
#line 188
{

  bool isDone;

#line 191
  isDone = FALSE;
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 192
    {
      if (PhotoTempM$waitingForSample[tos_state.current_node]) {


          isDone = TRUE;
        }
#line 197
      ;
      if (PhotoTempM$photoSensor[tos_state.current_node] == PhotoTempM$stateIdle && PhotoTempM$tempSensor[tos_state.current_node] == PhotoTempM$stateIdle) {

          isDone = TRUE;
        }
#line 201
      ;


      if (PhotoTempM$photoSensor[tos_state.current_node] == PhotoTempM$stateIdle) {
#line 204
        PhotoTempM$getSample$photoIsNext[tos_state.current_node] = FALSE;
        }
#line 205
      if (PhotoTempM$tempSensor[tos_state.current_node] == PhotoTempM$stateIdle) {
#line 205
        PhotoTempM$getSample$photoIsNext[tos_state.current_node] = TRUE;
        }
    }
#line 207
    __nesc_atomic_end(__nesc_atomic); }
#line 206
  ;
  if (isDone) {
      return;
    }
#line 209
  ;
  if (PhotoTempM$getSample$photoIsNext[tos_state.current_node]) {

      switch (PhotoTempM$hardwareStatus[tos_state.current_node]) {
          case PhotoTempM$sensorIdle: 
            case PhotoTempM$sensorTempReady: 
              PhotoTempM$hardwareStatus[tos_state.current_node] = PhotoTempM$sensorPhotoStarting;
          TOSH_SET_PHOTO_CTL_PIN();
          TOSH_MAKE_PHOTO_CTL_OUTPUT();
          TOSH_CLR_TEMP_CTL_PIN();
          TOSH_MAKE_TEMP_CTL_INPUT();
          PhotoTempM$PhotoTempTimer$stop();
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 221
            {
              PhotoTempM$waitingForSample[tos_state.current_node] = TRUE;
            }
#line 223
            __nesc_atomic_end(__nesc_atomic); }
#line 223
          ;
          PhotoTempM$getSample$photoIsNext[tos_state.current_node] = FALSE;
          if (PhotoTempM$PhotoTempTimer$start(TIMER_ONE_SHOT, 10) != SUCCESS) {
              PhotoTempM$hardwareStatus[tos_state.current_node] = PhotoTempM$sensorIdle;
              TOS_post(PhotoTempM$getSample);
            }
#line 228
          ;
          return;
          case PhotoTempM$sensorPhotoReady: 
            { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 231
              {
                PhotoTempM$waitingForSample[tos_state.current_node] = TRUE;
              }
#line 233
              __nesc_atomic_end(__nesc_atomic); }
#line 233
          ;
          if (PhotoTempM$InternalPhotoADC$getData() == SUCCESS) {
              PhotoTempM$getSample$photoIsNext[tos_state.current_node] = FALSE;
            }
          else 
#line 236
            {
              TOS_post(PhotoTempM$getSample);
            }
#line 238
          ;
          return;
          case PhotoTempM$sensorPhotoStarting: 



            case PhotoTempM$sensorTempStarting: 


              return;
        }
#line 248
      ;
    }
#line 249
  ;
  if (!PhotoTempM$getSample$photoIsNext[tos_state.current_node]) {

      switch (PhotoTempM$hardwareStatus[tos_state.current_node]) {
          case PhotoTempM$sensorIdle: 
            case PhotoTempM$sensorPhotoReady: 
              PhotoTempM$hardwareStatus[tos_state.current_node] = PhotoTempM$sensorTempStarting;
          TOSH_CLR_PHOTO_CTL_PIN();
          TOSH_MAKE_PHOTO_CTL_INPUT();
          TOSH_SET_TEMP_CTL_PIN();
          TOSH_MAKE_TEMP_CTL_OUTPUT();
          PhotoTempM$PhotoTempTimer$stop();
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 261
            {
              PhotoTempM$waitingForSample[tos_state.current_node] = TRUE;
            }
#line 263
            __nesc_atomic_end(__nesc_atomic); }
#line 263
          ;
          PhotoTempM$getSample$photoIsNext[tos_state.current_node] = TRUE;
          if (PhotoTempM$PhotoTempTimer$start(TIMER_ONE_SHOT, 10) != SUCCESS) {
              PhotoTempM$hardwareStatus[tos_state.current_node] = PhotoTempM$sensorIdle;
              TOS_post(PhotoTempM$getSample);
            }
#line 268
          ;
          return;
          case PhotoTempM$sensorTempReady: 
            { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 271
              {
                PhotoTempM$waitingForSample[tos_state.current_node] = TRUE;
              }
#line 273
              __nesc_atomic_end(__nesc_atomic); }
#line 273
          ;
          if (PhotoTempM$InternalTempADC$getData() == SUCCESS) {
              PhotoTempM$getSample$photoIsNext[tos_state.current_node] = TRUE;
            }
          else 
#line 276
            {
              TOS_post(PhotoTempM$getSample);
            }
#line 278
          ;
          return;
          case PhotoTempM$sensorTempStarting: 



            case PhotoTempM$sensorPhotoStarting: 


              return;
        }
#line 288
      ;
    }
#line 289
  ;
  PhotoTempM$getSample$photoIsNext[tos_state.current_node] = !PhotoTempM$getSample$photoIsNext[tos_state.current_node];
  return;
}

# 59 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/hardware.c"
static short set_io_bit(char port, char bit)
#line 59
{
  char *register_ptr;

#line 61
  switch (port) {
      case 0x34: 
        register_ptr = & TOSH_pc_hardware.register_A;
      break;

      case 0x37: 
        register_ptr = & TOSH_pc_hardware.register_B;
      break;

      case 0x40: 
        register_ptr = & TOSH_pc_hardware.register_C;
      break;

      case 0x43: 
        register_ptr = & TOSH_pc_hardware.register_D;
      break;

      case 0x70: 
        register_ptr = & TOSH_pc_hardware.register_E;
      break;

      case 0x00: 
        register_ptr = & TOSH_pc_hardware.status_register;
      break;

      default: 
        register_ptr = & TOSH_pc_hardware.register_default;
      break;
    }

  dbg(DBG_HARD, "Set bit %i of port %u\n", (int )bit, port);

  *register_ptr = *register_ptr |= 0x1 << bit;

  return *register_ptr;
}

# 168 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/TimerM.nc"
static  result_t TimerM$Timer$stop(uint8_t id)
#line 168
{

  if (id >= NUM_TIMERS) {
#line 170
    return FAIL;
    }
#line 171
  if (TimerM$mState[tos_state.current_node] & (0x1L << id)) {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 172
        TimerM$mState[tos_state.current_node] &= ~(0x1L << id);
#line 172
        __nesc_atomic_end(__nesc_atomic); }
      if (!TimerM$mState[tos_state.current_node]) {
          TimerM$setIntervalFlag[tos_state.current_node] = 1;
        }
      return SUCCESS;
    }
  return FAIL;
}

#line 98
static  result_t TimerM$Timer$start(uint8_t id, char type, 
uint32_t interval)
#line 99
{
  uint8_t diff;

#line 101
  if (id >= NUM_TIMERS) {
#line 101
    return FAIL;
    }
#line 102
  if (type > TIMER_ONE_SHOT) {
#line 102
    return FAIL;
    }





  if (type == TIMER_REPEAT && interval <= 2) {
#line 109
    return FAIL;
    }
  TimerM$mTimerList[tos_state.current_node][id].ticks = interval;
  TimerM$mTimerList[tos_state.current_node][id].type = type;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 114
    {
      diff = TimerM$Clock$readCounter();
      interval += diff;
      TimerM$mTimerList[tos_state.current_node][id].ticksLeft = interval;
      TimerM$mState[tos_state.current_node] |= 0x1L << id;
      if (interval < TimerM$mInterval[tos_state.current_node]) {
          TimerM$mInterval[tos_state.current_node] = interval;
          TimerM$Clock$setInterval(TimerM$mInterval[tos_state.current_node]);
          TimerM$setIntervalFlag[tos_state.current_node] = 0;
          TimerM$PowerManagement$adjustPower();
        }
    }
#line 125
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 124 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/hpl.c"
static uint8_t TOSH_get_clock0_counter(void)
#line 124
{

  if (scales[tos_state.current_node] == 0 || 
  intervals[tos_state.current_node] == 0) {
#line 127
      return 0;
    }
  else 
#line 128
    {
      long long timeDiff = tos_state.tos_time - setTime[tos_state.current_node];

#line 130
      timeDiff /= (long long )clockScales[scales[tos_state.current_node]];
      timeDiff %= 256;
      return (uint8_t )timeDiff;
    }
}

#line 54
static void TOSH_clock_set_interval(uint8_t interval)
#line 54
{
  long long elapsed_time;
  long long ticks;
  int elapsedTicks;
  int realInterval;

  event_t *event = (void *)0;

#line 61
  interval = interval + 1;

  dbg(DBG_CLOCK, "CLOCK: Setting clock interval to %u @ %s\n", (unsigned int )(interval & 0xff), currentTime());
  if (clockEvents[tos_state.current_node] != (void *)0) {
      event_clocktick_invalidate(clockEvents[tos_state.current_node]);
    }


  elapsed_time = tos_state.tos_time - setTime[tos_state.current_node];
  elapsedTicks = elapsed_time / (long long )clockScales[scales[tos_state.current_node]];

  realInterval = interval - elapsedTicks;
  if (realInterval <= 0) {
      realInterval += 256;
    }

  ticks = clockScales[(int )(scales[tos_state.current_node] & 0xff)] * realInterval;
  event = (event_t *)malloc(sizeof(event_t ));

  event_clocktick_create(event, tos_state.current_node, tos_state.tos_time, ticks);
  queue_insert_event(& tos_state.queue, event);
#line 81
  ;
  intervals[tos_state.current_node] = interval;
  clockEvents[tos_state.current_node] = event;
}

# 150 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Route/MultiHopEngineM.nc"
static  void *MultiHopEngineM$Send$getBuffer(uint8_t id, TOS_MsgPtr pMsg, uint16_t *length)
#line 150
{

  TOS_MHopMsg *pMHMsg = (TOS_MHopMsg *)pMsg->data;

  *length = 29 - (unsigned long )& ((TOS_MHopMsg *)0)->data;

  return &pMHMsg->data[0];
}

# 420 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Route/MultiHopLEPSM.nc"
static  void MultiHopLEPSM$TimerTask(void)
#line 420
{

  dbg(DBG_ROUTE, "MultiHopLEPSM timer task.\n");
  MultiHopLEPSM$updateTable();


  {
    int i;

#line 428
    dbg(DBG_ROUTE, "\taddr\tprnt\tmisd\trcvd\tlstS\thop\trEst\tsEst\n");
    for (i = 0; i < MultiHopLEPSM$ROUTE_TABLE_SIZE; i++) {
        if (MultiHopLEPSM$NeighborTbl[tos_state.current_node][i].flags) {
            dbg(DBG_ROUTE, "\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n", 
            MultiHopLEPSM$NeighborTbl[tos_state.current_node][i].id, 
            MultiHopLEPSM$NeighborTbl[tos_state.current_node][i].parent, 
            MultiHopLEPSM$NeighborTbl[tos_state.current_node][i].missed, 
            MultiHopLEPSM$NeighborTbl[tos_state.current_node][i].received, 
            MultiHopLEPSM$NeighborTbl[tos_state.current_node][i].lastSeqno, 
            MultiHopLEPSM$NeighborTbl[tos_state.current_node][i].hop, 
            MultiHopLEPSM$NeighborTbl[tos_state.current_node][i].receiveEst, 
            MultiHopLEPSM$NeighborTbl[tos_state.current_node][i].sendEst);
          }
      }
    if (MultiHopLEPSM$gpCurrentParent[tos_state.current_node]) {
        dbg(DBG_ROUTE, "MultiHopLEPSM: Parent = %d\n", MultiHopLEPSM$gpCurrentParent[tos_state.current_node]->id);
      }
  }

  MultiHopLEPSM$chooseParent();

  TOS_post(MultiHopLEPSM$SendRouteTask);
}

# 109 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/AMPromiscuous.nc"
static  result_t AMPromiscuous$Control$start(void)
#line 109
{
  result_t ok0;
#line 110
  result_t ok1;
#line 110
  result_t ok2;
#line 110
  result_t ok3;

  ok0 = AMPromiscuous$TimerControl$start();
  ok1 = AMPromiscuous$UARTControl$start();
  ok2 = AMPromiscuous$RadioControl$start();
  ok3 = AMPromiscuous$ActivityTimer$start(TIMER_REPEAT, 1000);
  AMPromiscuous$PowerManagement$adjustPower();



  AMPromiscuous$state[tos_state.current_node] = FALSE;

  return rcombine4(ok0, ok1, ok2, ok3);
}

# 136 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/sched.c"
static bool TOSH_run_next_task(void)
{
  __nesc_atomic_t fInterruptFlags;
  uint8_t old_full;
  void (*func)(void );

  fInterruptFlags = __nesc_atomic_start();
  old_full = TOSH_sched_full;
  func = TOSH_queue[old_full].tp;
  if (func == (void *)0) 
    {
      __nesc_atomic_sleep();
      return 0;
    }

  TOSH_queue[old_full].tp = (void *)0;
  TOSH_sched_full = (old_full + 1) & TOSH_TASK_BITMASK;
  __nesc_atomic_end(fInterruptFlags);
  func();

  return 1;
}

# 477 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/contrib/ptII/ptinyos/beta/TOSSIM-packet/Nido.nc"
  void nido_stop_mote(uint16_t moteID)
#line 477
{

  tos_state.cancelBoot[moteID] = 1;

  if (tos_state.moteOn[moteID] && moteID < tos_state.num_nodes) {
      tos_state.moteOn[moteID] = 0;
      tos_state.current_node = moteID;




      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 488
        TOS_LOCAL_ADDRESS = 0;
#line 488
        __nesc_atomic_end(__nesc_atomic); }

      tos_state.node_state[moteID].time = tos_state.tos_time;
      Nido$StdControl$stop();
    }
}

# 126 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/AMPromiscuous.nc"
static  result_t AMPromiscuous$Control$stop(void)
#line 126
{
  result_t ok1;
#line 127
  result_t ok2;
#line 127
  result_t ok3;

#line 128
  if (AMPromiscuous$state[tos_state.current_node]) {
#line 128
    return FALSE;
    }
#line 129
  ok1 = AMPromiscuous$UARTControl$stop();
  ok2 = AMPromiscuous$RadioControl$stop();
  ok3 = AMPromiscuous$ActivityTimer$stop();

  AMPromiscuous$PowerManagement$adjustPower();
  return rcombine3(ok1, ok2, ok3);
}

# 496 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/contrib/ptII/ptinyos/beta/TOSSIM-packet/Nido.nc"
  TOS_MsgPtr NIDO_received_radio(TOS_MsgPtr packet)
#line 496
{
  packet->crc = 1;
  return Nido$RadioReceiveMsg$receive(packet);
}






  TOS_MsgPtr NIDO_received_uart(TOS_MsgPtr packet)
#line 506
{
  packet->crc = 1;
  return Nido$UARTReceiveMsg$receive(packet);
}

# 40 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/tos.c"
  void handle_signal(int sig)
#line 40
{
  if ((sig == 2 || sig == 19) && signaled == 0) {
      char ftime[128];

#line 43
      printTime(ftime, 128);
      printf("Exiting on SIGINT at %s.\n", ftime);


      signaled = 1;
      exit(0);
    }
}

# 102 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/sched.c"
 bool TOS_post(void (*tp)(void))
#line 102
{
  __nesc_atomic_t fInterruptFlags;
  uint8_t tmp;



  fInterruptFlags = __nesc_atomic_start();

  tmp = TOSH_sched_free;

  if (TOSH_queue[tmp].tp == (void *)0) {
      TOSH_sched_free = (tmp + 1) & TOSH_TASK_BITMASK;
      TOSH_queue[tmp].tp = tp;
      __nesc_atomic_end(fInterruptFlags);

      return TRUE;
    }
  else {
      __nesc_atomic_end(fInterruptFlags);

      return FALSE;
    }
}

# 108 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/contrib/ptII/ptinyos/beta/TOSSIM-packet/Nido.nc"
  void event_boot_handle(event_t *fevent, 
struct TOS_state *fstate)
#line 109
{
  char timeVal[128];

#line 111
  printTime(timeVal, 128);


  if (!tos_state.cancelBoot[tos_state.current_node]) {
      dbg(DBG_BOOT, "BOOT: Mote booting at time %s.\n", timeVal);
      nido_start_mote((uint16_t )tos_state.current_node);
    }
  else 
#line 117
    {
      dbg(DBG_BOOT, "BOOT: Boot cancelled at time %s since mote turned off.\n", 
      timeVal);
    }
}










  int main(int argc, char **argv)
#line 132
{
  long long i;





  int num_nodes_start = -1;
  int random_seed = 0;
  int random_seed_set = 0;



  char *adc_model_name = (void *)0;
  char *model_name = (void *)0;
  char *eeprom_name = (void *)0;

  int start_time = 0;
  int pause_time = 0;
  int start_interval = 10;
  char *rate_constant = "1000.0";
  char *lossy_file = (void *)0;
  int radio_kb_rate = 40;

  char *packet_conf = (void *)0;
  int currentArg;

  if (argc == 2 && (strcmp(argv[1], "-h") == 0 || 
  strcmp(argv[1], "--help") == 0)) {
      Nido$help(argv[0]);
    }

  if (argc < 2) {
#line 164
      Nido$usage(argv[0]);
    }
  dbg_init();

  for (currentArg = 1; currentArg < argc - 1; currentArg++) {
      char *arg = argv[currentArg];

#line 170
      if (strcmp(arg, "-h") == 0 || 
      strcmp(arg, "--help") == 0) {
          Nido$help(argv[0]);
        }
      else {
#line 174
        if (strcmp(argv[currentArg], "--help") == 0) {
            Nido$help(argv[0]);
          }
        else {
#line 177
          if (strcmp(arg, "-gui") == 0) {
              GUI_enabled = 1;
            }
          else {
#line 180
            if (strcmp(arg, "-nodbgout") == 0) {
                dbg_suppress_stdout = 1;
              }
            else {
#line 183
              if (strncmp(arg, "-a=", 3) == 0) {
                  arg += 3;
                  adc_model_name = arg;
                }
              else {
#line 187
                if (strncmp(arg, "-b=", 3) == 0) {
                    arg += 3;
                    start_interval = atoi(arg);
                    if (start_interval < 0) {
                        fprintf(stderr, "SIM: boot time value must be a positive integer, not %s\n", arg);
                        exit(-1);
                      }
                  }
                else {
#line 195
                  if (strncmp(arg, "-ef=", 3) == 0) {
                      arg += 4;
                      eeprom_name = arg;
                    }
                  else {
#line 199
                    if (strncmp(arg, "-l=", 3) == 0) {
                        arg += 3;
                        rate_constant = arg;
                      }
                    else {
#line 203
                      if (strncmp(arg, "-r=", 3) == 0) {
                          arg += 3;
                          model_name = arg;
                        }
                      else {
#line 207
                        if (strncmp(arg, "-rf=", 4) == 0) {
                            arg += 4;
                            model_name = "lossy";
                            lossy_file = arg;
                          }
                        else {
#line 212
                          if (strncmp(arg, "-pf=", 4) == 0) {
                              arg += 4;
                              model_name = "lossy";
                              packet_conf = arg;
                            }
                          else {
#line 217
                            if (strncmp(arg, "-s=", 3) == 0) {
                                arg += 3;
                                num_nodes_start = atoi(arg);
                              }
                            else {
#line 221
                              if (strncmp(arg, "-t=", 3) == 0) {
                                  arg += 3;
                                  Nido$max_run_time[tos_state.current_node] = (unsigned long long )atoi(arg);
                                  Nido$max_run_time[tos_state.current_node] *= 4000000;
                                }
                              else {
#line 226
                                if (strncmp(arg, "-seed=", 6) == 0) {
                                    arg += 6;
                                    random_seed = atoi(arg);
                                    random_seed_set = 1;
                                  }
                                else {
#line 231
                                  if (strcmp(arg, "-p") == 0) {
                                      Nido$power_profiling[tos_state.current_node] = 1;
                                    }
                                  else {
#line 234
                                    if (strcmp(arg, "-cpuprof") == 0) {
                                        Nido$cpu_profiling[tos_state.current_node] = 1;
                                      }
                                    else {
                                        Nido$usage(argv[0]);
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
    }
#line 242
  set_rate_value(atof(rate_constant));
  if (get_rate_value() <= 0.0) {
      fprintf(stderr, "SIM: Invalid rate constant: %s.\n", rate_constant);
      exit(-1);
    }

  Nido$num_nodes_total[tos_state.current_node] = atoi(argv[argc - 1]);
  if (Nido$num_nodes_total[tos_state.current_node] <= 0) {
#line 249
      Nido$usage(argv[0]);
    }
  if (num_nodes_start < 0 || num_nodes_start > Nido$num_nodes_total[tos_state.current_node]) {
      num_nodes_start = Nido$num_nodes_total[tos_state.current_node];
    }



  Nido$PowerState$init(Nido$power_profiling[tos_state.current_node], Nido$cpu_profiling[tos_state.current_node]);


  if (Nido$num_nodes_total[tos_state.current_node] > TOSNODES) {
      fprintf(stderr, "Nido: I am compiled for maximum of %d nodes and you have specified %d nodes.\n", TOSNODES, Nido$num_nodes_total[tos_state.current_node]);
      fprintf(stderr, "Nido: Exiting...\n");
      exit(-1);
    }

  init_signals();
  tos_state.num_nodes = Nido$num_nodes_total[tos_state.current_node];



  if (model_name == (void *)0 || strcmp(model_name, "simple") == 0) {
      tos_state.rfm = create_simple_model();
      tos_state.radioModel = TOSSIM_RADIO_MODEL_SIMPLE;
    }
  else {
#line 275
    if (strcmp(model_name, "lossy") == 0) {
        tos_state.rfm = create_lossy_model(lossy_file);
        tos_state.radioModel = TOSSIM_RADIO_MODEL_LOSSY;
      }
    else {
        fprintf(stderr, "SIM: Don't recognize RFM model type %s.\n", model_name);
        exit(-1);
      }
    }


  if (adc_model_name == (void *)0 || strcmp(adc_model_name, "generic") == 0) {
      tos_state.adc = create_generic_adc_model();
    }
  else {
#line 289
    if (strcmp(adc_model_name, "random") == 0) {
        tos_state.adc = create_random_adc_model();
      }
    else {
        fprintf(stderr, "SIM: Bad ADC model name: %s\n", adc_model_name);
        exit(-1);
      }
    }
#line 296
  if (eeprom_name != (void *)0) {
      namedEEPROM(eeprom_name, Nido$num_nodes_total[tos_state.current_node], DEFAULT_EEPROM_SIZE);
    }
  else {
      anonymousEEPROM(Nido$num_nodes_total[tos_state.current_node], DEFAULT_EEPROM_SIZE);
    }
  dbg_clear(DBG_SIM | DBG_BOOT, "SIM: EEPROM system initialized.\n");

  tos_state.space = create_simple_spatial_model();

  tos_state.radio_kb_rate = radio_kb_rate;
  tos_state_model_init();


  packet_sim_init(packet_conf);

  init_hardware();

  queue_init(& tos_state.queue, pause_time);
  dbg_clear(DBG_SIM, "SIM: event queue initialized.\n");

  if (!random_seed_set) {
      struct timeval tv;

#line 319
      gettimeofday(&tv, (void *)0);
      random_seed = tv.tv_usec;
    }


  dbg_clear(DBG_ALL, "SIM: Random seed is %i\n", random_seed);
  srand(random_seed);

  initializeSockets();

  if (GUI_enabled) {
      waitForGuiConnection();
    }

  for (i = 0; i < num_nodes_start; i++) {

      int rval = rand();

#line 336
      if (start_interval > 0) {
          rval %= 4000000 * start_interval;
          start_time = rval + i;
        }
      else {
#line 339
        if (start_interval == 0) {
            start_time = i;
          }
        }
      tos_state.node_state[i].time = start_time;



      dbg_clear(DBG_SIM | DBG_USR3, "SIM: Time for mote %i initialized to %lli.\n", 

      0, tos_state.node_state[i].time);
    }

  for (i = 0; i < num_nodes_start; i++) {
      char timeVal[128];
      event_t *fevent = (event_t *)malloc(sizeof(event_t ));

#line 355
      fevent->mote = i;
      fevent->time = tos_state.node_state[i].time;
      fevent->handle = event_boot_handle;
      fevent->cleanup = event_default_cleanup;
      fevent->pause = 0;
      fevent->force = 1;
      queue_insert_event(& tos_state.queue, fevent);
#line 361
      ;
      printOtherTime(timeVal, 128, tos_state.node_state[i].time);
      dbg(DBG_BOOT, "BOOT: Scheduling for boot at %s.\n", timeVal);
    }

  rate_checkpoint();

  return 0;
}

#line 79
static void Nido$help(char *progname)
#line 79
{
  fprintf(stderr, "Usage: %s [options] num_nodes\n", progname);
  fprintf(stderr, "  [options] are:\n");
  fprintf(stderr, "  -h, --help        Display this message.\n");
  fprintf(stderr, "  -gui              pauses simulation waiting for GUI to connect\n");
  fprintf(stderr, "  -nodbgout	 only send dbg messages to GUI, not to stdout\n");
  fprintf(stderr, "  -a=<model>        specifies ADC model (generic is default)\n");
  fprintf(stderr, "                    options: generic random\n");
  fprintf(stderr, "  -b=<sec>          motes boot over first <sec> seconds (default 10)\n");
  fprintf(stderr, "  -ef=<file>        use <file> for eeprom; otherwise anonymous file is used\n");
  fprintf(stderr, "  -l=<scale>        run sim at <scale> times real time (fp constant)\n");
  fprintf(stderr, "  -r=<model>        specifies a radio model (simple is default)\n");
  fprintf(stderr, "                    options: simple lossy\n");
  fprintf(stderr, "  -pf=<file>        specifies file for packet mode\n");
  fprintf(stderr, "  -rf=<file>        specifies file for lossy mode (lossy.nss is default)\n");
  fprintf(stderr, "                    implicitly selects lossy model\n");
  fprintf(stderr, "  -s=<num>          only boot <num> of nodes\n");
  fprintf(stderr, "  -t=<sec>          run simulation for <sec> virtual seconds\n");
  fprintf(stderr, "  -seed=<seed>      use random seed <seed>\n");
  fprintf(stderr, "  -p                do power profiling\n");
  fprintf(stderr, "  -cpuprof          do cpu profiling (only if compiled with cilly!)\n");
  fprintf(stderr, "  num_nodes         number of nodes to simulate\n");

  fprintf(stderr, "\n");
  dbg_help();
  fprintf(stderr, "\n");
  exit(-1);
}

# 78 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/adjacency_list.c"
static int adjacency_list_init(void)
#line 78
{
  int i;

#line 80
  free_list = (link_t *)malloc(sizeof(link_t ) * NUM_NODES_ALLOC);
  for (i = 0; i < NUM_NODES_ALLOC - 1; i++) {
      free_list[i].next_link = &free_list[i + 1];
    }
  free_list[NUM_NODES_ALLOC - 1].next_link = (void *)0;
  num_free_links = NUM_NODES_ALLOC;
  return SUCCESS;
}

# 212 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/rfm_model.c"
static void static_one_cell_init(void)
#line 212
{
  int i;
#line 213
  int j;
  link_t *new_link;







  radioConnectivityLock = ptII_createMonitorObject();


  radio_connectivity[0] = (void *)0;

  for (i = 0; i < tos_state.num_nodes; i++) {
      for (j = 0; j < tos_state.num_nodes; j++) {
          if (i != j) {
              new_link = allocate_link(j);
              new_link->data = 0.0;

              new_link->next_link = radio_connectivity[i];
              radio_connectivity[i] = new_link;
            }
        }
    }
}

# 58 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/eeprom.c"
static int createEEPROM(char *file, int motes, int eempromBytes)
#line 58
{
  int rval;
  char val = 0;

  local_filename = file;
  numMotes = motes;
  moteSize = eempromBytes;

  if (initialized) {
      dbg(DBG_ERROR, "ERROR: Trying to initialize EEPROM twice.\n");
      return -1;
    }
  local_fd = open(file, 02 | 0100, (((0400 | 0200) | 0100) | (0400 >> 3)) | ((0400 >> 3) >> 3));

  if (local_fd < 0) {
      dbg(DBG_ERROR, "ERROR: Unable to create EEPROM backing store file.\n");
      return -1;
    }

  rval = (int )lseek(local_fd, moteSize * numMotes, 0);
  if (rval < 0) {
      dbg(DBG_ERROR, "ERROR: Unable to establish EEPROM of correct size.\n");
    }

  rval = write(local_fd, &val, 1);
  if (rval < 0) {
      dbg(DBG_ERROR, "ERROR: Unable to establish EEPROM of correct size.\n");
    }
  initialized = 1;

  return local_fd;
}

# 429 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/contrib/ptII/ptinyos/beta/TOSSIM-packet/packet_sim.c"
static int read_int(FILE *file)
#line 429
{
  char buf[128];
  int findex = 0;
  int ch;

#line 433
  while (1) {
      ch = _IO_getc(file);
      if (ch == -1) {
#line 435
          return -1;
        }
      else {
#line 436
        if (ch >= '0' && ch <= '9') {
            buf[findex] = (char )ch;
            findex++;
          }
        else {
#line 440
          if ((ch == '\n' || ch == ' ') || ch == '\t') {
              if (findex == 0) {
                  continue;
                }
              else {
                  buf[findex] = 0;
                  break;
                }
            }
          else {
              return -1;
            }
          }
        }
#line 452
      if (findex >= 127) {
          return -1;
        }
    }
  return atoi(buf);
}

static double read_double(FILE *file)
#line 459
{
  char buf[128];
  int findex = 0;
  int ch;

#line 463
  while (1) {
      ch = _IO_getc(file);
      if (ch == -1) {
#line 465
          return -1;
        }
      else {
#line 467
        if (((((
#line 466
        ch >= '0' && ch <= '9') || ch == '.') || ch == '-') || ch == 'E')
         || ch == 'e') {
            buf[findex] = (char )ch;
            findex++;
          }
        else {
#line 471
          if ((ch == '\n' || ch == ' ') || ch == '\t') {
              if (findex == 0) {
                  continue;
                }
              else {
                  buf[findex] = 0;
                  break;
                }
            }
          else {
              return -1;
            }
          }
        }
#line 483
      if (findex >= 127) {
          return -1;
        }
    }
  return atof(buf);
}

# 371 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/contrib/ptII/ptinyos/beta/TOSSIM-packet/Nido.nc"
  void ptII_fire(long long ptolemyTime)
#line 371
{

  bool again = FALSE;



  bool isTime = FALSE;

#line 378
  if (ptolemyTime == 0) {
      isTime = TRUE;
    }
  else 
#line 380
    {
      if (!queue_is_empty(& tos_state.queue)) {
          if (ptolemyTime == queue_peek_event_time(& tos_state.queue)) {
              isTime = TRUE;
            }
        }
    }
  if (!isTime) {
      return;
    }

  do {
      again = FALSE;

      if (Nido$max_run_time[tos_state.current_node] > 0 && tos_state.tos_time >= Nido$max_run_time[tos_state.current_node]) {


          ptII_cleanup();
          return;
        }


      ptII_MonitorEnter(tos_state.pause_lock);



      if (tos_state.paused == TRUE) {

          ptII_MonitorNotify(tos_state.pause_lock);

          ptII_MonitorWait(tos_state.pause_lock);
        }


      ptII_MonitorExit(tos_state.pause_lock);


      if (!queue_is_empty(& tos_state.queue)) {
          tos_state.tos_time = queue_peek_event_time(& tos_state.queue);
          queue_handle_next_event(& tos_state.queue);



          rate_based_wait();
        }


      while (TOSH_run_next_task()) {
        }
      if (Nido$cpu_profiling[tos_state.current_node]) {



          if (tos_state.tos_time - Nido$last_power_time[tos_state.current_node] > (long long )4000000 / 5) 
            {
              Nido$PowerState$CPUCycleCheckpoint();
              Nido$last_power_time[tos_state.current_node] = tos_state.tos_time;
            }
        }
      if (!queue_is_empty(& tos_state.queue)) {
          if (tos_state.tos_time == queue_peek_event_time(& tos_state.queue)) {
              again = TRUE;
            }
        }
    }
  while (again);
}

# 112 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/event_queue.c"
static int queue_is_empty(event_queue_t *queue)
#line 112
{
  int rval;


  ptII_MonitorEnter(queue->lock);


  rval = heap_is_empty(& queue->heap);


  ptII_MonitorExit(queue->lock);

  return rval;
}

static long long queue_peek_event_time(event_queue_t *queue)
#line 127
{
  long long rval;


  ptII_MonitorEnter(queue->lock);


  if (heap_is_empty(& queue->heap)) {
      rval = -1;
    }
  else {
      rval = heap_get_min_key(& queue->heap);
    }



  ptII_MonitorExit(queue->lock);

  return rval;
}

# 449 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/contrib/ptII/ptinyos/beta/TOSSIM-packet/Nido.nc"
  void ptII_cleanup(void)
#line 449
{
  if (Nido$power_profiling[tos_state.current_node] || Nido$cpu_profiling[tos_state.current_node]) {
      Nido$PowerState$stop();
    }
  printf("Simulation of %i motes completed.\n", Nido$num_nodes_total[tos_state.current_node]);
}

# 322 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/PowerStateM.nc"
static   double PowerStateM$PowerState$get_mote_cycles(int mote)
#line 322
{
  int bb;
  double total;

#line 325
  if (!cpu_prof_on) {
      fprintf(stderr, "get_mote_cycles() called when cpu prof is off!  Shouldn't happen!\n");
      exit(-1);
    }

  total = 0;
  for (bb = 1; bb < PowerStateM$num_bbs(); bb++) {
      total += PowerStateM$bb_exec_count(mote, bb) * cycles[bb];
    }
  return total;
}

# 104 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/heap_array.c"
static void *heap_pop_min_data(heap_t *heap, long long *key)
#line 104
{
  int last_index = heap->size - 1;
  void *data = ((node_t *)heap->data)[0].data;

#line 107
  if (key != (void *)0) {
      *key = ((node_t *)heap->data)[0].key;
    }
  ((node_t *)heap->data)[0].data = ((node_t *)heap->data)[last_index].data;
  ((node_t *)heap->data)[0].key = ((node_t *)heap->data)[last_index].key;

  heap->size--;

  down_heap(heap, 0);

  return data;
}

#line 161
static void down_heap(heap_t *heap, int findex)
#line 161
{
  int right_index = (findex + 1) * 2;
  int left_index = findex * 2 + 1;

  if (right_index < heap->size) {
      long long left_key = ((node_t *)heap->data)[left_index].key;
      long long right_key = ((node_t *)heap->data)[right_index].key;
      int min_key_index = left_key < right_key ? left_index : right_index;

      if (((node_t *)heap->data)[min_key_index].key < ((node_t *)heap->data)[findex].key) {
          swap(&((node_t *)heap->data)[findex], &((node_t *)heap->data)[min_key_index]);
          down_heap(heap, min_key_index);
        }
    }
  else {
#line 175
    if (left_index >= heap->size) {
        return;
      }
    else {
        long long left_key = ((node_t *)heap->data)[left_index].key;

#line 180
        if (left_key < ((node_t *)heap->data)[findex].key) {
            swap(&((node_t *)heap->data)[findex], &((node_t *)heap->data)[left_index]);
            return;
          }
      }
    }
}

# 526 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/contrib/ptII/ptinyos/beta/TOSSIM-packet/packet_sim.c"
  void ptII_insert_packet_event(long long ptolemyTime, TOS_MsgPtr msg)
#line 526
{
  int transmitTime = preambleLength + msg->length + headerLength;




  int mote = tos_state.current_node;



  event_t *recvEvent = (event_t *)malloc(sizeof(event_t ));
  IncomingMsg *msgEvent = (IncomingMsg *)malloc(sizeof(IncomingMsg ));

#line 538
  msgEvent->fromID = tos_state.current_node;
  msgEvent->next = (void *)0;
  nmemcpy(& msgEvent->msg, msg, sizeof(TOS_Msg ));

  dbg(DBG_PACKET, "SIM_PACKET: Considering reception at %i\n", (int )mote);


  if (
#line 544
  incoming[mote] == (void *)0 && 
  txState[mote] != RADIO_TX_TRANS && 
  tos_state.moteOn[mote]) {
#line 561
      rxState[mote] = RADIO_RX_RECV;
      current_ptr[mote]->crc = 1;

      dbg(DBG_PACKET, "SIM_PACKET: Enqueueing receive for %i.\n", mote);

      event_receive_packet_create(recvEvent, mote, ptolemyTime + transmitTime, msgEvent, TRUE);
      addIncomingEntry(mote, msgEvent);
      queue_insert_event(& tos_state.queue, recvEvent);
#line 568
      ;
    }
  else {
      IncomingMsg *alreadyIncoming = incoming[mote];

#line 572
      dbg(DBG_PACKET, "SIM_PACKET: %i already receiving or transmitting: enqueue event for non-receive (noise), corrupt all already incoming\n", mote);
      while (alreadyIncoming != (void *)0) {
          corruptPacket(alreadyIncoming, tos_state.current_node, mote);




          if (packet_transmitting[alreadyIncoming->fromID] != (void *)0 && 
          packet_transmitting[alreadyIncoming->fromID]->addr == mote) {
              packet_transmitting[alreadyIncoming->fromID]->ack = 0;
            }
          alreadyIncoming = alreadyIncoming->next;
        }

      event_receive_packet_create(recvEvent, mote, ptolemyTime + transmitTime, msgEvent, FALSE);
      addIncomingEntry(mote, msgEvent);
      queue_insert_event(& tos_state.queue, recvEvent);
#line 588
      ;
    }
}

/* Nido variable resolver function */

static int __nesc_nido_resolve(int __nesc_mote,
                               char* varname,
                               uintptr_t* addr, size_t* size)
{
  /* Module SounderM */

  /* Module QueuedSendM */
  if (!strcmp(varname, "QueuedSendM$msgqueue"))
  {
    *addr = (uintptr_t)&QueuedSendM$msgqueue[__nesc_mote];
    *size = sizeof(QueuedSendM$msgqueue[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "QueuedSendM$enqueue_next"))
  {
    *addr = (uintptr_t)&QueuedSendM$enqueue_next[__nesc_mote];
    *size = sizeof(QueuedSendM$enqueue_next[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "QueuedSendM$dequeue_next"))
  {
    *addr = (uintptr_t)&QueuedSendM$dequeue_next[__nesc_mote];
    *size = sizeof(QueuedSendM$dequeue_next[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "QueuedSendM$retransmit"))
  {
    *addr = (uintptr_t)&QueuedSendM$retransmit[__nesc_mote];
    *size = sizeof(QueuedSendM$retransmit[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "QueuedSendM$fQueueIdle"))
  {
    *addr = (uintptr_t)&QueuedSendM$fQueueIdle[__nesc_mote];
    *size = sizeof(QueuedSendM$fQueueIdle[__nesc_mote]);
    return 0;
  }

  /* Module AMPromiscuous */
  if (!strcmp(varname, "AMPromiscuous$state"))
  {
    *addr = (uintptr_t)&AMPromiscuous$state[__nesc_mote];
    *size = sizeof(AMPromiscuous$state[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "AMPromiscuous$buffer"))
  {
    *addr = (uintptr_t)&AMPromiscuous$buffer[__nesc_mote];
    *size = sizeof(AMPromiscuous$buffer[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "AMPromiscuous$lastCount"))
  {
    *addr = (uintptr_t)&AMPromiscuous$lastCount[__nesc_mote];
    *size = sizeof(AMPromiscuous$lastCount[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "AMPromiscuous$counter"))
  {
    *addr = (uintptr_t)&AMPromiscuous$counter[__nesc_mote];
    *size = sizeof(AMPromiscuous$counter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "AMPromiscuous$promiscuous_mode"))
  {
    *addr = (uintptr_t)&AMPromiscuous$promiscuous_mode[__nesc_mote];
    *size = sizeof(AMPromiscuous$promiscuous_mode[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "AMPromiscuous$crc_check"))
  {
    *addr = (uintptr_t)&AMPromiscuous$crc_check[__nesc_mote];
    *size = sizeof(AMPromiscuous$crc_check[__nesc_mote]);
    return 0;
  }

  /* Module TossimPacketM */
  if (!strcmp(varname, "TossimPacketM$buffer"))
  {
    *addr = (uintptr_t)&TossimPacketM$buffer[__nesc_mote];
    *size = sizeof(TossimPacketM$buffer[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketM$bufferPtr"))
  {
    *addr = (uintptr_t)&TossimPacketM$bufferPtr[__nesc_mote];
    *size = sizeof(TossimPacketM$bufferPtr[__nesc_mote]);
    return 0;
  }

  /* Module Nido */
  if (!strcmp(varname, "Nido$last_power_time"))
  {
    *addr = (uintptr_t)&Nido$last_power_time[__nesc_mote];
    *size = sizeof(Nido$last_power_time[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "Nido$power_profiling"))
  {
    *addr = (uintptr_t)&Nido$power_profiling[__nesc_mote];
    *size = sizeof(Nido$power_profiling[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "Nido$cpu_profiling"))
  {
    *addr = (uintptr_t)&Nido$cpu_profiling[__nesc_mote];
    *size = sizeof(Nido$cpu_profiling[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "Nido$num_nodes_total"))
  {
    *addr = (uintptr_t)&Nido$num_nodes_total[__nesc_mote];
    *size = sizeof(Nido$num_nodes_total[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "Nido$max_run_time"))
  {
    *addr = (uintptr_t)&Nido$max_run_time[__nesc_mote];
    *size = sizeof(Nido$max_run_time[__nesc_mote]);
    return 0;
  }

  /* Module UARTNoCRCPacketM */

  /* Module NoLeds */

  /* Module TimerM */
  if (!strcmp(varname, "TimerM$mState"))
  {
    *addr = (uintptr_t)&TimerM$mState[__nesc_mote];
    *size = sizeof(TimerM$mState[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TimerM$setIntervalFlag"))
  {
    *addr = (uintptr_t)&TimerM$setIntervalFlag[__nesc_mote];
    *size = sizeof(TimerM$setIntervalFlag[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TimerM$mScale"))
  {
    *addr = (uintptr_t)&TimerM$mScale[__nesc_mote];
    *size = sizeof(TimerM$mScale[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TimerM$mInterval"))
  {
    *addr = (uintptr_t)&TimerM$mInterval[__nesc_mote];
    *size = sizeof(TimerM$mInterval[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TimerM$queue_head"))
  {
    *addr = (uintptr_t)&TimerM$queue_head[__nesc_mote];
    *size = sizeof(TimerM$queue_head[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TimerM$queue_tail"))
  {
    *addr = (uintptr_t)&TimerM$queue_tail[__nesc_mote];
    *size = sizeof(TimerM$queue_tail[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TimerM$queue_size"))
  {
    *addr = (uintptr_t)&TimerM$queue_size[__nesc_mote];
    *size = sizeof(TimerM$queue_size[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TimerM$queue"))
  {
    *addr = (uintptr_t)&TimerM$queue[__nesc_mote];
    *size = sizeof(TimerM$queue[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TimerM$interval_outstanding"))
  {
    *addr = (uintptr_t)&TimerM$interval_outstanding[__nesc_mote];
    *size = sizeof(TimerM$interval_outstanding[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TimerM$mTimerList"))
  {
    *addr = (uintptr_t)&TimerM$mTimerList[__nesc_mote];
    *size = sizeof(TimerM$mTimerList[__nesc_mote]);
    return 0;
  }

  /* Module HPLClock */
  if (!strcmp(varname, "HPLClock$set_flag"))
  {
    *addr = (uintptr_t)&HPLClock$set_flag[__nesc_mote];
    *size = sizeof(HPLClock$set_flag[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "HPLClock$mscale"))
  {
    *addr = (uintptr_t)&HPLClock$mscale[__nesc_mote];
    *size = sizeof(HPLClock$mscale[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "HPLClock$nextScale"))
  {
    *addr = (uintptr_t)&HPLClock$nextScale[__nesc_mote];
    *size = sizeof(HPLClock$nextScale[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "HPLClock$minterval"))
  {
    *addr = (uintptr_t)&HPLClock$minterval[__nesc_mote];
    *size = sizeof(HPLClock$minterval[__nesc_mote]);
    return 0;
  }

  /* Module HPLPowerManagementM */

  /* Module SurgeM */
  if (!strcmp(varname, "SurgeM$sleeping"))
  {
    *addr = (uintptr_t)&SurgeM$sleeping[__nesc_mote];
    *size = sizeof(SurgeM$sleeping[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SurgeM$focused"))
  {
    *addr = (uintptr_t)&SurgeM$focused[__nesc_mote];
    *size = sizeof(SurgeM$focused[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SurgeM$rebroadcast_adc_packet"))
  {
    *addr = (uintptr_t)&SurgeM$rebroadcast_adc_packet[__nesc_mote];
    *size = sizeof(SurgeM$rebroadcast_adc_packet[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SurgeM$gMsgBuffer"))
  {
    *addr = (uintptr_t)&SurgeM$gMsgBuffer[__nesc_mote];
    *size = sizeof(SurgeM$gMsgBuffer[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SurgeM$gSensorData"))
  {
    *addr = (uintptr_t)&SurgeM$gSensorData[__nesc_mote];
    *size = sizeof(SurgeM$gSensorData[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SurgeM$gfSendBusy"))
  {
    *addr = (uintptr_t)&SurgeM$gfSendBusy[__nesc_mote];
    *size = sizeof(SurgeM$gfSendBusy[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SurgeM$timer_rate"))
  {
    *addr = (uintptr_t)&SurgeM$timer_rate[__nesc_mote];
    *size = sizeof(SurgeM$timer_rate[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SurgeM$timer_ticks"))
  {
    *addr = (uintptr_t)&SurgeM$timer_ticks[__nesc_mote];
    *size = sizeof(SurgeM$timer_ticks[__nesc_mote]);
    return 0;
  }

  /* Module PowerStateM */

  /* Module LedsM */
  if (!strcmp(varname, "LedsM$ledsOn"))
  {
    *addr = (uintptr_t)&LedsM$ledsOn[__nesc_mote];
    *size = sizeof(LedsM$ledsOn[__nesc_mote]);
    return 0;
  }

  /* Module MultiHopEngineM */
  if (!strcmp(varname, "MultiHopEngineM$FwdBuffers"))
  {
    *addr = (uintptr_t)&MultiHopEngineM$FwdBuffers[__nesc_mote];
    *size = sizeof(MultiHopEngineM$FwdBuffers[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MultiHopEngineM$FwdBufList"))
  {
    *addr = (uintptr_t)&MultiHopEngineM$FwdBufList[__nesc_mote];
    *size = sizeof(MultiHopEngineM$FwdBufList[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MultiHopEngineM$iFwdBufHead"))
  {
    *addr = (uintptr_t)&MultiHopEngineM$iFwdBufHead[__nesc_mote];
    *size = sizeof(MultiHopEngineM$iFwdBufHead[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MultiHopEngineM$iFwdBufTail"))
  {
    *addr = (uintptr_t)&MultiHopEngineM$iFwdBufTail[__nesc_mote];
    *size = sizeof(MultiHopEngineM$iFwdBufTail[__nesc_mote]);
    return 0;
  }

  /* Module MultiHopLEPSM */
  if (!strcmp(varname, "MultiHopLEPSM$routeMsg"))
  {
    *addr = (uintptr_t)&MultiHopLEPSM$routeMsg[__nesc_mote];
    *size = sizeof(MultiHopLEPSM$routeMsg[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MultiHopLEPSM$gfSendRouteBusy"))
  {
    *addr = (uintptr_t)&MultiHopLEPSM$gfSendRouteBusy[__nesc_mote];
    *size = sizeof(MultiHopLEPSM$gfSendRouteBusy[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MultiHopLEPSM$BaseStation"))
  {
    *addr = (uintptr_t)&MultiHopLEPSM$BaseStation[__nesc_mote];
    *size = sizeof(MultiHopLEPSM$BaseStation[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MultiHopLEPSM$NeighborTbl"))
  {
    *addr = (uintptr_t)&MultiHopLEPSM$NeighborTbl[__nesc_mote];
    *size = sizeof(MultiHopLEPSM$NeighborTbl[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MultiHopLEPSM$gpCurrentParent"))
  {
    *addr = (uintptr_t)&MultiHopLEPSM$gpCurrentParent[__nesc_mote];
    *size = sizeof(MultiHopLEPSM$gpCurrentParent[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MultiHopLEPSM$gbCurrentHopCount"))
  {
    *addr = (uintptr_t)&MultiHopLEPSM$gbCurrentHopCount[__nesc_mote];
    *size = sizeof(MultiHopLEPSM$gbCurrentHopCount[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MultiHopLEPSM$gCurrentSeqNo"))
  {
    *addr = (uintptr_t)&MultiHopLEPSM$gCurrentSeqNo[__nesc_mote];
    *size = sizeof(MultiHopLEPSM$gCurrentSeqNo[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MultiHopLEPSM$gwEstTicks"))
  {
    *addr = (uintptr_t)&MultiHopLEPSM$gwEstTicks[__nesc_mote];
    *size = sizeof(MultiHopLEPSM$gwEstTicks[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MultiHopLEPSM$gUpdateInterval"))
  {
    *addr = (uintptr_t)&MultiHopLEPSM$gUpdateInterval[__nesc_mote];
    *size = sizeof(MultiHopLEPSM$gUpdateInterval[__nesc_mote]);
    return 0;
  }

  /* Module PhotoTempM */
  if (!strcmp(varname, "PhotoTempM$hardwareStatus"))
  {
    *addr = (uintptr_t)&PhotoTempM$hardwareStatus[__nesc_mote];
    *size = sizeof(PhotoTempM$hardwareStatus[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "PhotoTempM$photoSensor"))
  {
    *addr = (uintptr_t)&PhotoTempM$photoSensor[__nesc_mote];
    *size = sizeof(PhotoTempM$photoSensor[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "PhotoTempM$tempSensor"))
  {
    *addr = (uintptr_t)&PhotoTempM$tempSensor[__nesc_mote];
    *size = sizeof(PhotoTempM$tempSensor[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "PhotoTempM$waitingForSample"))
  {
    *addr = (uintptr_t)&PhotoTempM$waitingForSample[__nesc_mote];
    *size = sizeof(PhotoTempM$waitingForSample[__nesc_mote]);
    return 0;
  }

  /* Module ADCM */
  if (!strcmp(varname, "ADCM$ReqPort"))
  {
    *addr = (uintptr_t)&ADCM$ReqPort[__nesc_mote];
    *size = sizeof(ADCM$ReqPort[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "ADCM$ReqVector"))
  {
    *addr = (uintptr_t)&ADCM$ReqVector[__nesc_mote];
    *size = sizeof(ADCM$ReqVector[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "ADCM$ContReqMask"))
  {
    *addr = (uintptr_t)&ADCM$ContReqMask[__nesc_mote];
    *size = sizeof(ADCM$ContReqMask[__nesc_mote]);
    return 0;
  }

  /* Module HPLADCC */

  /* Module PotM */

  /* Module HPLPotC */

  /* Module BcastM */
  if (!strcmp(varname, "BcastM$BcastSeqno"))
  {
    *addr = (uintptr_t)&BcastM$BcastSeqno[__nesc_mote];
    *size = sizeof(BcastM$BcastSeqno[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BcastM$FwdBuffer"))
  {
    *addr = (uintptr_t)&BcastM$FwdBuffer[__nesc_mote];
    *size = sizeof(BcastM$FwdBuffer[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BcastM$iFwdBufHead"))
  {
    *addr = (uintptr_t)&BcastM$iFwdBufHead[__nesc_mote];
    *size = sizeof(BcastM$iFwdBufHead[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BcastM$iFwdBufTail"))
  {
    *addr = (uintptr_t)&BcastM$iFwdBufTail[__nesc_mote];
    *size = sizeof(BcastM$iFwdBufTail[__nesc_mote]);
    return 0;
  }

  return -1;
}
/* Invoke static initialisers for mote '__nesc_mote' */

static void __nesc_nido_initialise(int __nesc_mote)
{
  /* Module SounderM */

  /* Module QueuedSendM */
  memset(&QueuedSendM$msgqueue[__nesc_mote], 0, sizeof QueuedSendM$msgqueue[__nesc_mote]);
  memset(&QueuedSendM$enqueue_next[__nesc_mote], 0, sizeof QueuedSendM$enqueue_next[__nesc_mote]);
  memset(&QueuedSendM$dequeue_next[__nesc_mote], 0, sizeof QueuedSendM$dequeue_next[__nesc_mote]);
  memset(&QueuedSendM$retransmit[__nesc_mote], 0, sizeof QueuedSendM$retransmit[__nesc_mote]);
  memset(&QueuedSendM$fQueueIdle[__nesc_mote], 0, sizeof QueuedSendM$fQueueIdle[__nesc_mote]);

  /* Module AMPromiscuous */
  memset(&AMPromiscuous$state[__nesc_mote], 0, sizeof AMPromiscuous$state[__nesc_mote]);
  memset(&AMPromiscuous$buffer[__nesc_mote], 0, sizeof AMPromiscuous$buffer[__nesc_mote]);
  memset(&AMPromiscuous$lastCount[__nesc_mote], 0, sizeof AMPromiscuous$lastCount[__nesc_mote]);
  memset(&AMPromiscuous$counter[__nesc_mote], 0, sizeof AMPromiscuous$counter[__nesc_mote]);
  memset(&AMPromiscuous$promiscuous_mode[__nesc_mote], 0, sizeof AMPromiscuous$promiscuous_mode[__nesc_mote]);
  memset(&AMPromiscuous$crc_check[__nesc_mote], 0, sizeof AMPromiscuous$crc_check[__nesc_mote]);

  /* Module TossimPacketM */
  memset(&TossimPacketM$buffer[__nesc_mote], 0, sizeof TossimPacketM$buffer[__nesc_mote]);
  memset(&TossimPacketM$bufferPtr[__nesc_mote], 0, sizeof TossimPacketM$bufferPtr[__nesc_mote]);

  /* Module Nido */
  Nido$last_power_time[__nesc_mote] = 0;
  Nido$power_profiling[__nesc_mote] = 0;
  Nido$cpu_profiling[__nesc_mote] = 0;
  memset(&Nido$num_nodes_total[__nesc_mote], 0, sizeof Nido$num_nodes_total[__nesc_mote]);
  Nido$max_run_time[__nesc_mote] = 0;

  /* Module UARTNoCRCPacketM */

  /* Module NoLeds */

  /* Module TimerM */
  memset(&TimerM$mState[__nesc_mote], 0, sizeof TimerM$mState[__nesc_mote]);
  memset(&TimerM$setIntervalFlag[__nesc_mote], 0, sizeof TimerM$setIntervalFlag[__nesc_mote]);
  memset(&TimerM$mScale[__nesc_mote], 0, sizeof TimerM$mScale[__nesc_mote]);
  memset(&TimerM$mInterval[__nesc_mote], 0, sizeof TimerM$mInterval[__nesc_mote]);
  memset(&TimerM$queue_head[__nesc_mote], 0, sizeof TimerM$queue_head[__nesc_mote]);
  memset(&TimerM$queue_tail[__nesc_mote], 0, sizeof TimerM$queue_tail[__nesc_mote]);
  memset(&TimerM$queue_size[__nesc_mote], 0, sizeof TimerM$queue_size[__nesc_mote]);
  memset(&TimerM$queue[__nesc_mote], 0, sizeof TimerM$queue[__nesc_mote]);
  memset(&TimerM$interval_outstanding[__nesc_mote], 0, sizeof TimerM$interval_outstanding[__nesc_mote]);
  memset(&TimerM$mTimerList[__nesc_mote], 0, sizeof TimerM$mTimerList[__nesc_mote]);

  /* Module HPLClock */
  memset(&HPLClock$set_flag[__nesc_mote], 0, sizeof HPLClock$set_flag[__nesc_mote]);
  memset(&HPLClock$mscale[__nesc_mote], 0, sizeof HPLClock$mscale[__nesc_mote]);
  memset(&HPLClock$nextScale[__nesc_mote], 0, sizeof HPLClock$nextScale[__nesc_mote]);
  memset(&HPLClock$minterval[__nesc_mote], 0, sizeof HPLClock$minterval[__nesc_mote]);

  /* Module HPLPowerManagementM */

  /* Module SurgeM */
  memset(&SurgeM$sleeping[__nesc_mote], 0, sizeof SurgeM$sleeping[__nesc_mote]);
  memset(&SurgeM$focused[__nesc_mote], 0, sizeof SurgeM$focused[__nesc_mote]);
  memset(&SurgeM$rebroadcast_adc_packet[__nesc_mote], 0, sizeof SurgeM$rebroadcast_adc_packet[__nesc_mote]);
  memset(&SurgeM$gMsgBuffer[__nesc_mote], 0, sizeof SurgeM$gMsgBuffer[__nesc_mote]);
  memset(&SurgeM$gSensorData[__nesc_mote], 0, sizeof SurgeM$gSensorData[__nesc_mote]);
  memset(&SurgeM$gfSendBusy[__nesc_mote], 0, sizeof SurgeM$gfSendBusy[__nesc_mote]);
  memset(&SurgeM$timer_rate[__nesc_mote], 0, sizeof SurgeM$timer_rate[__nesc_mote]);
  memset(&SurgeM$timer_ticks[__nesc_mote], 0, sizeof SurgeM$timer_ticks[__nesc_mote]);

  /* Module PowerStateM */

  /* Module LedsM */
  memset(&LedsM$ledsOn[__nesc_mote], 0, sizeof LedsM$ledsOn[__nesc_mote]);

  /* Module MultiHopEngineM */
  memset(&MultiHopEngineM$FwdBuffers[__nesc_mote], 0, sizeof MultiHopEngineM$FwdBuffers[__nesc_mote]);
  memset(&MultiHopEngineM$FwdBufList[__nesc_mote], 0, sizeof MultiHopEngineM$FwdBufList[__nesc_mote]);
  memset(&MultiHopEngineM$iFwdBufHead[__nesc_mote], 0, sizeof MultiHopEngineM$iFwdBufHead[__nesc_mote]);
  memset(&MultiHopEngineM$iFwdBufTail[__nesc_mote], 0, sizeof MultiHopEngineM$iFwdBufTail[__nesc_mote]);

  /* Module MultiHopLEPSM */
  memset(&MultiHopLEPSM$routeMsg[__nesc_mote], 0, sizeof MultiHopLEPSM$routeMsg[__nesc_mote]);
  memset(&MultiHopLEPSM$gfSendRouteBusy[__nesc_mote], 0, sizeof MultiHopLEPSM$gfSendRouteBusy[__nesc_mote]);
  memset(&MultiHopLEPSM$BaseStation[__nesc_mote], 0, sizeof MultiHopLEPSM$BaseStation[__nesc_mote]);
  memset(&MultiHopLEPSM$NeighborTbl[__nesc_mote], 0, sizeof MultiHopLEPSM$NeighborTbl[__nesc_mote]);
  memset(&MultiHopLEPSM$gpCurrentParent[__nesc_mote], 0, sizeof MultiHopLEPSM$gpCurrentParent[__nesc_mote]);
  memset(&MultiHopLEPSM$gbCurrentHopCount[__nesc_mote], 0, sizeof MultiHopLEPSM$gbCurrentHopCount[__nesc_mote]);
  memset(&MultiHopLEPSM$gCurrentSeqNo[__nesc_mote], 0, sizeof MultiHopLEPSM$gCurrentSeqNo[__nesc_mote]);
  memset(&MultiHopLEPSM$gwEstTicks[__nesc_mote], 0, sizeof MultiHopLEPSM$gwEstTicks[__nesc_mote]);
  memset(&MultiHopLEPSM$gUpdateInterval[__nesc_mote], 0, sizeof MultiHopLEPSM$gUpdateInterval[__nesc_mote]);

  /* Module PhotoTempM */
  memset(&PhotoTempM$hardwareStatus[__nesc_mote], 0, sizeof PhotoTempM$hardwareStatus[__nesc_mote]);
  memset(&PhotoTempM$photoSensor[__nesc_mote], 0, sizeof PhotoTempM$photoSensor[__nesc_mote]);
  memset(&PhotoTempM$tempSensor[__nesc_mote], 0, sizeof PhotoTempM$tempSensor[__nesc_mote]);
  memset(&PhotoTempM$waitingForSample[__nesc_mote], 0, sizeof PhotoTempM$waitingForSample[__nesc_mote]);
  memset(&PhotoTempM$getSample$photoIsNext[__nesc_mote], 0, sizeof PhotoTempM$getSample$photoIsNext[__nesc_mote]);

  /* Module ADCM */
  memset(&ADCM$ReqPort[__nesc_mote], 0, sizeof ADCM$ReqPort[__nesc_mote]);
  memset(&ADCM$ReqVector[__nesc_mote], 0, sizeof ADCM$ReqVector[__nesc_mote]);
  memset(&ADCM$ContReqMask[__nesc_mote], 0, sizeof ADCM$ContReqMask[__nesc_mote]);

  /* Module HPLADCC */

  /* Module PotM */

  /* Module HPLPotC */

  /* Module BcastM */
  memset(&BcastM$BcastSeqno[__nesc_mote], 0, sizeof BcastM$BcastSeqno[__nesc_mote]);
  memset(&BcastM$FwdBuffer[__nesc_mote], 0, sizeof BcastM$FwdBuffer[__nesc_mote]);
  memset(&BcastM$iFwdBufHead[__nesc_mote], 0, sizeof BcastM$iFwdBufHead[__nesc_mote]);
  memset(&BcastM$iFwdBufTail[__nesc_mote], 0, sizeof BcastM$iFwdBufTail[__nesc_mote]);

}
