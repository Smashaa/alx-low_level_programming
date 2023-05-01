#include "lists.h"

/**
*free_listint - Frees a linked list
*@head: A pointer to the head of the linked list
*This function frees all the nodes of a linked list, starting from the head.
*It takes a pointer to the head of the list as input
*and does not return anything.
*It iterates over each node in the list
*and frees its memory using the free() function.
*Once all nodes have been freed, the head pointer is set to NULL
*to indicate that the list is empty.
*This function should be used when you no longer need a linked list
*and want to free its memory
*to avoid memory leaks. However, be careful not
*to use this function if any other pointers
*are still pointing to nodes in the list,
*as this would result in undefined behavior.
*/
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

