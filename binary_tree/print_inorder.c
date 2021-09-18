#include <stdio.h>
#include "binary.h"
void    inorder(node *nod)
{
    if (nod != NULL)
    {
        inorder(nod->left);
        printf(" %d ", nod->data);
        inorder(nod->right);
    }

}