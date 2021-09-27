#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "trie.h"

struct trienode *newtrienode()
{
    struct trienode *newnode = (struct trienode *)malloc(sizeof (struct trienode));
    for(int i = 0; i < alphbet; i++)
        newnode->childe[i] = NULL;

    return newnode ;
}
void insert(struct trienode *root, char *s)
{
    struct trienode *tmp = root;
    int len = strlen(s);
    int i;
    for(i = 0; i < len; i++){
        int index = s[i] - 'a';
        if (tmp->childe[index] == NULL)
            tmp->childe[index] = newtrienode();
        tmp = tmp->childe[index];
    }
    tmp->terminal = true;
}
bool isleaf(struct trienode *root)
{
    return (root->terminal != false);
}
void    display(struct trienode *root, char s[], int lev)
{
    if(isleaf(root))
    {
        s[lev] = '\0';
        printf("%s\n",s);
    }
    int i;
    for(i = 0; i < alphbet; i++)
    {
        if(root->childe[i])
        {
            s[lev] = i + 'a';
            display(root->childe[i], s, lev + 1);
        }
    }
}
// int main()
// {
//     char s[20];
//     struct trienode *node = NULL;
//     node = newtrienode();
//     insert(node, "hello");
//     insert(node, "allo");
//     insert(node, "alli");
//     insert(node, "mam");
//     insert(node, "pip");
//     int lev = 0;
//     display(node, s, lev);
//     return 0;
// }
//=============================================================
// void printtrie_rec(struct trienode *root, unsigned char *prefix, int len)
// {
//     unsigned char newprefix[len + 1];
//     memcpy(newprefix, prefix, len);
//     newprefix[len + 1] = 0;
//     if(root->terminal)
//     {
//         printf("word: %s\n", prefix);
//     }
//     for(int i = 0; i < alphbet; i++){
//         if (root->childe[i] != NULL){
//             newprefix[len] = i;
//             printtrie_rec(root->childe[i], newprefix, len+1);
//         }
//     }
// }
// void    printtrie(struct trienode *root)
// {
//     if (root == NULL){
//         printf("FAILDE");
//         return ;
//     }
//     printtrie_rec(root, NULL, 0);
// }