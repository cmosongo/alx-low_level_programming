#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * of a linked list.
 * @head: head of a list.
 * @index: index of the list where the node is
 * deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *prev_node;
	listint_t *next;

	prev_node = *head;

	if (index != 0)
	{
		i = 0;

		while (i < index - 1 && prev_node != NULL)
		{
			prev_node = prev_node->next;
			i++;
		}
	}

	if (prev_node == NULL || (prev_node->next == NULL && index != 0))
	{
		return (-1);
	}

	next = prev_node->next;

	if (index != 0)
	{
		prev_node->next = next->next;
		free(next);
	}
	else
	{
		free(prev_node);
		*head = next;
	}

	return (1);
}

