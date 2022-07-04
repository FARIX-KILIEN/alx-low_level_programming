#include <stdio.h>

/**
 * main - different combinations of three digits.
 *
 * Description: command that print three posible combination of numbers
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int x, y, z;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = '1'; y <= '9'; y++)
		{
			for (z = '2'; z <= '9'; z++)
			{
				if (x =='0' || (x != y != z && x < y < z))
				{
					putchar(x);
					putchar(y);
					putchar(z);
					if ((x + y + z) < 168)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
