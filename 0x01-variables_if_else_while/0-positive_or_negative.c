#include <stdio.h>
#include <stdlib.h>

#include <time.h>

/* more headers goes there */



/* betty style doc for function main goes there */
/**
 * main - Entring point
 * Decription: Print a number if a number is negativeor positive
 * Return: Always 0 (success)
 * 
 */

int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;

					/* your code goes there */
				if (n > 0)
					printf("%d is positive\n", n);
				else if (n == 0)
					printf("%d is zero\n", n);
				else (n < 0)
					printf("%d is negative\n", n);

					return (0);

}