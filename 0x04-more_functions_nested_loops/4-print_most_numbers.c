#include "main.h"

/**
 * print_most_numbers - a function that prints the numbers, from 0 to 9,
 * followed by a new line.
 *
 * Return: 0-9, does not print 2 and 4
 */
void print_most_numbers(void)
{
	int j;

	for (j = 0; j <= 9; j++)
	{
		if (j == 2 || j == 4)
			continue;
		else
			_putchar(j + '0');
	}
	_putchar('\n');
}
