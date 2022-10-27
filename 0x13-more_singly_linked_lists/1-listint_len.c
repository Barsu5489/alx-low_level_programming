#include "lists.h"
/**
 * listint_len - return number of elements
 * @h: pointer to header
 * Return:count
 */
 
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h !=NULL)
	{
		count ++;
		h->next;
	}
	return (count);
}
