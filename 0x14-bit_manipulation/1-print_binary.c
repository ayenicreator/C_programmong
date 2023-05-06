#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: number to print.
 */
void print_binary(unsigned long int n)
{
	unsigned long int ab = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int curr = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (ab != 0)
	{
		if ((n & ab) !=0)
		{
			_putchar('1');
			curr = 1;
		}
		else if (curr == 1)
		{
			_putchar('0');
		}
		ab >>= 1;
	}
}
