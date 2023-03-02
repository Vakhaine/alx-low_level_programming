#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer parameters
 * Return: void
 */

void print_number(int n)
{
	unsigned int o;

	o = n;

	if (n < 0)
	{
		_putchar('-');
		o = -n;
	}

	if (o / 10 != 0)
	{
		print_number(o / 10);
	}
	_putchar((o % 10) + '0');
}

