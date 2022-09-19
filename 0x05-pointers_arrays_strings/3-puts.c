#include "main.h"

/**
 * _puts - prints string
 * @st: string
 * Return: void
 */

void _puts(char *st)
{
	int i = 0;

	str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
	while (st[i] != '\0')
	{
		_putchar(st[i]);
		i++;
	}

	_putchar('\n');
}
