#include <stdio.h>

/**
 * main - print the letters of the alphabet
 *
 * print the letters of the alphabet in lower then in uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a, b;

	a = 97;
	b = 65;

	while (a < 123)
	{
		putchar(a);
		a++;
	}

	while (b < 91)
	{
		putchar(b);
		b++;
	}

	putchar(10);

	return (0);
}
