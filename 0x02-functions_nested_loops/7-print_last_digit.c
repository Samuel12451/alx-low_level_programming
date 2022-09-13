#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @a: a is an integer
 *
 * Description: prints the last digit of a number
 *
 * Return: integer
 */

int print_last_digit(int a)
{
	int last = a % 10;

	if (a < 0)
		last = last * -1;

	_putchar(last + '0');

	return (last);
}
