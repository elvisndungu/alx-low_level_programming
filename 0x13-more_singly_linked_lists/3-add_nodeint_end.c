#include "lists.h"

/**
 * add_nodeint_end -
 * @head: Head node
 * @n: data
 * Return: the node address
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp_node = *head;
	listint_t *new_node = malloc(sizeof(listint_t));

	new_node->n = n;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (temp_node != NULL)
		{
			if (temp_node->next == NULL)
			{
				temp_node->next = new_node;
				return (new_node);
			}

			temp_node = temp_node->next;
		}

	}

	return (new_node);
}
