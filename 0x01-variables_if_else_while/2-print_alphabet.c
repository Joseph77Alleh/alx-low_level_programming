#include <stdio.h>

/**
 * main - print alphabet in lower case
 *
 * Return: Always 0 (success)
 * /
int main(void)
{
	char Lc;

	for (Lc = 'a'; Lc <= 'z'; Lc++);
	{
		putchar(Lc);
	}
	putchar('\n');
	return (0);
}
