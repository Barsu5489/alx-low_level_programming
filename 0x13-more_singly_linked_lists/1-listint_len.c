#include "lists.h"
/**
 * listint_len - return number of elements
 * @h: pointer to header
 * Return:count
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *nth = h;
	size_t count = 0;

	while (nth != NULL)
	{
		count++;
		nth = nth->next;
	}
	return (count);
}
