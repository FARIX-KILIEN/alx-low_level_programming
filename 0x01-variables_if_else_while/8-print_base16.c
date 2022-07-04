#include <stdio.h>

 /**
  * Main: Prints numbers between 0 to 9 and letters between a to f.
  *
  * Description: all the numbers of base 16 in lowercase
  *
  * Return: always 0 (success)
  */
int main(void)
{
	int i = 0;
	while (i < 48)
	{
		if (i < 10)
			putchar(i + '0');
		else if (i > 41)
			putchar(i - 10 + 'A');
		i++;
	}
	putchar(10);
	return (0);
}
