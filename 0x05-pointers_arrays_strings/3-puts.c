#include "main.h"

/**
 * _puts - to prints a string
 * *str: nput string.
 * Return: no return
 */
void _puts(char *str)
{
	int x = 0;

	while (x >= 0)
	{
		if (str[x] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[x]);
		x++;
	}
}
