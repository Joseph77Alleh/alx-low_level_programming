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
	char *ptr = s;

	while (n > 0)
		*ptr++ = b;

	return (s);
}
