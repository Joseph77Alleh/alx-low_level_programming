#include "main.h"
#include <stddef.h>


/**
 * _memset - fills the first n bytes of the memory area
 * @s: A pointer to the memory area to be filled
 * @b: bytes
 * @n: The number of bytes
 * Return: A pointer to be filled memory area @s.
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
