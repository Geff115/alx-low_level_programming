#include "main.h"

/**
 * _isdigit - This function checks if a character is a
 * digit by it's ASCII value, if it is, it returns 1,
 * otherwise, it returns 0.
 *
 * Return: Either (0) or (1).
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}

