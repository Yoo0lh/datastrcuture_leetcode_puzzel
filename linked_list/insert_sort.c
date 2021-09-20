/*******************************************************************
*   insert a node to its correct sorted position in a sorted linked 
*   list
*   time complexity of this solution is O(n);
*   example : 
*           input : 1-->2-->3-->4-->NULL
*                 : 0
*           output: 0-->1-->2-->3-->4--NULL
* 
*************************************************************************/

#include <stdio.h>
#include "linked.h"
void    insertsort(struct node **elem, struct node *new)
{
    struct node *tmp;
    if(*elem == NULL || (*elem)->value >= new->value)
    {
        new->next = *elem;
        *elem = new ;
        return ;
    }
    tmp = *elem;
    while (tmp->next != NULL && tmp->next->value < new->value)
        tmp = tmp->next;
    new->next = tmp->next;
    tmp->next = new ;
}
int main()
{
	int i ;
    struct node *elem = NULL;
    int c[] = {1,2,3,4};
    int len = sizeof(c)/sizeof(c[0]);
    for(int i = len - 1; i >= 0; i--)
        insert(&elem, c[i]);
    struct node *elem1;
    insert(&elem1, 0);
    insertsort(&elem, elem1);
    while(elem)
    {
        printf("%d-->", elem->value);
        elem = elem->next;
    }
    printf("NULL");
    return (0);
}
