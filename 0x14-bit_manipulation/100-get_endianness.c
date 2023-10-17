#include "main.h"

/**
 * get_endianness - prog checks the endianness
 * @c: An integer set to 1
 * @v: A pointer of type char
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int c;
	char *v;

	c = 1;
	v = (char *)&c;
	return (*v);
}

