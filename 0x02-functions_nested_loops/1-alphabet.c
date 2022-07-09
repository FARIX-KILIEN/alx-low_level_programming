#include "main.h"

/**
 * main - alphabet in lower case
 *
 * Description: printing the alphabet in lower case using the putchar
 *
 * Return: always 0 (success)
 */

void print_alphabet(void)/*prototype found in file main.h*/
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
