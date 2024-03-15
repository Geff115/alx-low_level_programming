#include <stdio.h>
#include <stdlib.h>
/**
 * main - This function uses putchar to print the alphabets in lowercase
 * all alphabets but q and e will be printed.
 *
 * Return: Always (0) success.
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if ((i == 101) || (i == 113))
		{
			continue;
		}
		putchar(i);
	}
	putchar('\n');
	return (0);
}
