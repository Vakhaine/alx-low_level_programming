#include "main.h"

/**
 * print_number - a function that prints an integer.
 * @n: input number
 * Return: void, digit
 */
void print_number(int n)

{
	int digit, divisor, sign = 1;

	if (n < 0)
	{
		sign = -1;
	}

	divisor = 1;
	while (n / divisor >= 10 || n / divisor <= -10)
	{
		divisor *= 10;
	}

	if (sign == -1)
	{
		_putchar('-');
	}

	while (divisor > 0)
	{
		digit = (n / divisor) % 10;
		if (digit < 0)
		{
			digit = -digit;
		}
		_putchar(digit + '0');

		divisor /= 10;
	}
}
