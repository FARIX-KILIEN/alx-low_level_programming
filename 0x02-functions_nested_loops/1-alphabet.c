#include <stdio.h>
#include <stdlib.h>
/**
 * main - alphabet in lower case
 *
 * Description: printing the alphabet in lower case using the putchar 
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char alp[26] = "abcdefdhijklmnopqrstuvwxyz";
	int i;

		for (i = 0; i < 26; i++)
		{
			putchar(alp[i]);
		}
	putchar('\n');
	return (0);
}
