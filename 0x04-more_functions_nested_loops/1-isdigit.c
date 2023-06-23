#include <stdio.h>
#include "main.h"
/**
 * _isdigit - _isdigit block
 * Description: Write a function that checks for a digit (0 through 9).
 * Prototype: int _isdigit(int c);
 *
 * @c: int type
 *
 * Return: 1 if c is a digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
