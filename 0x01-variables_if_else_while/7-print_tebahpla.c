#include <stdio.h>
#include <stdlib.h>
/**
 * main - This function uses putchar to print the alphabets in
 * reversed order, all in lowercase.
 *
 * Return: Always (0) success.
 */

int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
