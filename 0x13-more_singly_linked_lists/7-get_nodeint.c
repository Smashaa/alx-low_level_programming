#include "lists.h"

/*
*get_nodeint - returns the nth node of a linked list
*@head: pointer to the head of the linked list
*@index: index of the node to retrieve
*This function retrieves the node at the specified index of a linked list.
*If the index is invalid
*(i.e. negative or greater than the length of the list),
*the function returns NULL. Otherwise,
*it traverses the list until it reaches the
*specified index and returns a pointer to the node at that position.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}


