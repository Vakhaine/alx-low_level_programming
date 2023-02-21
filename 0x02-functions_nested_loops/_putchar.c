#include <main.h>
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * &c prints the output
 *
 * on error -1 is returned
 * Return: 1 on Success 
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
