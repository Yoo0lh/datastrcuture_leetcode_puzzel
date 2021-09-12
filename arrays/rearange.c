//rearrange an array with alternate high and low elements   |
//examples :                                                |
//          input : {1, 2, 3, 4, 5, 6, 7};                  |
//          output: {1, 3, 2, 5, 4, 7, 6};                  |
//                                                          |
//          input : {6, 9, 2, 5, 1, 4};                     |  
//          output: {6, 9, 2, 5, 1, 4};                     |
//==========================================================
#include <stdio.h>

void    rearange(int s[], int n)
{
    int tmp;
    for (int i = 1; i < n; i+=2)
    {
        if (s[i] < s[i - 1]){
            tmp = s[i];
            s[i] = s[i - 1];
            s[i - 1] = tmp;
        }
        if ((i + 1 < n) && s[i] < s[i + 1]){
            tmp = s[i];
            s[i] = s[i + 1];
            s[i + 1] = tmp;
        }
    }
}
int main()
{
    int c[] =  { 9, 6, 8, 3, 7 };
    int len = sizeof(c)/sizeof(c[0]);
    rearange(c, len);
    for (int i = 0; i < len;  i++)
        printf("%d ", c[i]);
    return(0);
}