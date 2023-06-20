#include "main.h"
/**
 * main - main block
 * Description: Write a program that prints _putchar, followed by a new line.
 * The program should return 0
 *i
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int i;
	char ch[] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(ch[i]);
	}
		_putchar('\n');

	return (0);
}
