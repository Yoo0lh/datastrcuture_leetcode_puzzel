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
int main()
{
    node *p;
    p = creat(50);
    insert(p, 10);
    insert(p, 13); 
    insert(p, 60);
    insert(p, 3);
    //inorder(p);
    while (p != NULL)
    {   p = p->left;
        printf("%d ", p->data);
        p = p->right;
    }
    return(0);
}