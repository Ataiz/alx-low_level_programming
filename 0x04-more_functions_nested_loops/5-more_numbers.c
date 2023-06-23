#include <stdio.h>
#include "main.h"
/**
 * more_numbers - more_numbers block
 * Description: Write a function that prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 *
 * Prototype: void more_numbers(void);
 * You can only use _putchar three times in your code
 *
 * Return: nil
 */
void more_numbers(void)
{
	int n, m;

	for (n =  0; n < 10; n++)
	{
		for (m = 0; m <= 14; m++)
		{
			if (m > 9)
			{
				_putchar((m / 10) + '0');
			}
			_putchar((m % 10) + '0');
		}
		_putchar('\n');
	}
}
