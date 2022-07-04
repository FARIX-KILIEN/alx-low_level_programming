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

	while (i < 58)
	{
		e = 48;
		while (e < 58)
		{
			putchar(i);
			putchar(e);
			if (i < 57 || e < 57)
			{
			putchar(44);
			putchar(32);
			}
			e++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
