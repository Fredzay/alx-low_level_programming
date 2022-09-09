include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program will assign a random number to the variable n each time it is executed
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)
		printf("Last digit of %i and is greater than 5\n", n);
	else if (n == 0)
		printf("Last digit of %i and is 0\n", n);
	else 
		printf("Last digit of %i and is less than 6 and not 0\n", n);
	
	return (0);
}
