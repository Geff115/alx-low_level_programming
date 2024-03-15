#include <stdio.h>
#include <stdlib.h>
/**
 * main - This function uses putchar to print the different combinations
 * of two digits.
 *
 * Return: Always (0) success.
 */

int main(void)
{
	int i, j;

	for (i = 48; i < 58; i++)
	{
		for (j = i + 1; j < 58; j++)
		{
			putchar(i);
			putchar(j);
			if (i < 56)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

