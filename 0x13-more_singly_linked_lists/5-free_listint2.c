#include "lists.h"

/**
 * free_listint2 - clears linke list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listint2(listint_t **head)
{
	listint_t *prev_node;
	listint_t *curr_node;

	if (head != NULL)
	{
		curr_node = *head;
		while ((prev_node = curr_node) != NULL)
		{
			curr_node = curr_node->next;
			free(prev_node);
		}
		*head = NULL;
	}
}

