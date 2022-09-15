#include "main.h"

/**
 * more_numbers - prints numbers 0-14 ten times
 *
 * Return: void
 */

void more_numbers(void)
{
	int nw, a, again, reach;

	a = '0';
	again = 0;
	reach = '9';

	for (nw = 0; nw < 10; nw++)
	{
		while (again < 2)
		{
			while (a <= reach)
			{
				if (reach == '4')
					_putchar('1');
				_putchar(a);
				a++;
			}
			again++;
			reach = '4';
			a = '0';
		}
		_putchar('\n');
		again = 0;
		a = '0';
		reach = '9';
	}
}
