#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * main - This function prints all possible combinations of three digits
 * using their ASCII values comparison.
 *
 * Return: Always 0 success.
 */
int main(void)
{
	int digit_1, digit_2, digit_3;

	for (digit_1 = 48; digit_1 < 58; digit_1++)
	{
		for (digit_2 = digit_1 + 1; digit_2 < 58; digit_2++)
		{
			for (digit_3 = digit_2 + 1; digit_3 < 58; digit_3++)
			{
				if (digit_1 < digit_2 && digit_2 < digit_3)
				{
					putchar(digit_1);
					putchar(digit_2);
					putchar(digit_3);
					if (digit_1 != 55 || digit_2 != 56 || digit_3 != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return(0);
}
