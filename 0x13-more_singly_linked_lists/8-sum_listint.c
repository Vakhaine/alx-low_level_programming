#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: first node in the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	for (temp = head; temp != NULL; temp = temp->next)
	{
		sum += temp->n;
	}
	return (sum);
}
