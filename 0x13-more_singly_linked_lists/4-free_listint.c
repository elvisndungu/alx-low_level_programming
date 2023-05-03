#include "lists.h"
/**
 * free_listint - Frees a list.
 *
 * @head: first node
 * Return: nothin, nada
 */
void free_listint(listint_t *head)
{
	listint_t *t, *t2;

	t = head;
	while (t != NULL)
	{
		t2 = t->next;
		free(t);
		t = t2;
	}
}
