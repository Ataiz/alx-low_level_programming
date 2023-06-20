#include <stdio.h>
#include "main.h"
/**
 * _abs - _abs block
 * Description: Write a function that computes-
 * -the absolute value of an integer.
 * Prototype: int _abs(int);
 *
 * @n: int type integer
 *
 * Return: Always 0 (Succes)
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
