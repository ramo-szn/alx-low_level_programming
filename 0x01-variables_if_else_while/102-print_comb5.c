#include <stdio.h>
/**
 * main -  a program that prints all combinations of two two-digits
 * Return: 0 (success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = i; j <= 99; j++)
	{
		int num1 = i / 10;
		int num2 = i % 10;
		int num3 = j / 10;
		int num4 = j % 10;

		putchar(num1 + '0');
		putchar(num2 + '0');
		putchar(' ');
		putchar(num3 + '0');
		putchar(num4 + '0');

		if (i != 98 || j != 99)
		{
		putchar(',');
		putchar(' ');
		}
	}
	}
	putchar('\n');
	return (0);
}

