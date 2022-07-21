#include "main.h"

/**
 * _pow_recursion - x raised to the power of y.
 * @x: base term
 * @y: power term
 * Return: x power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (_pow_recursion(x, y));
	}
}
