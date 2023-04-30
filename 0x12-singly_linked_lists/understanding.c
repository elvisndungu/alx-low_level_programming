#include <stdio.h>
#include <stdlib.h>

/* NODE */
typedef struct list_s
{
    /* data */
//    char *str;
//    unsigned int len;
    int number;
    /* data */

    /* link */
    struct list_s *next;
    /* link */

} list_t;
/* NODE */


int main()
{
    /* BOX 1 */
    list_t *list = NULL;
    list_t *n = malloc(sizeof(list_s));

    if (n != NULL)
    {
        n->number = 1;
        n->next = NULL;
    }
    //link
    list = n;

    /* BOX 2 */
    list_t *n = malloc(sizeof(list_s));
    if (n != NULL)
    {
        n->number = 2;
        n->next = NULL;
    }
    //link
    list->next = n;

    /* BOX 3 */
    list_t *n = malloc(sizeof(list_s));
    if (n != NULL)
    {
        n->number = 3;
        n->next = NULL;
    }
    // link
    list->next->next = n;




    printf("Hello, Africa!\n");

}