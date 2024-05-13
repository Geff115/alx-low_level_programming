#include "main.h"

/**
 * print_rev - This function prints a string in reverse
 * @s: The string to be printed in reverse.
 */
void print_rev(char *s)
{
	int i = 0, str_length;

	if (s == NULL)
		return;
	while (s[i] != '\0')
		i++;
	str_length = i;
	for (i = str_length - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
