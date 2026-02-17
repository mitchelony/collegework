#ifndef COMMON_H
#define COMMON_H

#include <assert.h>
#include <sys/time.h>

static inline double
Time(void)
{
    struct timeval t;
    int rc = gettimeofday(&t, NULL);
    assert(rc == 0);
    return (double)t.tv_sec + (double)t.tv_usec / 1000000.0;
}

static inline void
Spin(int howlong)
{
    double start = Time();
    while ((Time() - start) < (double)howlong) {
    }
}

#endif
