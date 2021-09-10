
//Merge two arrays by satisfying given constraints;
//example : 
// input s1 : { 0, 2, 0, 3, 0, 5, 6, 0, 0 };
//       s2 : { 1, 8, 9, 10, 15 };
// output   : { 1, 2, 3, 5, 6, 8, 9, 10, 15 };
#include <stdio.h>

void    merge(int s1[], int s2[], int n, int m)
{
    int p = 0;
    int tmp;
    if (n == 0 || n < m)
        return ;
    //merg the elment of s2 int s1 replace non value by the element of s2; 
    for (int i = 0; i < n; i++)
    {
        if (s1[i] == 0){
            s1[i] = s2[p];
            p++;
        }
    }
    //sort the s1
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (s1[i] > s1[j])
            {
                tmp = s1[i];
                s1[i] = s1[j];
                s1[j] = tmp;
            }
        }
    }
    
}
int main()
{
    int c [] =  { 0, 2, 0, 3, 0, 5, 6, 0, 0 };
    int b[] = { 1, 8, 9, 10, 15 };
    int len1 = sizeof(c)/sizeof(c[0]);
    int len2 = sizeof(b)/sizeof(b[0]);

    merge(c, b, len1, len2);
    for(int i = 0; i < len1; i++)
    {
        printf("%d ", c[i]);
    }
}
