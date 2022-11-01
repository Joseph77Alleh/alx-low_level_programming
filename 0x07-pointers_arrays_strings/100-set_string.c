#include "main.h"
#include <stdio.h>

/**
 * set_string - sets the value of a pointer to a char
 * @s: value to be set
 *
 * @to: string to change pointer to
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
