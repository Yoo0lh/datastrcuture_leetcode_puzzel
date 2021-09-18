#ifndef LINKED_H
# define LINED_H
struct node
{
    int value;
    struct node *next;
} ;
void    insert(struct node **item, int value);
#endif