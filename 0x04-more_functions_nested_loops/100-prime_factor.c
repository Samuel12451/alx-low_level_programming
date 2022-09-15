#include <stdio.h>
#include "main.h"

/**
 * main - prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0
 */

int main(void)
{
	long int p = 612852475143;
	long int q = p;
	long int d = 2;

	while (q != d)
	{
		if (q % d == 0)
		{
			q = q / d;
		}
		else
		{
			d++;
		}
	}

	printf("%li\n", q);

	return (0);
}
