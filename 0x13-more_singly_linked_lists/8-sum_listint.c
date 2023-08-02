#include "lists.h"

/**
 * sum_listint - sums all the data of a linked list.
 * @head: head of a list.
 *
 * Return: sum of data.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}

