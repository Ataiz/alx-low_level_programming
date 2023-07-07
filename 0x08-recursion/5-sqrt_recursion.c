#include "main.h"
/**
  * mul - check for multiples of a
  * @a: integer
  * @b: integer
  * Return: multiple of a
  */

int mul(int a, int b)
{
	if ((b * b) == a)
	{
		return (b);
	}
	else if ((b * b) < a)
	{
		return (mul(a, b + 1));
	}
	else
		return (-1);
}
/**
  * _sqrt_recursion - function that returns natural square root of a number.
  * @n: integer
  * Return: return the square root
  */
int _sqrt_recursion(int n)
{
	return (mul(n, 1));
}
