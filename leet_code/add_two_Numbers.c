/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

#include <stdio.h>
#include <stdlib.h>
struct ListNode {
    int val;
    struct ListNode *next;
};
struct ListNode  *newnode(int data){
    struct ListNode *newNode = (struct ListNode *)malloc(sizeof(struct ListNode));
    newNode->val = data;
    newNode->next = NULL;
    return newNode;
}
void   creat (struct ListNode **elem, int data)
{  
    struct ListNode *newNode = newnode(data);
    newNode->next = (*elem);
    (*elem) = newNode;
}
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode *tmp , *res =  NULL;
    struct ListNode *prev = NULL;
    int s = 0;
    int c = 0;
    while (l1 != NULL || l2 != NULL )
    {
        s = c + (l1 ? l1->val : 0) + (l2 ? l2->val : 0);
        c = (s >= 10 ) ? 1 : 0;
        s = s % 10;
        tmp = newnode(s);
        if(res == NULL)
            res = tmp;
        else 
            prev->next= tmp;
        prev = tmp;
        if(l1)
            l1 = l1->next;
        if(l2)
            l2 = l2->next;
    }
    if(c > 0)
        tmp->next = newnode (c);
    return res;
}
int main()
{
    struct ListNode *l1 = NULL;
    struct ListNode *l2 = NULL; 
    struct ListNode *res= NULL;
    creat (&l1, 2);
    creat (&l1, 4);
    creat (&l1, 3);
    creat (&l2, 5);
    creat (&l2, 6);
    creat (&l2, 4);
    res = addTwoNumbers(l1, l2);
    while(res != NULL)
    {
        printf("%d ", res->val);
        res = res->next;
    }
    return(0);
}