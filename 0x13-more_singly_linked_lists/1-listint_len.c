#include "lists.h"
/**
 * listint_len - return number of elements
 * @h: pointer to header
 * Return:count
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *n = h;
	size_t count = 0;

	while (n != NULL)
	{
		count++;
		n = h->next;
	}
	return (count);
}
