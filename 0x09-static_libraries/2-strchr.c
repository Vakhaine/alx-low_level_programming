#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 * @s: input (variable parameter)
 * @c: input (variable paraameter)
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int m = 0;

	for (; s[m] >= '\0'; m++)
	{
		if (s[m] == c)
			return (&s[m]);
	}
	return (0);
}

