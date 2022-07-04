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

	for (i = '0'; i <= '9'; i++)
	{
		for (e = '1'; e <= '9'; e++)
		{
			if (i == '0' || (i != e && i < e))
			{
			putchar(i);
			putchar(e);
			if (i != '8')
			{
			putchar(44);
			putchar(32);
			}
			}
		}
	}
	putchar('\n');
	return (0);
}
