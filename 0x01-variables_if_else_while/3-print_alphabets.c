#include <stdio.h>
/**
 * main - a program that prints the alphabet in lowercase then in uppercase
 * Return: 0 (success)
 */
int main(void)
{
	char lowercase;
	char uppercase;

	lowercase = 'a';
	while (lowercase <= 'z')
	{
	putchar(lowercase);
	lowercase++;
	}
	uppercase = 'A';

	while (uppercase <= 'Z')
	{
	putchar(uppercase);
	uppercase++;
	}
	putchar('\n');
	return (0);
}
