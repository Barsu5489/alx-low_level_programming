#include "lists.h"

/**
 * add_nodeint - Adds new node at beginning of list
 * @head: pointer to pointer of head of first
 * @n : integer
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_len *new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (Null);
	new_node->n = n;
	new_node->next = (*head);
	(*head) = newnode;

	return  (*head);
}
