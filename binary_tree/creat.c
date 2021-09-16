/*******************************************************************
*   creat a new node in binary tree 
*
*************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include "binary.h"
node    *creat(int x)
{
    node *p;
    p = (node *)malloc(sizeof(node));
    p->data = x; 
    p->left = NULL;
    p->right = NULL;
    return(p);
}
// int main()
// {
//     node *p ;
//     p  = creat(30);
//     printf("%d\n", p->data);
//}