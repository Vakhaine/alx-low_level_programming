#include <stdio.h>

/**
 * main -  a program that prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * The numbers must be separated by comma, followed by a space.
 *
 * Using the standard library
 *
 * Return: 0 (Success)
 */

int main(void)

{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (count = 0; count < 51; count++)
	{
		printf("%lu", fib2);

		sum = fib1 + fib2;

		fib1 = fib2;
		fib2 = sum;

		if (count <= 49 && count != 51)
		/* add comma and space after except the last one*/
		printf(", ");

		else
			printf("\n ");
	}
	return (0);
}
