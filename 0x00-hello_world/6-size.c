#include <stdio.h>
/**
 * main - This prints the size of various types of programs in my computer
 * Return: 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int g;
	long long int n;
	float f;

printf("Size of a char: %lu  byte(s)\n", (unsigned long)sizeof(c));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(g));
printf("Size of a long long int: %lu  byte(s)\n", (unsigned long)sizeof(n));
printf("Size of a float: %lu  byte(s)\n", (unsigned long)sizeof(f));
return (0);
}

