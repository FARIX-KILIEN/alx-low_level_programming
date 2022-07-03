#include <time.h>
#include <stdlib.h>
/**
 * Initialization, should only be called once
 *
 * Returns a pseudo-random integer between 0 and RAND_MAX
 */
srand(time(NULL));

int r = rand();
