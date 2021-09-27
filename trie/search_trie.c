#include "trie.h"
#include <stdio.h>
int search(struct trienode *root, char *s)
{
    if(root == NULL)
        return 0;
    struct trienode *tmp = root; 
    while(*s != '\0')
    {
        int index = *s - 'a';
        tmp = tmp->childe[index];
        if (tmp == NULL)
            return 0;
        s++;
    }
    return tmp->terminal;
}
// int main()
// {
//     struct trienode *root = newtrienode ();
//     insert (root, "hello");
//     insert (root, "hey");
//     insert (root, "conitchiwa");
//     insert (root, "conichiei");
//     insert (root, "boom");
//     int res = search (root, "hello");
//     printf("the word is exist ---> %d", res);
//     return 0;
// }