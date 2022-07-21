#include "main.h"

/**
 * _sqrt_recursion - compute natural sqrt
 * @n: input value
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (1);
	else 
		return (1 * _sqrt_recursion(n));
}
