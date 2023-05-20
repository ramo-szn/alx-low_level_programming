#include <stdio.h>
/**
 * main - program that prints the alphabet in lowercase, followed by a new line
 * Return: 0 (succes)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
		letter++;
	}
	putchar('\n');
	return (0);
}
