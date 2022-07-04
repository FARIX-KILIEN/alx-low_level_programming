#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - single digit numbers
 *
 * Description: printing single digit from 0
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
