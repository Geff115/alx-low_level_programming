#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node at a certain index
 * in a linked list
 * @head: A pointer to the first element in the list
 * @index: index of the node, starting at 0.
 *
 * Return: The nth node of the list, or NULL if the node can't be found.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i = 0;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}
