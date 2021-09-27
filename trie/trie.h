#ifndef TRIE_H
# define TRIE_H
#include <stdbool.h>
#define CHARS 256
#define alphbet 26

struct trienode{
    struct trienode *childe[alphbet];
    bool terminal;
};
struct trienode *newtrienode();
void insert(struct trienode *root, char *s);
void    display(struct trienode *root, char s[], int lev);
int search(struct trienode *root, char *s);
#endif