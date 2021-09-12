#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 15

void    Merg(int s1[], int s2[], int n1 , int n2)
{
    if (n2 == n1)
        return ;
    int hl = (n1 + ((n2 - n1) >> 1));
    Merg(s1, s2, n1, hl);
    Merg(s1, s2, hl + 1, n2);

    int p = n1;
    int k = n1;
    int j = hl + 1;
    while (k <= hl && j <= n2)
    {
        if (s1[k] <= s1[j])
        {
            s2[p] = s1[k];
            p++;
            k++;
        }
        else 
        {
            s2[p] = s1[j];
            p++;
            j++;
        }
    }
    while (k <= hl)
    {
        s2[p] = s1[k];
        p++;
        k++;
    }
    for (int i = n1; i <= n2; i++)
    {
        s1[i] = s2[i];
    }
}
int     issorted(int s[])
{
    int p = s[0];
    for (int i = 1; i < N; i++)
    {
        if (p > s[i])
        {
            printf("falied");
            return (0);
        }
        p = s[i];
    }
    return 1;
}
int main()
{
    int c[N];
    int b[N];
    srand(time(NULL));
    for(int i = 0; i < N; i++)
    {
        c[i] = b[i] = (rand() % 100 ) - 50;
    }
    Merg(c, b, 0, N -1);
    if ( issorted(c))
    {
        for (int i = 0; i < N; i++)
        {
            printf("%d ", c[i]);
        }
    }
    return(0);
}