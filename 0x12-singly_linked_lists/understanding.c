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
	
	/* ALWAYS INITIALIZE LIKE THIS */
	list_t *list = NULL;
	
    /* BOX 1 */
    list_t *n = malloc(sizeof(list_t));
    if (n == NULL)
    {
		printf("program dead");
        return (1);
    }
	n->number = 1;
	n->next = NULL;
    //link
    list = n;
	
	
    /* BOX 2 */
    n = malloc(sizeof(list_t));
    if (n == NULL)
    {
		printf("program dead");
		free(list);
		return 1;
    }
	n->number = 2;
	n->next = NULL;
    //link
	list->next = n;


    /* BOX 3 */
	n = malloc(sizeof(list_t));
    if (n == NULL)
    {
		printf("program dead");
        free(list->next);
		free(list);
		return 1;
    }
	n->number = 3;
	n->next = NULL;
    // link
    list->next->next = n;

	
	for (list_t *tmp = list; tmp != NULL; tmp = tmp->next)
	{
		
		printf("%i\n", tmp->number);
	}

	while (list != NULL)
	{
		list_t *tmp = list->next;
		free(list);
		list = tmp;
	}

    printf("Hello, Africa!\n");

}