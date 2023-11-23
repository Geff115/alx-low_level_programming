#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - function converts a binary number to an unsigned int.
 * @b: pointer to a string containing a binary number
 *
 * Return: unsigned int with decimal value of binsry number, or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	int k;
	unsigned int un_num;

	un_num = 0;
	if (!(b != NULL))
		return (0);
	for (k = 0; b[k] != '\0'; k++)
	{
		if (b[k] != '0' && b[k] != '1')
			return (0);
	}
	for (k = 0; b[k] != '\0'; k++)
	{
		un_num *= 2;
		if (b[k] == '1')
			un_num += 1;
	}
	return (un_num);
}

