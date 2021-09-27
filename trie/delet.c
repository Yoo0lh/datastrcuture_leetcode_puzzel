#include <stdio.h>
#include <stdlib.h>
#include "trie.h"
bool    haschilde(struct trienode *root)
{
    if (root == NULL)
        return false;
    for(int i = 0; i < alphbet; i++)
        if(root->childe[i] != NULL)
            return true; 
    return false;
}
struct trienode *delet_rec(struct trienode *root, char *s, bool *res)
{
    if (root == NULL)
        return false;
    if (s[0] != '\0')
    {
        if(root->terminal)
        {
            root->terminal = false;
            *res = true;
            if (haschilde(root) == false)
            {
                free(root);
                root = NULL; 
            }
        }
        return root;

    }
    root->childe[(int)s[0]] = delet_rec(root->childe[(int)s[0]], s + 1, res);
    if (*res && haschilde(root) == false && root->terminal == false)
    {
        free(root);
        root = NULL;
    }
    return root;
}
bool    delete(struct trienode **root, char *s)
{
    bool res = false ;
    if (*root == NULL)
        return false;

    *root = delet_rec(*root, s, &res);
    return res;
}
int main()
{
    bool res;
    char s[20];
    struct trienode *root = newtrienode ();
    insert(root, "hello");
    insert(root, "hey");
    insert(root, "pip");
    insert(root, "strang");
    res = delete(&root, "pip");
    if (res == false)
        printf("===FAILD====\n");
    else
        printf("===SUCCSESS===\n");
    display(root, s, 0);
    return 0;
}