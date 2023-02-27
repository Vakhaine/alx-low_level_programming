#include "main.h"

/**
 * print_rev - prints a string, in reverse,
 * followed by a new line.
 *
 * @s: String printed out
 *
 * void
 */

void print_rev(char *s)

{
	int hot_rev = 0;
	int red;

	while (*s != '\0')
	{
		hot_rev++;
		s++;
	}
	s--;
	for (red = hot_rev; red > 0; red--)
	{
		_putchar(*s);
	s--;
	}
	_putchar('\n');
}
