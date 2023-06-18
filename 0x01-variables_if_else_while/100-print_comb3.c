#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * Descripton: Write a program that prints all possible different
 * combinations of two digits.
 * Numbers must be separated by ',', followed by a space.The two
 * digits must be different.
 * 01 and 10 are considered the same combination of the two digits 0 and 1.
 * Print only the smallest combination of two digits.
 * Numbers should be printed in ascending order, with two digits.
 * You can only use the putchar function (every other function
 * (printf, puts, etc…) is forbidden).
 * You can only use putchar five times maximum in your code.
 * You are not allowed to use any variable of type 'char'.
 * All your code should be in the main function
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int i, j, k;

	for (i = 0 ; i <= 89; i++)
	{
		j = i / 10;
		k = i % 10;

		if (j < k)
		{
			putchar(j + '0');
			putchar(k + '0');

			if (i < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
