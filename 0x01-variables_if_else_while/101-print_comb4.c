#include <stdio.h>
/**
 * main - a program that prints all possible different combinations of three digits
 * Return: 0 (success)
 */
int main(void)
{
	int i, k, j;

	for (i = 0; i < 10; i++)
	{
		for (k = i + 1; k < 10; k++)
		{
			for (j = k + 1; j < 10; j++)
			{
				putchar(i + '0');
				putchar(k + '0');
				putchar(j + '0');
				if (i != 7 || k != 8 || j != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
