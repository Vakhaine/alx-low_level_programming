#include "main.h"

/**
 * print_alphabet - to print all alphabet in lower case
 *
 */

void print_alphabet(void)
{
	char alpha_low;

	for (alpha_low = 'a'; alpha_low <= 'z'; alpha_low++)

		_putchar(alpha_low);
	_putchar('\n');
}
