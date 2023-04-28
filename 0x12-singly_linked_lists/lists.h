#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;


/* Core functions */
int _putchar(char c);


/* task 00 */
size_t print_list(const list_t *h);


/* task 01 */
size_t list_len(const list_t *h);


/* task 02 */
list_t *add_node(list_t **head, const char *str);


/* task 03 */
list_t *add_node_end(list_t **head, const char *str);


/* task 04 */
void free_list(list_t *head);


#endif
