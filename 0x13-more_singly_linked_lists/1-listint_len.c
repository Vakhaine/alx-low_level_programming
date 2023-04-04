#include "lists.h"

/**
 * listint_len - function that returns the number of elements
 * in a linked listint_t list
 * @h: linked list of type listint_t
 *
 *
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t digit = 0;

	for (; h != NULL; h = h->next, digit++);
	return (digit);
}
