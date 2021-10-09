#include <stdio.h>
#include <stdlib.h>
#include  "linked.h"
void    Revers(struct node **head)
{
    struct node *new = NULL; 
    struct node *cur = *head;
    struct node *next = NULL;
    while (cur != NULL){
        next = cur->next;
        cur->next = new;
        new = cur; 
        cur = next;
    }
    *head = new;
}
int main()
{
    struct node *head = NULL;
    int c[] = {1,2,3,4,5};
    int len = sizeof(c)/sizeof(c[0]);
    for (int i = len - 1; i >= 0; i--)
        insert(&head, c[i]);
    Revers(&head);
    while(head != NULL){
        printf ("%d-->", head->value);
        head = head->next;
    }
    printf("NULL");
    return 0;
}