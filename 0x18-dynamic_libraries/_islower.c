#include "main.h"

/**
 * _islower - This function checks if a given character is lowercase
 * if the character is a lowercase, it returns a non-zero integer, else,
 * it returns zero.
 *
 * Return: A non zero integer like (1). Success.
 */
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	else
		return (0);
}
