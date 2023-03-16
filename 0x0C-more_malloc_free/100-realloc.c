#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * _realloc - reallocates a memory block using malloc and free
  * @ptr:  pointer to the memory previsouly allocated by malloc
  * @old_size: size of the allocated memory for ptr
  * @new_size: new size of the new memory block
  *
  * Return: pointer to the newly allocated memory block
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)

{
	unsigned int i;
	char *ptr_new;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr_new = malloc(new_size);

		if (ptr_new == NULL)
			return (NULL);

		return (ptr_new);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	ptr_new = malloc(new_size);

	if (ptr_new == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
	{
		ptr_new[i] = ((char *) ptr)[i];
	}

	free(ptr);
	return (ptr_new);
}
