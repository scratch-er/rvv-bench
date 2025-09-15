/* processor specific configs */
#ifndef HAS_E64
#define HAS_E64 1
#endif

#ifndef HAS_F16
#define HAS_F16 0
#endif

/* the maximum number of bytes to allocate, minimum of 4096 */
// #define MAX_MEM (1024*4)
#ifndef MAX_MEM
#define MAX_MEM (1024*1024*32)
#endif

/* the byte count for the next run */
#ifndef NEXT
#define NEXT(c) (c + c/7 + 3)
#endif

/* minimum number of repeats, to sample median from */
#ifndef MIN_REPEATS
#define MIN_REPEATS 10
#endif

/* maxium number of repeats, executed until more than STOP_TIME has elapsed */
#ifndef MAX_REPEATS
#define MAX_REPEATS 64
#endif

/* stop repeats early after this many cycles have elapsed */
#ifndef STOP_CYCLES
#define STOP_CYCLES (1024*1024*500)
#endif

/* custom scaling factors for benchmarks, these are used to make sure each
 * benchmark approximately takes the same amount of time. */

#ifndef SCALE_mandelbrot
#define SCALE_mandelbrot(N) ((N)/10)
#endif

#ifndef SCALE_mergelines
#define SCALE_mergelines(N) ((N)/10)
#endif

/* benchmark specific configurations */
#ifndef mandelbrot_ITER
#define mandelbrot_ITER 100
#endif
