#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - print_last_digit block
 * Description: Write a function that prints the last digit of a number.
 * Prototype: int print_last_digit(int);
 * Returns the value of the last digit
 *
 * @n: int type integer
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	int i;

	i = n % 10;
	if (i < 0)
	{
		_putchar(-i + '0');
		return (-i);
	}
	else
	{
		_putchar(i + '0');
		return (i);
	}
}
