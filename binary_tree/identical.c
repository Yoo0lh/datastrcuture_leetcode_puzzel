/*******************************************************************
*   check if two binary trees are identical or not using recurtion 
*   example : 
*            input : tree1 =  10  20  40  100  4  50  3
*                    tree2 =  10  20  40  100  4  50  3
*            output: SUCCESS
*
*
*
*
*
* 
*************************************************************************/

#include <stdio.h>
#include "binary.h"
int identical(node *node1, node * node2)
{
    if (node1 == NULL && node2 == NULL)
        return (1);
    else
        return ((node1->data == node2->data) &&
                identical(node1->left, node2->left) &&
                identical(node1->right, node2->right));
    return(0);
}
int main(){
    node * p= creat(100);
    p->left = creat(20);
    p->right= creat(50);
    p->left->left = creat(10);
    p->left->right= creat(40);
    p->right->left= creat(4);
    p->right->right=creat(3);
    node *k = creat(100);
    k->left = creat(20);
    k->right= creat( 50);
    k->left->left = creat(10);
    k->left->right= creat(40);
    k->right->left= creat(4);
    k->right->right=creat(3);
    inorder(p);
    printf("\n");
    inorder(k);
    printf("\n");
    if (identical(p, k))
        printf("SUCCESS");
    else
        printf("FAILDE");
    return (0);
}