#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end
 * of a linked list
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the new element. NUll if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *inv_node;

	(void)inv_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	inv_node = *head;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (inv_node->next != NULL)
		{
			inv_node = inv_node->next;
		}
		inv_node->next = new_node;
	}

	return (*head);
}

