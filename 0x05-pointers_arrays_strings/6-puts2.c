#include "main.h"

/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character, then a new line.
 *
 * @str: string
 *
 * void
 */

void puts2(char *str)

{
	char *k = str;
	int c  = 0;
	int t = 0;
	int i;

	while (*k != '\0')
	{
		k++;
		c++;
	}
	t = c - 1;
	for (i = 0; i <= t; i++)
	{
		if (i % 2 == 0)
	{
		_putchar(str[i]);
	}
	}
	_putchar('\n');
}

