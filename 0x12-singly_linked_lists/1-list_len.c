#include "lists.h"

/**
 * list_len - number of elements in a linked list_t list
 * @h: pointer to a list_t
 *
 * Return: number of elements in the list_t
 */

size_t list_len(const list_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{
		h = h->next;
		cnt++;
	}
	return (cnt);
}
