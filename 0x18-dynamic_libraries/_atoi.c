#include "main.h"

/**
 * _atoi - This function converts a character to an integer
 *
 * Return: Always (0) success.
 */
int _atoi(char *s)
{
	int i = 0;
	int result = 0;

	while (s[i] != '\0')
	{
		if ('0' <= s[i] && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
		}
		i++;
	}
	return (result);
}
