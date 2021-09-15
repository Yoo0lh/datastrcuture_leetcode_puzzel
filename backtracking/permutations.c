/*******************************************************************
*   find all permutation of string using backstracking
*   example :
*            input : "abc";
*            output: abc acb bac bca cba cab
*************************************************************************/
#include <stdio.h>
#include <string.h>
void    permutation(char *s, int k, int n)
{
    char tmp;
    int len = strlen(s);
    if(k == n){
        for (int i = 0; i < len ; i++)
            printf("%c", s[i]);
        printf(" ");
        return ;
    }
    for(int i = k; i < n; i++){
        tmp = s[k];
        s[k] = s[i];
        s[i] = tmp;
        
        permutation(s, k + 1, n);

        tmp = s[k];
        s[k] = s[i];
        s[i] = tmp;
    }
}
int main()
{
    char c[] = {"abc"};
    int len = strlen(c);
    permutation(c, 0, len);
    return(0);
}