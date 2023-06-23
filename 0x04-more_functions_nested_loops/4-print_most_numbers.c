#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - print_most_numbers block
 * Description: Write a function that prints the numbers, from 0 to 9,
 * followed by a new line.
 * Prototype: void print_most_numbers(void);
 * Do not print 2 and 4
 * You can only use _putchar twice in your code
 *
 * Return: nil
 */
void print_most_numbers(void)
{
	int n = 0;

	while (n <= 9)
	{
		if (n != 2 && n != 4)
		{
			_putchar(n + '0');
		}
		n++;
	}
	_putchar('\n');
}
