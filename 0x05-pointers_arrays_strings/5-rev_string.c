#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: string printed out
 *
 * void
 */

void rev_string(char *s)

{
	char rev = s[0];
	int arr = 0;
	int i;

	while (s[arr] != '\0')
	{
	arr++;
	}
	for (i = 0; i < arr; i++)
	{
		arr--;
		rev = s[i];
		s[i] = s[arr];
		s[arr] = rev;
	}
}
