#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

struct ListNode {
int val;
struct ListNode *next;
};
int count_len(struct ListNode *head)
{
	int count = 0;
	while (head != NULL)
	{
		count++;
		head = head->next;
	}
	return count;
}

struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
	struct ListNode *tmp = (struct ListNode *)malloc (sizeof(struct ListNode));
	struct ListNode *prev = NULL;
	tmp = head;
	int count = count_len(tmp);
	if (n == count)
		return head->next;
	int i = 0;
	while (i < count - n)
	{
		prev = tmp;
		i++;
		tmp = tmp->next;
	}
	if (tmp->next == NULL){
		prev->next = NULL;
	}
	else
	{
		prev->next = tmp->next;
	}
	return head; 
}
int main()
{
	struct ListNode *tmp1 = (struct ListNode *)malloc (sizeof(struct ListNode));
	struct ListNode *tmp2 = (struct ListNode *)malloc (sizeof(struct ListNode));
	struct ListNode *tmp3 = (struct ListNode *)malloc (sizeof(struct ListNode));
	tmp1->val = 1;
	tmp2->val = 2;
	tmp3->val = 3;
	tmp1->next = tmp2;
	tmp2->next = tmp3;
	tmp3->next = NULL;
	tmp1 = removeNthFromEnd(tmp1, 3);	
	while (tmp1)
	{ 
		printf("%d->", tmp1->val);
		tmp1 = tmp1->next;
	}
	return 0;
}
