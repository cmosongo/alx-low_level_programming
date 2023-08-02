#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: head of a list.
 *
 * Return: data on head
 */
int pop_listint(listint_t **head)
{
	int data_head_node;
	listint_t *head_node;
	listint_t *curr_node;

	if (*head == NULL)
		return (0);

	curr_node = *head;

	data_head_node = curr_node->n;

	head_node = curr_node->next;

	free(curr_node);

	*head = head_node;

	return (data_head_node);
}

