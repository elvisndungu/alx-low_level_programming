#include "lists.h"
/**
 * listint_len - returns the number of elements in the linked list
 * @h: The head node
 * Return: The linked list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	size_t counter = 0;

	if (h == NULL)
	{
		printf("Nah uh");
		return (0);
	}
	for (temp = h; temp != NULL; temp = temp->next)
	{
		counter++;
	}

	return (counter);
}
