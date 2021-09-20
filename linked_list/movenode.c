/*******************************************************************
*   move the head of linked list to undert list  
*   exmxaple : 
*           inpute : 1-->2-->3-->NULL
*                    4-->5-->6-->NULL
*           output : 4-->1-->2-->3-->NULL
*   time comlexity for this solution is O(1);
*************************************************************************/

#include <stdio.h>
#include "linked.h"
void    movenode(struct node **elem1, struct node **elem2)
{
    struct node *new;
    if(*elem1 == NULL || *elem2 == NULL)
        return ;    
    new  = *elem2;
    *elem2 = (*elem2)->next;
    new->next = *elem1;
    *elem1 = new;
}
int main()
{
    struct node *elem1 = NULL;
    struct node *elem2 = NULL;
    int a[] = {1,2,3};
    int b[] = {4,5,6};
    int len = sizeof(a)/sizeof(a[0]);
    for(int i = len -1; i >= 0; i--)
    {
        insert (&elem1, a[i]);
        insert(&elem2, b[i]);
    }
    movenode(&elem1, &elem2);
    while(elem1)
    {
        printf ("%d-->", elem1->value);
        elem1 = elem1->next;
    }
    printf("NULL");
    return (0);
}