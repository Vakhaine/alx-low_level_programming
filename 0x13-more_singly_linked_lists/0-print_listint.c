#include "lists.h"

/**
 * print_listint - function that prints all the elements
 * of a listint_t list.
 * @h: parameter of listint_t type
 * in the linked list to print
 *
 * Return: Number of the node
 */

size_t print_listint(const listint_t *h)
{
	size_t digit = 0;

	for (; h != NULL; h = h->next, digit++)
		printf("%d\n", h->n);
	return (digit);

}
