#include "main.h"

int _strlen_recursion(char *s);
int helper_palindrome(char *s, int len);

/**
 *_strlen_recursion - A function to obtain the length of the string s
 * @s: string
 * Return: the length of string s
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}

/**
 * is_palindrome - A function that checks if s is a palindrome string
 * @s: string
 * Return: 1 if is string is a palindrome or 0 in otherwise
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (len <= 1)
		return (1);
	return (helper_palindrome(s, len));
}

/**
 * helper_palindrome - A function with a revesed string
 * @s: string
 * @len: integer
 * Return: A reverse string
 */
int helper_palindrome(char *s, int len)
{
	if (len <= 1)
		return (1);
	else if (*s == *(s + len - 1))
	{
		return (helper_palindrome(s + 1, len - 2));
	}
	else
		return (0);

}
