#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/* Function to print all the elements of a list_t list */
size_t print_list(const list_t *h);

/* Function to return the number of elements in a linked list_t list */
size_t list_len(const list_t *h);

/* Function to add a new node at the beginning of a list_t list */
list_t *add_node(list_t **head, const char *str);

/* Function to add a new node at the end of a list_t list */
list_t *add_node_end(list_t **head, const char *str);

/* Function to free a list_t list */
void free_list(list_t *head);

/**
 * Function to print
 * "You're beat! and yet, you must allow, I bore my house upon my back!"
 * before the main function is executed
 */
void print_text(void) __attribute__ ((constructor));

#endif
