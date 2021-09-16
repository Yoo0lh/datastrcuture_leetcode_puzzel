/*******************************************************************
*   calculat the height of binary tree using recurtion 
*   example :
*            input : 2  8  10  11  12  20  50 
*            output: height binary tree --> 4
*************************************************************************/

#include <stdio.h>
#include "binary.h"


int height(node *root)
{
    if (root == NULL)
        return (0);
    else
    {
        int left = height(root->left);
        int right = height(root->right);
        if (left > right)
            return(left + 1);
        else
            return (right + 1);
    }    
}
int main()
{
    node *p = creat(50);
    insert(p,20);
    insert(p,100);
    insert(p,60);
    insert(p,8);
    insert(p,70);
    insert(p,2);
    inorder(p);
    printf("\n");
    printf("height binary tree --> %d\n", height(p));
    return (0);
}