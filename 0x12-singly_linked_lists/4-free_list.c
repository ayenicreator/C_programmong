#include <stdlib.h>
#include "lists.h"
/*
 * free_list - frees a linked list
 * @head: pointer to the head of the linked list
 *
 * This function frees each node in the linked list, starting from the head.
 * It frees the memory used by the string data of each node, and then frees the
 * memory used by the node itself.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		/* this code saves a pointer to the next node */
		temp = head->next;

		/* Free the memory used by the string data */
		free(head->str);

		/* Free the memory used by the node */
		free(head);

		/* Move to the next node */
		head = temp;
	}
}
