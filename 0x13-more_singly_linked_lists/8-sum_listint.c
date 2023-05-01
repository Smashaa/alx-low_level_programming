#include "lists.h"

/*
*sum_listint - returns the sum of all the data (n) of a linked list
*@head: pointer to the head of the linked list
*This function calculates the sum of all the data values (n) in a linked list.
*It traverses the list by following the pointers
*to each successive node, adding up
*the value of each node's data field as it goes.
*Once it reaches the end of the list,
*it returns the total sum.
*/
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}

