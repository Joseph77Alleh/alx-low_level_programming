#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point to this program
 *
 * Return: Always 0 (success)
 * Last digit
 * /
int main(void)
{
	int n;
	
	srand(time(0))
	n = rand() - RAND_MAX / 2;
	if (n > 5)
		printf("%d and is greater than 5\n", n);
	else if (n < 6 & != 0)
		priintf("%d and is less than 6 and not 0\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
