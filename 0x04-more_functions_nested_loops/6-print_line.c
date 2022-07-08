#include"main.h"
#include <stdio.h>

/**
 * print_line -> prints straight line n times
 *
 * @n: times straight line is printed.
 */
void print_line(int n)
{
	int i;

	if (i <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i <= n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
