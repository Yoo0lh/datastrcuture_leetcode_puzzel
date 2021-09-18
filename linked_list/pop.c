#include <stdio.h>  
#include <stdlib.h>
#include "linked.h"
int pop(struct node **elem)
{
    if(*elem  == NULL)
        return (-1);
    struct node *p = *elem;
    int res = p->value;
    (*elem) = (*elem)->next;
    free(p);
    return(res);
}
int main()
{
    struct node *elem = NULL;
    int c[] = {1,2,3,4};
    int len = sizeof(c)/sizeof(c[0]);
    for(int i = 0; i < len; i++)
        insert(&elem, c[i]);
    int res = pop(&elem);
    printf("the pop %d\n", res);
    return (0);
}
