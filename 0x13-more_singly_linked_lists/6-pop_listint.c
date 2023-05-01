#include "lists.h"

/**
*pop_listint - Removes the first node of a linked list
*@head: A pointer to the head of the linked list
*Return: The integer value of the removed node, or 0 if the list is empty
*This function removes the first node of a
*linked list and returns its integer value.
*It takes a pointer to the head of the list
*as input and returns the integer value of
*the removed node. If the list is empty, the function returns 0.
*This function is useful when you want to
*remove the first node of a linked list and obtain
*its value. This operation is commonly used in
*data structures and algorithms, such as queues,
*where the first element inserted is also the first to be removed.
*Note that this function also frees the
*memory used by the removed node, so it should not be
*used if you need to keep a reference to that node or its value.
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}

