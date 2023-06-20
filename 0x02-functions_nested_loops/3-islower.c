#include <stdio.h>
#include "main.h"
/**
 * _islower - _islower block
 * Description: Write a function that checks for lowercase character.
 * Prototype: int _islower(int c);
 * @c: char type letter
 * Returns 1 if c is lowercase
 * Returns 0 otherwise
 *
 * Return: 1 if c is lowercase. 0 otherwise
 */
int _islower(int c)
{
	if (c > 96 && c	< 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
