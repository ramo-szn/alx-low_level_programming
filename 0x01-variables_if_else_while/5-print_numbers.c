#include <stdio.h>
/**
 * main - program that prints all single digits starting from zero
 * Return: 0 (success)
 */
int main(void)
{
	int number = 0;

	while (number < 10)
	{
		putchar(number + '0');
		number++;
	}
	putchar('\n');
	return (0);
}
