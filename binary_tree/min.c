#include <stdio.h>
#include "binary.h"

node *min(node *root)
{
    if (root == NULL)
        return (NULL);
    else if (root->left != NULL)
        return(min (root->left));
    return(root);
}
// int main()
// {
//     node *root = creat(100);
//     insert(root, 20);
//     insert(root, 1);
//     insert(root, 50);
//     insert(root , 30);
//     insert(root, 10);
//     insert(root, 0);
//     printf("the minimum ====> %d\n", min(root)->data);
//     return(0);
// }