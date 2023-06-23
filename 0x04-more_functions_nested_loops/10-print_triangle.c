#include <stdio.h>
#include "main.h"
/**
 * print_triangle - print_triangle block
 * Description: Write a function that prints a triangle, followed by a new line
 *
 * Prototype: void print_triangle(int size);
 * You can only use _putchar function to print
 * Where size is the size of the triangle
 * If size is 0 or less, the function should print only a new line
 * Use the character # to print the triangle
 *
 * @size: int type
 *
 * Return: nil
 */
void print_triangle(int size)
{
	int row, column, i;

	if (size <= 0)
		_putchar('\n');
	for (row = 0; row < size; row++)
	{
		for (column = size - row; column > 1; column--)
			_putchar(' ');
		for (i = row + column; i >= 1; i--)
			_putchar('#');
		_putchar('\n');
	}
}
