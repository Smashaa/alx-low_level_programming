#include "lists.h"

/**
*free_listint2 - Frees a linked list and sets the head to NULL
*@head: A pointer to the head of the linked list
*This function frees all the nodes of a linked list, starting from the head.
*It takes a pointer to the head of the list
*as input and sets the head to NULL once
*all nodes have been freed. This ensures that the list
*is properly freed and can be safely
*reused or deleted.
*This function is similar to free_listint(),
*but it also sets the head pointer to NULL
*to indicate that the list is empty.
*This is useful when you want to completely release
*the list from memory and make sure that
*any future attempts to use the list will result
*in a clean slate.
*This function should be used when you no longer need a
*linked list and want to free its memory
*to avoid memory leaks. However,
*be careful not to use this function if any other pointers
*are still pointing to nodes in the list,
*as this would result in undefined behavior.
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}

