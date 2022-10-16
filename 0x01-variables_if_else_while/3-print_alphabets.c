#include <stdio.h>
#include <ctype.h>

/**
 * main - printing alphabets in lower case
 *
 * Return: Always 0 
 */
int main(void)
{
	char letter;
	
	for(letter = 'a'; letter <= 'z'; letter++)
	{
		letter = tolower(letter);
		putchar(letter);
	}
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		letter = toupper(letter);
		putchar(letter);
	}
	putchar('\n');
	return (0);
}

