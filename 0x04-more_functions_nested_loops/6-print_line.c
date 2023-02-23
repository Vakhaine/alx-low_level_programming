#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal.
 *
 * @n:  print '_' for n number of times
 * Return: a straight line
 */
void print_line(int n)
{
	int sl;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (sl = 1; sl <= n; sl++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
