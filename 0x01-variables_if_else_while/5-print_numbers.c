#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * Descripton: Write a program that prints all single
 * digit numbers of base 10 starting from 0,
 * followed by a new line.
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10; i++)
	{
		printf("%i", i);
	}
	putchar('\n');

	return (0);
}
