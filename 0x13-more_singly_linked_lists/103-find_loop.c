#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *x = head;
	listint_t *z = head;

	if (!head)
		return (NULL);
	while (x && z && z->next)
	{
		z = z->next->next;
		x = x->next;
		if (z == x)
		{
			x = head;

		while (x != z)
		{
			x = x->next;
			z = z->next;
		}
		return (z);
		}
	}
	return (NULL);

}
