#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */

void free_listint2(listint_t **head)
{
	if (head != NULL && *head != NULL)
	{
		listint_t *temp;

		while (*head != NULL)
		{
			temp = (*head)->next;
			free(*head);
			*head = temp;
		}
	}
	*head = NULL;
}
