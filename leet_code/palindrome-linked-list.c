/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
struct ListNode {
    int val;
    struct ListNode *next;
};
void revers(struct ListNode **head){
    struct ListNode *prev = NULL;
    struct ListNode *curr = *head ;
    struct ListNode *nest = NULL;
    while (curr != NULL){
        nest = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nest;
    }
    *head = prev;
}
int count_len(struct ListNode *node)
{
    int count = 0;
    while(node)
    {
        count++;
        node = node->next;
    }
    return count;
}
void insert(struct ListNode **head, int data){
    struct ListNode * new = (struct ListNode *)malloc(sizeof(struct ListNode));
    new->val = data; 
    new->next = (*head);
    (*head) = new;
}
bool isPalindrome(struct ListNode* head){
    struct ListNode *tmp; 
    int len = count_len(head);
    int j = 0;
    int i = len / 2;
    int *c = (int*)malloc(sizeof(int) * i + 1);
    int *b = (int*)malloc(sizeof(int) * i + 1);
    while(j < i)
    {
        c[j] = head->val; 
        head = head->next;
        j++;
    }
    j = 0;
    while(i < len)
    {
        b[j] = head->val;
        head = head->next;
        j++;
        i++; 
    }
    i = len / 2 ;
    j = 0;
    int k = i;
    while (c[j] == b[le] && j < len /2)
    {
        j++;
        len--;
    }
     printf("i =%d ---- len =%d\n" ,i, len);
    if (i == 0)
        return true;
    else 
        return false;
}
int main()
{
    struct ListNode *node = NULL;
    int c[] = {1,2,2,1};
    int len = sizeof(c)/sizeof(c[0]);
    for (int i = 0; i < len; i++)
        insert(&node, c[i]);
    struct ListNode * tmp = node; 
    while(tmp != NULL )
    {
        printf("%d ", tmp->val); 
        tmp = tmp->next;
    }
    printf ("\n--->%d\n", isPalindrome(node));
    return 0;
}
// bool isPalindrome(struct ListNode* head){
//     int i = 0;
//     int sum1 = 0; 
//     int sum2 = 0;
//     int len = count_len(head);
//     if (len == 1)
//         return true;
//     while(i < len / 2)
//     {
//         sum1 = sum1 + head->val;
//         head = head->next;
//         i++;
//     }
//     if (len % 2 == 1){
//         sum1 = sum1 + head->val;
//     }
//     while (i < len){
//         sum2 = sum2 + head->val;
//         head = head->next;
//         i++;
//     }
//     printf("%d --- %d", sum1, sum2);
//     if(sum1 == sum2 )  
//         return true;
//     else 
//         return false;
// }