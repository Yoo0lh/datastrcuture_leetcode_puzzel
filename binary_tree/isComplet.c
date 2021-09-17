/***************************************************************************************
*   check if binary tree is complete or not
*   time complexity is O(n) following is the code for checking if binary tree is complet
*   example : 
*            input :  4  2  5  1  6  3  7  ==    1
*                                              /    \
*                                             2      3
*                                            / \    / \
*                                           4   5  6   7
*            output: SUCCSESS (is complete)
*****************************************************************************************/
#include <stdio.h>
#include "binary.h"
int count(node *node)
{
    if (node == NULL)
        return(0);
    else
        return(1 + count(node->left) + count(node->right));
}
int complet(node *node, int n, int n_node)
{
    if(node == NULL)
        return(1);
    if(n >= n_node)
        return(0);
    return(complet(node->left, 2 * n + 1, n_node) &&
           complet(node->right, 2 * n + 1, n_node));
}
int main()
{
    node * p = creat(1);
    p->left = creat(2);
    p->right= creat(3);
    p->left->left=creat(4);
    p->left->right=creat(5);
    p->right->left=creat(6);
    p->right->right=creat(7);
    int n = count(p);
    inorder(p);
    printf("\n");
    if(complet(p, 0, n))
        printf("SUCCSESS");
    else
        printf("FAILD");
    return (0);
}