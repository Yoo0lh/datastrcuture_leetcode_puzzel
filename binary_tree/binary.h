#ifndef BINARY_H
# define BINARY_H
# define COUNT 10;
typedef struct node
{
    int data;
    struct node *left;
    struct node *right;   
} node ;
node    *creat(int x);
node    *insert(node *new, int x);
node *min(node *root);
void    inorder(node *nod);

#endif