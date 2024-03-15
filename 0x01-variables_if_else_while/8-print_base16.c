#include <stdio.h>
#include <stdlib.h>
/**
 * main - This function prints all numbers in base 16
 * it uses putchar to write to stdout.
 *
 * Return: Always (0) success.
 */

int main(void)
{
	int i, j;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (j = 97; j < 103; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}

