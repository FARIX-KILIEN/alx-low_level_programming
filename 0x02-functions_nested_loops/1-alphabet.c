#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - alphabet in lower case
 *
 * Description: printing the alphabet in lower case using the putchar 
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i;
	
	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
