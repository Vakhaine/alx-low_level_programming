#include "main.h"

/**
 * print_sign - is a function that prints the sign of a number
 * @n: Character being checked
 * Return: 1 and prints + for n > 0, 0 for n is 0, -1 for n < 0.
 */

int print_sign(int n)

{
if (n > 0)
	{
	_putchar(43);
	return (1);
	}
else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
else
	{
	_putchar(48);
	return (0);
	}
}
