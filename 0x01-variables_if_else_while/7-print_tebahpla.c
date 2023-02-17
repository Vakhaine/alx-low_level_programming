#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the lowercase alphabet in reverse
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter); /* Print the current letter */
		letter--; /* Move to the previous letter */
	}

	putchar('\n'); /* Print a new line at the end */
	return (0);
}
