#include "main.h"

/**
 * _puts: This function prints out a string to the console.
 *
 * Return: Always (0) success.
 */
void _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
}
