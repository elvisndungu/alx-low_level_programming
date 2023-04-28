#include "lists.h"

/*
 * print_list - function that prints all the elements of a list_t list.
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
//    int counter = 0;

    if(h == NULL)
        printf("[0] (nil)");

    printf("this is the str guy %s", h->str);


    return (0);
}
