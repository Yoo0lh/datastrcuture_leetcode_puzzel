/*******************************************************************
*   delete node 
*   example : input :      10
*                        /    \         
*                      20     30
*                                \
*                                40
*             
*             output:        10
*                           /   \             
*                          40    30
*
* 
*************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "binary.h"

node *delete(node *root,  int value)
{
    //search for the item
    if (root == NULL)
        return (NULL);
    if (value > root->data)
       root->right = delete (root->right, value);
    else if ( value < root->data)
        root->left = delete (root->left, value);
    else 
    {
        //no children
        if(root->left == NULL && root->right == NULL)
        {
            free(root);
            return(NULL);
        }
        //one child
        else if (root->left == NULL || root->right == NULL)
        {
            node *tmp;
            if (root->left == NULL)
                tmp = root->right;
            else
                tmp = root->left;
            free(root);
            return(tmp);
        }
        //two children
        else{
            node *tmp = min(root->right);
            root->data = tmp->data;
            root->right = delete(root->right, tmp->data);
        }
    }
    return(root);
}
int main()
{
    node *root = creat(10);
    insert(root, 20);
    insert(root, 30);
    insert(root, 40);
    printf("befor ===>");
    inorder(root);
    printf("\nafter ===>");
    delete(root, 20);
    inorder(root);
}