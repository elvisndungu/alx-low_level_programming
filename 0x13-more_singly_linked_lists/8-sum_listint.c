#include "lists.h"
/**
 * sum_listint - Function
 *
 *
 * @head: pointer of type listint_t
 *
 * Return: returns sum, or 0 if empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
