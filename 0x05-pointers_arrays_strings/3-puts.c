#include "main.h"

/**
 * _puts - This function prints a string followed by a new line to stdout.
 * @str: The string to be printed.
 */
void _puts(char *str)
{
	int i = 0;

	if (str == NULL)
		return;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
