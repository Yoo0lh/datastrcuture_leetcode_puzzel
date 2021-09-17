/*******************************************************************
*   delet binary tree using recurtion 
*   time complexity the above iterative solution is O(n), where n is 
*   total number of node in the binary tree
*
*
* 
*************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "binary.h"
void    deletbinaryTree(node *root)
{
    if (root == NULL)
        return ;
    deletbinaryTree(root->left);
    deletbinaryTree(root->right);
    free(root);    
}
int main()
{
    node *p = creat(50);
    insert(p, 40);
    insert(p, 60);
    insert(p, 30);
    insert(p, 10);
    insert(p, 15);
    inorder(p);
    printf("\n");
    deletbinaryTree(p);
    p = NULL;
    inorder(p);
    printf("SUCSESS");
    return(0);
}