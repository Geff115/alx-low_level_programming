#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: A pointer to the first element in the list
 *
 * Return: The sum of all the data of a linked list listint_t.
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
