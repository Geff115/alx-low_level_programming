#include "main.h"

/**
 * _isalpha - This function checks if a given character
 * is an alphabetic character.
 * It returns a non-zero value if it is, otherwise it returns zero.
 *
 * Return: Always (1) if it is an alphabet and (0) if it isn't.
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
		return (0);
}

