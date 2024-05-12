#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * main - This function prints all possible combinations of
 * two two-digit numbers ranging from 0 to 99.
 *
 * Return: Always 0 success.
 */
int main(void)
{
	int digit_1, digit_2, digit_3, digit_4;
	int two_digit1, two_digit2;

	for (digit_1 = 48; digit_1 <= 57; digit_1++)
	{
		for (digit_2 = 48; digit_2 <= (digit_1 == 57 ? 56 : 57); digit_2++)
		{
			two_digit1 = (digit_1 - 48) * 10 + (digit_2 - 48);
			for (digit_3 = 48; digit_3 < 58; digit_3++)
			{
				for (digit_4 = 48; digit_4 < 58; digit_4++)
				{
					two_digit2 = (digit_3 - 48) * 10 + (digit_4 - 48);
					if (two_digit2 > two_digit1)
					{
						putchar(digit_1);
						putchar(digit_2);
						putchar(' ');
						putchar(digit_3);
						putchar(digit_4);
						if (!(digit_1 == 57 && digit_2 == 56 && digit_3 == 57 && digit_4 == 57))
							putchar(',');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
