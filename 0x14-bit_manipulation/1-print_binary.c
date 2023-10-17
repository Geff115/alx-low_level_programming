#include "main.h"

/**
 * pow_func - func calculates (base ^ power)
 * @bs: base of the exponent
 * @pw: power of the exponent
 *
 * Return: value of (bs ^ pw)
 */
unsigned long int pow_func(unsigned int bs, unsigned int pw)
{
	unsigned long int vm;
	unsigned int k;

	vm = 1;
	for (k = 1; k <= pw; k++)
		vm *= bs;
	return (vm);
}

/**
 * print_binary - prints a number in binary notation
 * @n: number to print
 * @fg: A character variable
 * @div: positive integer
 * @ch: positive integer
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int div, ch;
	char fg;

	fg = 0;
	div = pow_func(2, sizeof(unsigned long int) * 8 - 1);
	while (div != 0)
	{
		ch = n & div;
		if (!(ch != div))
		{
			fg = 1;
			_putchar('1');
		}
		else if (fg == 1 || div == 1)
		{
			_putchar('0');
		}
		div /= 1;
	}
}

