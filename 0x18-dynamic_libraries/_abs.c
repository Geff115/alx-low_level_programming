#include "main.h"

/**
 * _abs - This function checks the absolute value of a digit.
 * if it is negative, it returns a negative value. If it is positive,
 * it returns a positive number. If it is zero, it returns zero.
 *
 * Return: Either (0), (-n), or (n).
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else if (n > 0)
		return (n);
	else
		return (0);
}
