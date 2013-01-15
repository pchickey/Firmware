 
/**
 * @file hello_sky.c
 * Minimal application example for PX4 autopilot.
 */
 
#include <nuttx/config.h>
#include <unistd.h>
#include <poll.h>
#include <stdio.h>
#include <errno.h>

__EXPORT int hello_sky_main(int argc, char *argv[]);

int hello_sky_main(int argc, char *argv[])
{
    printf("Hello Sky!\n");
 
    return OK;
}

