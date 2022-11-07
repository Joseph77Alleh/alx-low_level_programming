#include "main.h"
#include <stddef.h>


/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: the string we look for occurence
 * @accept: the string to compare against, or @NULL if no such byte
 *
 * Return: a pointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
