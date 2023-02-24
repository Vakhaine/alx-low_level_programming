#include "main.h"

/**
 * print_triangle - a function that prints a triangle,
 * followed by a new line.
 * @size: sets the triangle sizze
 *
 * Return: void
 */

void print_triangle(int size)
{
	int m, n;

	if (size > 0)
		for (m = size; m > 0; m--)
		{
			for (n = 1; n <= size; n++)
				if (n >= m)
					_putchar('#');
				else
					_putchar(' ');
			_putchar('\n');
		}
	else
		_putchar('\n');
}
