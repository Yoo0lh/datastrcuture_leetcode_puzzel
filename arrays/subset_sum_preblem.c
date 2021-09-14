/*******************************************************************
*   sybset sum preblem using recursive given a set od positive and an sum  
*   example : 
*            input : { 3, 1, 7, 8};
*            input : 12
*            output: SUCCSSES
*************************************************************************/

#include<stdio.h>
#include<stdbool.h>
bool subSet(int s[], int n, int sm )
{
    bool exist;
    bool notexist;
    if (sm == 0)
        return (true);
    if (n < 0 || sm < 0)
        return (false);
    exist = subSet(s, n -1, sm - s[n]);
    notexist = subSet(s, n - 1, sm);
    return(exist || notexist);
}
int main()
{
    int c[] ={ 3, 1, 7, 8};
    int len = sizeof(c)/sizeof(c[0]);
    int sm = 12;
    if (subSet(c, len, sm) == true)
        printf("SUCCSSES");
    else
        printf("FAILDE");
    return(0);
}