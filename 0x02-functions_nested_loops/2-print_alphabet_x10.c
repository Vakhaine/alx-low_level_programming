#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times lower case alphabet
 *
 */

void print_alphabet_x10(void)

{
	char low;
	int k = 0;

	while (k <= 9)
	{
	for (low = 'a'; low <= 'z'; low++)
	{
		_putchar(low);
	}
		_putchar('\n');
		k++;
	}
}

