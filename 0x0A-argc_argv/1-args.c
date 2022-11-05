#include <stdio.h>

/**
 * main - prints the number of argument passed into it
 * @argc: parameter
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
