#include <unistd.h>

/**
 * _putchar - This function writes a character to stdout.
 *
 * Return: Always (0) success.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

