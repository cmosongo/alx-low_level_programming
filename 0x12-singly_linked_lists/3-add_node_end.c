#include "lists.h"

/**
 * add_node_end - adds a new_node node at the end of a list_t list
 * @head: pointer to the address of the first node
 * @str: the value of the str field of the new_node node
 *
 * Return: head of the new_node list. Otherwise NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *new_node;

	if (head == NULL)
		return (NULL);

	temp = *head;

	/* create the new_node node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = (str == NULL) ? "(nil)" : strdup(str);
	new_node->len = (str == NULL) ? 0 : _strlen(str);
	new_node->next = NULL;

	/* if the list has no elements */
	if (temp == NULL)
	{
		*head = new_node;
		return (*head);
	}

	/* temperse to the end of the list */
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new_node;

	return (*head);
}

/**
 * _strlen - finds the length of a given string
 * @str: given string
 *
 * Return: length of str
 */
unsigned int _strlen(const char *str)
{
	unsigned int len = 0;

	while (*str)
	{
		len++;
		str++;
	}

	return (len);
}
