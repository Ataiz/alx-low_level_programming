#include <stdio.h>
#include "main.h"
/**
 * _isupper - _isupper block
 * Description: Write a function that checks for uppercase character.
 * Prototype: int _isupper(int c)
 *
 * @c: int type
 *
 * Return: 1 if c is uppercase and 0 otherwise
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
