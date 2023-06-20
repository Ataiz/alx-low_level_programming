#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - print_alphabet block
 * Description: Write a function that prints the alphabet,
 * in lowercase, followed by a new line.
 * Prototype: void print_alphabet(void);
 * You can only use _putchar twice in your code
 *
 * Return: Always 0 (Succes)
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
