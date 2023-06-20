#include <stdio.h>
#include <math.h>
#include "main.h"
/**
 * main - main block
 * Description: If we list all the natural numbers below 10 that are multiples-
 * -of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
 *  Write a program that computes and prints the sum of all the multiples-
 * -of 3 or 5 below 1024 (excluded), followed by a new line.
 *
 * You are allowed to use the standard library
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int i = 1;
	int total = 0;

	while (i < 1024)
	{
		if (i % 3 == 0)
			total += i;
		else if (i % 5 == 0)
			total += i;

		i++;
	}
	printf("%d\n", total);

	return (0);
}
