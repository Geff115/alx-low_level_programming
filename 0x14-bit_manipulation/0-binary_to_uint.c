#include "main.h"

/**
 * binary_to_unit - This function converts a binary number to unsigned int.
 * @b: Is a pointer to a string of 0 and 1 characters.
 * @v: An integer variable.
 * @un_var: An unsigned int variable.
 */

unsigned int binary_to_unit(const char *b)
{
	unsigned int un_var = 0;
	int v;

	if (!b)
		return (0);
	for (v = 0; b[v]; v++)
	{
		if (b[v] < '0' || b[v] > '1')
			return (0);
		un_var = 2 * un_var + (b[v] - '0');
	}
	return (un_var);
}

