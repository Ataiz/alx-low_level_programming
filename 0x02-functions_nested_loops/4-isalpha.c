#include <stdio.h>
#include "main.h"
/**
 * _isalpha - _isalpha block
 * Description: Write a function that checks for alphabetic character.
 * Prototype: int _isalpha(int c);
 * @c: char type letter
 *
 * Return: 1 if c is a letter, lowercase or uppercase. 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
