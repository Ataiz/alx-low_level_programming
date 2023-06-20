#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - print_alphabet_x10 block
 * Description: Write a function that prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 * Prototype: void print_alphabet_x10(void);
 * You can only use _putchar twice in your code
 *
 * Return: Always 0 (Succes)
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char ch;

	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
