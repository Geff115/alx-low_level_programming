#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int v, bit_count = 0;
	unsigned long int cr;
	unsigned long int ex_or = n ^ m;

	for (v = 63; v >= 0; v--)
	{
		cr = ex_or >> v;
		if (cr & 1)
			bit_count++;
	}

	return (bit_count);
}

