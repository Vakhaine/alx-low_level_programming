#include "main.h"

/**
 * set_bit - sets a bit at a given index to 1
 * @n: pointer to the number to change
 * @index: index of the bit to set to 1
 *
 * Return: 1 for success, -1 for failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int success = 1;
	unsigned long int mask = 1;

	if (index > 63)
		success = -1;
	else
		*n |= (mask << index);

	return (success);
}
