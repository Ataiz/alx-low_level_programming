#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * Descripton: This program will assign a random number to the
 * variable n each time it is executed and displays if the last
 * number of n is greater than 5, equals to 0 or less than 6 and
 * not equal to zero
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (m > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, m);
	}
	else if (m == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, m);
	}
	else
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, m);
	}
	/* your code goes there */
	return (0);
}
