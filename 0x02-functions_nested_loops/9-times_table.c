#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Description: prints the 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	int i, j, result, first, second;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;
			first = result / 10;
			second = result % 10;

			if (j == 0)
			{
				_putchar('0');
			}
			else if (result < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(second + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(first + '0');
				_putchar(second + '0');
			}
		}
		_putchar('\n');
	}
}
