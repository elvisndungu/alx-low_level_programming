#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node: appends a node to a linked list :)
 * @head: first node or a null one
 * @str: string/date to put in our node
 * Return: new_node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	/* string that will be used in our node */
	char *new_str = malloc(strlen(str) + 1);
	
	/* initialize new temp node */
	list_t *new_node = malloc(sizeof(list_t));
	list_t *tmp = *head;
	
	/* TEMPORARLY NODE */
	if (new_node == NULL || head == NULL)
	{
		free(new_node);
		free(new_str);
		printf("program dead");
		return NULL;
	}
	new_str = strdup(str);
	new_node->str = new_str;
	new_node->len = strlen(str);
	new_node->next = NULL;
	
	/* APPENDING TIME */
	if (tmp == NULL)
	{ /* if head is null then we haven't started */
		*head = new_node;
		return new_node;
		
	}
	
	while (tmp != NULL)
	{
		if (tmp->next == NULL)
		{
			tmp->next = new_node;
			return new_node;
		}
		tmp = tmp->next;
	}
	free(new_node);
	free(new_str); // free the allocated memory
	return new_node;
}
