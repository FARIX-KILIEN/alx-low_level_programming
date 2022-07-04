#include <stdio.h>

/**
 * main - all possible different combinations
 *
 * Description: all possible different combinations of two digits.
 *
 * Return: always success (0)
 */
int main(void)
{
	int i, e;

	i = 48;
	e = 48;

	while (e < 58)
	{
		i = 48;
		while (i < 58)
		{
			putchar(e);
			putchar(i);
			if (i < 57 && e < 57)
			{
			putchar(44);
			putchar(32);
			}
			i++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}
