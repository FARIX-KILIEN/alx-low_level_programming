#include "main.h"

/**
 * _memcpy - copies memory area,
 * @dest: destination memory area.
 * @src: source memory area.
 * @n: bytes filled.
 * Return: the pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		*(dest + t) = *(src + t);
	}
	return (dest);
}
