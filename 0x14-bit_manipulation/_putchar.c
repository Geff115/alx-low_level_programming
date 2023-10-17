#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes a character to the standard output.
 * @c: The character to be printed.
 * Return: 1 on success.
 * when error is encounted, return -1.
 */

int _putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

