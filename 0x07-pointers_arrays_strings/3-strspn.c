#include "main.h"
#include <stddef.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string we look for
 * @accept: the string we compare to
 *
 * Return: unsigned int
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	for (; s[i]; j++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}

			if (s[i] != accept[j])
			{
				break;
			}
	}
	return (i);
}
