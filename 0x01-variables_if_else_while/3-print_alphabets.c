#include <stdio.h>
/**
 * main - write the alphabet
 *
 * Description: the letters should be inlower and upper case
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i=0; i<52; i++);
	{
		putchar(alp[i]);
	}
	putchar('\');
	return(0);
}
