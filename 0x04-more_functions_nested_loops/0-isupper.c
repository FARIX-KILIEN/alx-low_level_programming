#include "main.h"
#include <stdio.h>

/**
 * main - checks if parameter is an uppercase character.
 *
 * _isupper uppercase and lowercase checking
 *
 * Return: 1 if is an uppercase character, 0 in other case.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
