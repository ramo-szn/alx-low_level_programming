#include <stdio.h>
/**
 * main - a program that prints the alphabet in lowercase in reverse
 * Return: 0 (success)
 */
int main(void)
{
	char lowercase;

	lowercase = 'z';
	while (lowercase >= 'a')
	{
	putchar(lowercase);
	lowercase--;
	}
	putchar('\n');
	return (0);
}
