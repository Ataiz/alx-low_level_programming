#include <stdio.h>
#include "main.h"
/**
 * print_numbers - print_numbers block
 * Description: Write a function that prints the numbers, from 0 to 9,
 * followed by a new line.
 * Prototype: void print_numbers(void);
 * You can only use _putchar twice in your code
 *
 * Return: nil
 */
void print_numbers(void)
{
	int n = 0;

	while (n <= 9)
	{
		_putchar(n + '0');
		n++;
	}
	_putchar('\n');
}
