#include <stdio.h>
#include "main.h"
/**
 * print_line - print_line block
 * Description: Write a function that draws a straight line in the terminal.
 * Prototype: void print_line(int n);
 * You can only use _putchar function to print
 * Where n is the number of times the character _ should be printed
 * The line should end with a \n
 * If n is 0 or less, the function should only print \n
 *
 * @n: int type
 * Return: nil
 */
void print_line(int n)
{
	int c;

	for (c =  0; c < n; c++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
