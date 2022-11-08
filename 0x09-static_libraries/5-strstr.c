#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring.
 * @haystack: the longer string to search
 * @needle: the first occurence of the substring
 *
 *
 * Return: a pointer beg of substring or @NULL if it is not found
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
			{
				break;
			}
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}