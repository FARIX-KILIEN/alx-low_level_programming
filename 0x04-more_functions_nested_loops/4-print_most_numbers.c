#include "main.h"

/**
 * print_most_numbers - prints numbers between 0 to 9
 *
 * (neither 2 nor 4).
 *
 * Return: no return.
 */
void print_most_numbers(void);
{
	int X;

	for (X = 0; X < 10; X++)
	{
		if (X != 2 && ch != 4)
			_putchar(X);
	}
	_putchar('\n');
}
