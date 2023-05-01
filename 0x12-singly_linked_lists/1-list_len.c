#include "lists.h"
/**
 * list_len - frees elements
 * @h: head node
 * Return: the number of elements in a linked
 */
size_t list_len(const list_t *h)
{
	const list_t *tmp;
	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}

	for (tmp = h; tmp != NULL; tmp = tmp->next)
	{
		count++;
	}
	return (count);
}
