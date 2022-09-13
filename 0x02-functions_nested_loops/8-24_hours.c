#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Description: prints every minute of the day
 *
 * Return: void
 */

void jack_bauer(void)
{
	int hrs_1, hrs_2, min_3, min_4, hrs_t;

	hrs_t = 58;
	hrs_1 = '0';
	while (hrs_1 < '3')
	{
		if (hrs_1 == '2')
		{
			hrs_t = '4';
		}
		hrs_2 = '0';
		while (hrs_2 < hrs_t)
		{
			min_3 = '0';
			while (min_3 < '6')
			{
				min_4 = '0';
				while (min_4 < 58)
				{
					_putchar(hrs_1);
					_putchar(hrs_2);
					_putchar(':');
					_putchar(min_3);
					_putchar(min_4);
					_putchar('\n');
					min_4++;
				}
				min_4 = '0';
				min_3++;
			}
			min_3 = '0';
			hrs_2++;
		}
		hrs_2 = '0';
		hrs_1++;
	}
}
