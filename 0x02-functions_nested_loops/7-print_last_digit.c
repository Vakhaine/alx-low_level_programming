#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number.
 * @n: the character that holds the number to be printed
 * Return: last digit of n
 */

int print_last_digit(int n)

{
	int last_number;

	last_number = n % 10;
	if (last_number < 0)
	{
		last_number = last_number * -1;
	}
	_putchar(last_number + '0');
	return (last_number);
}
