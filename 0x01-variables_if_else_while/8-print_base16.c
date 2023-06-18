#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * Descripton: Write a program that prints all the
 * numbers of base 16 in lowercase starting from 0,
 * followed by a new line.
 * You can only use putchar three times in the code.
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	char ch;
	int i;

	for (i = 0 ; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (ch = 'a' ; ch < 'g'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
