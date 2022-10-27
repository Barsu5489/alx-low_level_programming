#include "lists.h"

/**
 * add_nodeint - Adds new node at beginning of list
 * @head: pointer to pointer of head of first
 * @n : integer
 */

listint_t *add_nodeint(listint_t **head, const int n)

{

	listint_t *new_node;

	new_node = (listint_t *) malloc(sizeof(listint_t));
	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = *head;
	}
	else

		return (NULL);
	if (*head != NULL)
		new_node->next = *head;
		*head = new_node;
	return (new_node);

}
