/*******************************************************************
*   pop operation in alinked list (delelt the head of linked list) 
*   exaple :
*           input : 1-->2-->3-->4-->NULL
*           output: pop valu is 1
*                   2-->3-->4-->NULL
*   time complexity of the pop operation is o(1)
*************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "linked.h"
int pop(struct node **item)
{
    struct node *tmp;
    if(*item == NULL)
        return (-1);
    tmp = *item;
    int res = tmp->value;
    *item = (*item)->next;
    free (tmp);
    return (res);
}
int main()
{
    int c[] = {1,2,3,4};
    struct node *item = NULL;
    int len = sizeof(c)/sizeof(c[0]);
    for(int i = len - 1 ; i >= 0; i--)
        insert(&item, c[i]);
    
    printf("pop value is %d \n", pop(&item));
    while(item != NULL)
    {
        printf("%d-->", item->value);
        item = item->next;
    }
    printf("NULL");
    return (0);
}