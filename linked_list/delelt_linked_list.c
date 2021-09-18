#include <stdio.h>
#include "linked.h"
void    delelt(struct node **item)
{
    while (*item != NULL)
        *item = (*item)->next;
}
int main()
{
    struct node *item = NULL;
    int c[] = {1, 2, 3, 4, 5};
    int len = sizeof(c)/sizeof(c[0]);
    for(int i = len - 1; i >= 0; i--)
        insert(&item, c[i]);
    while(item != NULL)
    {
        printf("%d ", item->value);
        item = item->next;
    }
    delelt(&item);
    while(item != NULL){
        printf("===");
        item = item->next;
    }
    printf("SUCCSESS");
    return(0);
}
