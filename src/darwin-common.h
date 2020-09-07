#ifndef _DARWIN_COMMON_H
#define _DARWIN_COMMON_H

#include <pthread.h>

#define min(x, y) ({				\
	typeof(x) _min1 = (x);			\
	typeof(y) _min2 = (y);			\
	(void) (&_min1 == &_min2);		\
	_min1 < _min2 ? _min1 : _min2; })

static inline pid_t
mygettid( void )
{
  return pthread_self();
}

#define PTRACE_TRACEME PT_TRACE_ME
#define PTRACE_CONT PT_CONTINUE
#define PTRACE_ATTACH PT_ATTACH

long long _darwin_get_real_cycles( void );
long long _darwin_get_virt_usec_times( void );
long long _darwin_get_real_usec_gettimeofday( void );

#endif
