#include "lists.h"
#include <stdarg.h>
/**
 * free_list - frees list
 * @head: head node
 *
 * Return: Nada, void
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		free(head->str);
		head = head->next;
		free(tmp);
	}
}
