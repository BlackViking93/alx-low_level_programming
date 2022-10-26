#include "lists.h"

/**
* sum_listint - a function that returns the sum of all the
* data (n) of a listint_t linked list
* @head: the head of the list
* Return: returns the sum of all the n's
*/
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
