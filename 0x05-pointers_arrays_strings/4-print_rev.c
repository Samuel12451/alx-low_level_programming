#include "main.h"

/**
 * print_rev - prints string backwards
 * @str: string
 * Return: void
 */

void print_rev(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		putchar(str[i]);
		i--;
	}
	putchar('\n');
}
