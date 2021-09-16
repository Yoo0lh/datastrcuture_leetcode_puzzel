/*******************************************************************
*   insert node in binary tree iterativley
*   time complexity : O(h), wher h is height of binary search
*   tree. in worst case the height is equal to number of nodes.
*************************************************************************/

#include <stdio.h>
#include "binary.h"
node    *insert(node *new, int x)
{
    if (new == NULL)
        return(creat(x));
    else if (x > new->data)
        new->right = insert(new->right, x);
    else
        new->left = insert(new->left, x);
    return(new);
}
void    inorder(node *nod)
{
    if (nod != NULL)
    {
        inorder(nod->left);
        printf(" %d ", nod->data);
        inorder(nod->right);
    }

}
/*
int main()
{
    node *root ;
    root = creat(50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
    inorder(root);
   
    return(0);
}
*/