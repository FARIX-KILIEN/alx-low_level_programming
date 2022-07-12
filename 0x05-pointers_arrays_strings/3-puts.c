#include "main.h"

/**
 * _puts - to prints a string
 * @str: nput string.
 * Return: no return
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
