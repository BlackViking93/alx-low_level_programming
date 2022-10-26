#include "lists.h"

/**
* free_listint2 - a function that frees a listint_t list, sets head to NULL
* @head: a pointer to the head of the list
* Return: returns nothing
*/
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	*head = NULL;
}
