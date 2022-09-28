#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: string
 * Return: pointer
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	
		putchar('\n');
	
	else
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
}
