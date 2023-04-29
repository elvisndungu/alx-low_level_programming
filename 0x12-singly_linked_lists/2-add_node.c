#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - appends a node to a linked list :)
 * @head: first node or a null one
 * @str: string/date to put in our node
 * Return: new_node or null
 */
list_t *add_node(list_t **head, const char *str)
{
	/* string that will be used in our node */
	char *new_str = malloc(strlen(str) + 1);
	
	/* initialize new temp node */
	list_t *new_node = malloc(sizeof(list_t));

	/* TEMPORARLY NODE */
	if (new_node == NULL || head == NULL)
	{
		free(new_node);
		free(new_str);
		printf("program dead");
		return (NULL);
	}

	new_str = strdup(str);
	new_node->str = new_str;
	new_node->len = strlen(str);

	/* Inserting new node at the beginning of the list */
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
