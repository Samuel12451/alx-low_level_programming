#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 time
 *
 * Return Void
 */

void print_alphabet_x10(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		int ch;

		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);

		}
		_putchar('\n');
	}


}
