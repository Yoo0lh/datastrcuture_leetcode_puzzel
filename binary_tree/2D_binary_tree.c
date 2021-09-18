#include <stdio.h>
#include "binary.h"
void    printf2D(node *root, int s)
{
    if(root == NULL)
        return ;
    s += COUNT;
    printf2D(root->right, s);
    printf("\n");
    int k = COUNT;
    for(int i = k; i < s; i++)
        printf(" ");
    printf("%d\n", root->data);
    printf2D(root->left, s);
}
int main()
{
    node * elem = creat(1);
    elem->left = creat(2);
    elem->right = creat(3);

    elem->left->left = creat(4);
    elem->left->right = creat(5);
    elem->right->left = creat(6);
    elem->right->right = creat(7);

    elem->left->left->left =  creat(8);
    elem->left->left->right = creat(9);
    elem->left->right->left = creat(10);
    elem->left->right->right = creat(11);
    elem->right->left->left = creat(12);
    elem->right->left->right = creat(13);
    elem->right->right->left = creat(14);
    elem->right->right->right = creat(15);
    printf2D(elem, 0);
    return (0);
}

