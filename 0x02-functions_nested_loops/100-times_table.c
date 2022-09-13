#include "main.h"

/**
 * print_times_table - prints the times table
 * @a: integer for which the times table will be printed
 *
 * Description: prints the times table
 *
 * Return: void
 */

void print_times_table(int a)
{
	int i, j, result;

	if (a >= 0 && a < 15)
	{
		for (i = 0; i <= a; i++)
		{
			for (j = 0; j <= a; j++)
			{
				result = i * j;

				if (j == 0)
					_putchar('0');
				else if (result < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(result % 10 + '0');
				}
				else if (result >= 10 && result < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((result / 10) % 10 + '0');
					_putchar(result % 10 + '0');
				}
				else if (result > 99 && result < 1000)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(result / 100 + '0');
					_putchar((result / 10) % 10 + '0');
					_putchar(result % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
