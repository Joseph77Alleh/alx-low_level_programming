#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: the place we copy to
 * @src: we copy from
 * @n: how much we copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

