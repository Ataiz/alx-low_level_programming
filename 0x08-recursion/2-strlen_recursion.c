#include "main.h"

/**
 * _strlen_recursion - returns lenght of string
 * @s: string
 *
 * Return: lenght of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (_strlen_recursion(s + 1) + 1);
	}
}
