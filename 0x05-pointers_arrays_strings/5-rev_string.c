#include "main.h"

/**
 * rev_string - reverse string
 * @str: string
 * Return: void
 */

void rev_string(char *str)
{
	int i, max, half;
	char first, last;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	max = i - 1;
	half = max / 2;
	while (half >= 0)
	{
		first = str[max - half];
		last = str[half];
		str[half] = first;
		str[max - half] = last;
		half--;
	}
}
