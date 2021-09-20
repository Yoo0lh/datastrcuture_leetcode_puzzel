/*******************************************************************
*   split nodes of linked list to two 
*   given a list, split it inot two sublests
*   time complexity of the above solution is O(n);
*   example : input : 1-->2-->3-->4-->-->5-->NULL
*             output: split1 = 1-->2-->3-->NULL;
*                     split2 = 4-->5-->NULL;
*
*   NOTE : you can use pythontutor to understan whats goig on 
*************************************************************************/

#include <stdio.h>
#include "linked.h"
int len_linked(struct node *elem)
{
    int count  = 0;
    while (elem)
    {   
        count++;
        elem = elem->next;
    }
    return (count);
}
void    split(struct node *elem, struct node **split1, struct node **split2)
{
    struct node *tmp;
    int len = len_linked(elem);
    if(len < 2)
    {
        *split1 = elem;
        *split2 = NULL;
        return ;
    }
    tmp = elem;
    for(int i = 0; i < (len -1) /2; i++)
        tmp = tmp->next;
    *split1 = elem;
    *split2 = tmp->next;
    tmp->next = NULL;
}
int main()
{
    struct node *elem = NULL;
    struct node  *split1 = NULL;
    struct node *split2 = NULL;
    int c[] = {1,2,3,4,5};
    int len = sizeof(c)/sizeof(c[0]);
    for(int i = len - 1; i >= 0; i--)
        insert(&elem, c[i]);
    split(elem, &split1, &split2);
    printf ("split 1\n");
    while(split1)
    {
        printf ("%d-->", split1->value);
        split1 = split1->next;
    }
    printf ("NULL");
    printf ("\nsplit 2\n");
    while (split2)
    {
        printf("%d-->", split2->value);
        split2 = split2->next;
    }
    printf ("NULL");
    return (0);
}