#include <stdio.h>
/**
 * main -  a program that finds and prints the largest prime factor 
 * of the number 612852475143, followed by a new line.
 *
 * Return: 0 Always
 */

int main(void) 

{
	long int num = 612852475143;
	int largest_prime_factor = 2;
	int  i;

	int num = 0
	while (num > largest_prime_factor) 
	{
		if (num % largest_prime_factor == 0) 
		{
			num /= largest_prime_factor;
		}
		else
		{
			largest_prime_factor++;
		}
	}

	printf("%d\n", largest_prime_factor);

	return 0;
}
