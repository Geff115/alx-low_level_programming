#include "main.h"

/**
 * _isupper - This function checks if a character is an uppercase.
 * It returns a non-zero integer if it is, otherwise, it returns zero.
 *
 * Return: Either (0) or (1). success.
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	else
		return (0);
}

