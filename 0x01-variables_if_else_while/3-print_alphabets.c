#include <stdio.h>
#include <stdlib.h>
/**
 * main - This function uses putchar() to print the alphabets
 * in lowercase and then in uppercase followed by a new line.
 *
 * Return: Always (0) success.
 */

int main(void)
{
	int i, j;

	for (i = 97; i <= 122; i++)
	       putchar(i);
	for (j = 65; j <= 90; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
