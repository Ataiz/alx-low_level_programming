#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print_to_98 block
 * Description: Write a function that prints all natural numbers from n to 98,
 * followed by a new line.
 *
 * Prototype: void print_to_98(int n);
 * Numbers must be separated by a comma, followed by a space
 * Numbers should be printed in order
 * The first printed number should be the number passed to your function
 * The last printed number should be 98
 * You are allowed to use the standard library
 *
 * @n: int type integer
 *
 * Return: Always 0 (Succes)
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	printf("%d\n", n);
}
