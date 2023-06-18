#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * Descripton: Write a program that prints the alphabet in lowercase,
 * except 'q' and 'e' followed by a new line. Only puchar function
 * can be used and only twice.
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
