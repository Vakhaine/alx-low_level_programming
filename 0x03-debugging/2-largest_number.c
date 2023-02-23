#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int x, int y, int z)
{int largest;

if (x > y && x > z)
{
largest = x;
}
else if (y > z)
{
largest = y;
}
else
{
largest = z;
}

return (largest);
}
