#include "main.h"

/**
 * _strlen - This function calculates the length of
 * a string and returns the counter.
 *
 * Return: Always (0) success.
 */
int _strlen(char *s)
{
	int counter = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		counter += 1;
		i++;
	}
	return (counter);
}

