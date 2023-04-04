#include "lists.h"

/**
 * pop_listint -  deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: pointer to the first element in the linked list
 *
 * Return: ideleted data inside the elements
 */

int pop_listint(listint_t **head)
{
	if (head == NULL || *head == NULL)
    return (0);

  int digit = (*head)->n;
  listint_t *temp = (*head)->next;
  free(*head);
  *head = temp;

  return (digit);
}
