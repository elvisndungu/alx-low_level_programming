#include "lists.h"
/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: The head of node
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
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
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
			continue;
		}
		printf("[%i] %s\n", temp->len, temp->str);
	}

	return (counter);
}
