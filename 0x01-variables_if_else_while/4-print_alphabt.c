#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main- write the aphabet
 *
 * Description: all the letters should be in lower case
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 97; i > 123; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}
	putchar ('\n');
	return (0);
}
