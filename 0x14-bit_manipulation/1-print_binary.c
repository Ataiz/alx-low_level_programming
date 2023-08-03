#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: unsigned interger
*/
void print_binary(unsigned long int n)
{
	unsigned int bit = 1 << 31;
	unsigned int flag = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (bit)
	{
		if ((n & bit) != 0)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag == 1 && (n & bit) == 0)
		{
			_putchar('0');
		}
		bit >>= 1;
	}
}
