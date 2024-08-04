#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: A pointer to the first node in the list
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	listint_t *temp;
	int diff;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}

	}
	*h = NULL;
	return (length);
}
