#include <stdio.h>
#include <ctype.h>

/**
 * main - print single digit numbers of base ten
 *
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
