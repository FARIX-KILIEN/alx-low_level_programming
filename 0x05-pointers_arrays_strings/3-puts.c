#include "main.h"

/**
 * _puts - to prints a string
 * @str: nput string.
 * Return: no return
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	putchar('\n');
}
