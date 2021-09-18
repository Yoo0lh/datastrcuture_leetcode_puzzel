#include <stdio.h>
#include <stdlib.h>
#include "linked.h"
void    insert(struct node **item, int value)
{
    struct node *elem = (struct node *)malloc(sizeof(struct node));
    elem->value = value;
    elem->next = *item;
    *item = elem;
}
// int main()
// {
//     struct node *item1 = NULL;
//     int c[] = {1, 2, 3, 4, 5};
//     int n = sizeof(c)/sizeof(c[0]);
//     for (int i = n -1; i >= 0; i--)
//         insert(&item1, c[i]);
//     while(item1 != NULL)
//     {
//         printf("%d ", item1->value);
//         item1 = item1->next;
//     }
//     return(0);
// }