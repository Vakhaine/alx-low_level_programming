#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers.
 * nested loop to make grid
 *
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)

{
	int **box;
	int x, y;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	box = malloc(sizeof(int *) * height);

	if (box == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		box[x] = malloc(sizeof(int) * width);

		if (box[x] == NULL)
		{
			for (; x >= 0; x--)
			{
				free(box[x]);
			}
			free(box);
			return (NULL);
		}

	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			box[x][y] = 0;
	}
	return (box);
}
