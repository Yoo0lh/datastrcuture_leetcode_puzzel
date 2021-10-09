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
void    insert(struct ListNode **head, int value){
    struct ListNode *newnode = (struct ListNode *) malloc(sizeof(struct ListNode));
    newnode->val = value;
    newnode->next = *head;
    *head = newnode;
}
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    struct ListNode *new = NULL;
    if (l1 == NULL)
        return l2;
    else if(l2 == NULL)
        return l1;
    if(l1->val <= l2->val){
        new = l1;
        new->next = mergeTwoLists(l1->next , l2);
    }
    else{
        new = l2;
        new->next = mergeTwoLists(l1, l2->next);
    }
    return new;
}
int main()
{
    struct ListNode *node = NULL;
    struct ListNode *node2 = NULL;
    struct ListNode *tmp = NULL;
    int c[] = {1,2,3,4,5};
    int b[] = {1,4,5,10};
    int len = sizeof(c)/sizeof(c[0]);
    for(int i = len - 1; i >= 0; i--){
        insert(&node, c[i]);
        insert(&node2, b[i]);
    }
    tmp = mergeTwoLists(node, node2);
    while(tmp){
        printf("%d-->", tmp->val);
        tmp = tmp->next;
    }
    return 0;
}