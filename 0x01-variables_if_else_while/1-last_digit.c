#include <time.h>
#include <stdlib.h>
/**
 * Initialization, should only be called once
 *
 * Returns a pseudo-random integer between 0 and RAND_MAX
 */
srand(time(NULL));
int r = rand();

n = rand() - RAND_MAX / 2;
l = n % 10;
if (l > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, l);
}
else if (l == 0)
{
	printf("Last digit of %d is %d and is 0\n", n, l);
}
else
{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
}
return (0);
