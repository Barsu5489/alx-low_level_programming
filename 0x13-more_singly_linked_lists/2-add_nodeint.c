#include "lists.h"

/**
 * *add_nodeint - Adds new node at beginning of list
 * @head: pointer to pointer of head of first
 * @n : integer
 *
 * Return: new node
 */

listint_t *add_nodeint(listint_t **head, const int n)

{
	listint_t *new_node;

	new_node = (listint_t *) malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
