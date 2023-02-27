#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd, last n characters n = (length_of_the_string - 1) / 2
 * @str: input
 * void
 */
void puts_half(char *str)
{
	int a, n, t;

	t = 0;

	for (a = 0; str[a] != '\0'; a++)
		t++;

	n = (t / 2);

	if ((t % 2) == 1)
		n = ((t + 1) / 2);

	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}

