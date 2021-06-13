#include <stdio.h>
#include <unistd.h>
#include <time.h>

int main() { 
    fprintf(stderr, "hello world %lu\n",sizeof(size_t));

    struct timespec spec;

    // clock_gettime(CLOCK_REALTIME, &spec);

    // int counter = 0;
    while(1) {
        clock_gettime(CLOCK_REALTIME, &spec);
        fprintf(stderr, "%ld %ld\n", spec.tv_sec, spec.tv_nsec);
        // sleep(1);
    }
    return 0;
}
