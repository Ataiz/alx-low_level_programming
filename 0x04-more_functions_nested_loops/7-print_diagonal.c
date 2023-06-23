#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - print_diagonal block
 * Description: Write a function that draws a diagonal line on the terminal.
 *
 * Prototype: void print_diagonal(int n);
 * You can only use _putchar function to print
 * Where n is the number of times the character \ should be printed
 * The diagonal should end with a \n
 * If n is 0 or less, the function should only print a \n
 *
 * @n: int type
 *
 * Return: nil
 */
void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (a = 0; a < n; a++)
	{
		for (b = 0; b <= a; b++)
		{
			if (a == b)
			{
				_putchar(92);
				_putchar('\n');
			}
			else
			{
				_putchar(' ');
			}
		}
	}
}
