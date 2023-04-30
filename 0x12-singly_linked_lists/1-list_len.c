#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: The head node
 * Return: the number of elements in a linked
 */
size_t list_len(const list_t *h)
{
	const list_t *temp;
	size_t counter = 0;

	if (h == NULL)
	{
		return (0);
	}

	for (temp = h; temp != NULL; temp = temp->next)
	{
		counter++;
	}

	return (counter);

}
