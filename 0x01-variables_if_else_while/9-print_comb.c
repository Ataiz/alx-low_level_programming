#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * Descripton: Write a program that prints all possible
 * combinations of single-digit numbers.
 * You can only use putchar four times maximum in your code.
 * You are not allowed to use any variable of type char
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int i;

	for (i = 0 ; i <= 9; i++)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
