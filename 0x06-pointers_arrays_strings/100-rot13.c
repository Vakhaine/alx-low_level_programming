#include "main.h"
#include <stdio.h>

/**
 * *rot13 - encodes a string using rot13.
 * @s: pointer to string parameters
 *
 * Return: *s
 */

char *rot13(char *s)

{
	int x;
	int y;
	char data_1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char data_rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; s[x] != '\0'; x++)
	{
	for (y = 0; y < 52; y++)
	{
		if (s[x] == data_1[y])
		{
			s[x] = data_rot[y];

			break;
		}
	}
	}
	return (s);
}
