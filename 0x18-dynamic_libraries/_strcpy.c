#include "main.h"

/**
 * _strcpy - This function copies thecontent of a string into another string.
 *
 * Return: A pointer to the copied string.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

