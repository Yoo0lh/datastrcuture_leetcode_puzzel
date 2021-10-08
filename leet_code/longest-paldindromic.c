#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX(a,b) ((a) > (b)) ? (a) : (b) 
char * longestPalindrome(char * s){
    int max = 1;
    int start =0;
    char *tmp;
    int len = strlen(s);
    int hight;
    int small;
    for(int i = 1; i < len; ++i)
    {
        hight = i;
        small = i - 1;
        while(small >= 0 && hight < len && s[small] == s[hight]){
            ++hight;
            --small;
        }
        ++small;
        --hight;
        if (s[small] == s[hight] && hight - small + 1 > max){
            start = small;
            max = hight - small + 1;
        }
        small = i - 1;
        hight = i + 1;
        while (small >= 0 && hight < len && s[small] == s[hight]){
            --small;
            ++hight;
        }
        ++small;
        --hight;
        if (s[small] == s[hight] && hight - small + 1 > max){
            start = small;
            max = hight - small + 1;
        }
    }
    tmp = (char *)malloc(sizeof(char) * max + 1);
    int g = 0;
    for (int i = start; i < start + max; i++)
        tmp[g++] = s[i];
    tmp[g] = '\0';
    return tmp;
}
int main()
{
    char c[] = "aacabdkacaa";
    char *p = longestPalindrome(c);
    printf("%s ", p);
    return 0;
}