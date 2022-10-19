#include "main.h"
/**
 * main - print_alphabet in lower case
 *
 * print all alphabet in lowercase
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
