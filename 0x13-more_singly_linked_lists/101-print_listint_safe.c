#include "lists.h"
/**
 * print_listint_safe - function that prints a linked list with a loop safely.
 * @head: pointer to the first node of the linked list
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp = NULL;
	const listint_t *last_node = NULL;
	size_t counter = 0;
	size_t new_node;

	temp = head;
	while (temp)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		counter++;
		temp = temp->next;
		last_node = head;
		new_node = 0;
		while (new_node < counter)
		{
			if (temp == last_node)
			{
				printf("-> [%p] %d\n", (void *)temp, temp->n);
				return (counter);
			}
			last_node = last_node->next;
			new_node++;
		}
		if (!head)
			exit(98);
	}
	return (counter);
}
