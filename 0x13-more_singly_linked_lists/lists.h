#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>


/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;


/* TASK 00 */
size_t print_listint(const listint_t *h);

/* TASK 01 */
size_t listint_len(const listint_t *h);

/* TASK 02 */
listint_t *add_nodeint(listint_t **head, const int n);

/* TASK 03 */
listint_t *add_nodeint_end(listint_t **head, const int n);

/* TASK 04 */
void free_listint(listint_t *head);

/* TASK 00 */
void free_listint2(listint_t **head);

/* TASK 00 */
int pop_listint(listint_t **head);

/* TASK 00 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);

/* TASK 00 */
int sum_listint(listint_t *head);

/* TASK 00 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);

/* TASK 00 */
int delete_nodeint_at_index(listint_t **head, unsigned int index);



size_t print_listint_safe(const listint_t *head);

size_t free_listint_safe(listint_t **h);

listint_t *find_listint_loop(listint_t *head);



#endif
