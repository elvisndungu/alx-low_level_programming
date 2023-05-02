#include "lists.h"
/**
 * print_listint - prints all elements in dis list
 * @h: The head node
 * Return: The linked list
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	size_t counter = 0;
	
	if (h == NULL)
	{
		printf("Nah uh");
		return (0);
	}
	for (temp = h; temp != NULL; temp = temp->next) {
		printf("%i\n", temp->n);
		counter++;
	}
	
	return (counter);
}
