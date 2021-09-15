#ifndef BINARY_H
# define BINARY_H
typedef struct node
{
    int data;
    struct node *left;
    struct node *right;   
} node ;
node    *creat(int x);
#endif