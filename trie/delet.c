#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "trie.h"
bool    haschilde(struct trienode *root)
{
    for(int i = 0; i < alphbet; i++)
        if(root->childe[i] != NULL)
            return false;
    return true;
}
struct trienode *delete(struct trienode *root, char *s, int n)
{
    if (root == NULL)
        return NULL;
    int len = strlen(s);
    if (n == len)
    {
        if (root->terminal)
            root->terminal = false;
        if(haschilde(root))
        {
            free(root);
            root = NULL;
        }
        return root;
    }
    int key = s[n] - 'a';
    root->childe[key] = delete(root->childe[key],s, n + 1);
    if(haschilde(root) && root->terminal == false)
    {
        free(root);
        root = NULL;
    }
    return root;
}
int main()
{
    char s[20];
    //struct trienode *root2;
    struct trienode *root = newtrienode ();
    insert(root, "hello");
    insert(root, "hey");
    insert(root, "helli");
    insert(root, "pip");
    insert(root, "strang");
    delete(root, "hello", 0);
    display(root, s, 0);
    return 0;
}