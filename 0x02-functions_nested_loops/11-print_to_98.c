#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints numbers to 98
 * @m: starting integer
 *
 * Description: prints all natural number from n - 98
 *
 * Return: void
 */

void print_to_98(int m)
{
	if (m < 98)
	{
		while (m < 98)
		{
			printf("%d, ", m);
			m++;
		}
	}
	else if (m > 98)
	{
		while (m > 98)
		{
			printf("%d, ", m);
			m--;
		}
	}
	printf("98\n");
}
