#include <stdio.h>
#include "main.h"
/**
 * print_sign - print_sign block
 * Description: Write a function that prints the sign of a number.
 * Prototype: int print_sign(int n);
 * Returns 1 and prints + if n is greater than zero
 * Returns 0 and prints 0 if n is zero
 * Returns -1 and prints - if n is less than zero
 *
 * @n: int type integer
 * Return: 1 if n is greater than zero,
 * 0 if n is zero & -1 if n is less than zero
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
	_putchar('\n');
}
