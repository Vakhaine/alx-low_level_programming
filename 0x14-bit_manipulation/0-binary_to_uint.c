#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int index;
	unsigned int decimalValue = 0;

	if (b == NULL)
		return (0);

	for (index = 0; b[index] != '\0'; index++)
	{
		if ((b[index] >= '0' && b[index] <= '1') == 0)
			return (0);
		decimalValue = 2 * decimalValue + (b[index] - '0');
	}

	return (decimalValue);
}
