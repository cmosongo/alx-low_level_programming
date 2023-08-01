#include "lists.h"
/**
 * print_list - prints the elements of a list
 * @h: pointer to list_t
 * If str == NULL, print [0] (nil)
 *
 * Return: number of nodes in list_t
 */

size_t print_list(const list_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] (nil)\n", h->len);

		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		cnt++;
	}
	return (cnt);
}
