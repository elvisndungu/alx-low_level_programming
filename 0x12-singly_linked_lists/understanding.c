#include <stdio.h>
#include <stdlib.h>
#include<string.h>
//#include "lists.h"

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;


list_t *add_node(list_t **head, const char *str);
list_t *add_node(list_t **head, const char *str)
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
	strcpy(new_str, str);
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

int main()
{
	
	/* ALWAYS INITIALIZE LIKE THIS */
	list_t *head = NULL;
	
	add_node(&head, "Alexandro");
	add_node(&head, "Augustin");
	add_node(&head, "Bennett");
	add_node(&head, "Bilal");
	add_node(&head, "Chandler");
	add_node(&head, "Damian");
	add_node(&head, "Daniel");
	add_node(&head, "Dora");
	add_node(&head, "Electra");
	add_node(&head, "Gloria");
	add_node(&head, "Joe");
	add_node(&head, "John");
	add_node(&head, "John");
	add_node(&head, "Josquin");
	add_node(&head, "Kris");
	add_node(&head, "Marine");
	add_node(&head, "Mason");
	add_node(&head, "Praylin");
	add_node(&head, "Rick");
	add_node(&head, "Rick");
	add_node(&head, "Rona");
	add_node(&head, "Siphan");
	add_node(&head, "Sravanthi");
	add_node(&head, "Steven");
	add_node(&head, "Tasneem");
	add_node(&head, "William");
	add_node(&head, "Zee");
	
	
	/**
	 * PRINT LIST
	 */
	for (list_t *tmp = head; tmp != NULL; tmp = tmp->next)
	{
		// if the link is null
		printf("[%s] is my name \n", tmp->str);

		
	}

	while (head != NULL)
	{
		list_t *tmp = head->next;
		free(head);
		head = tmp;
	}

	printf("Hello, Africa!\n");

}