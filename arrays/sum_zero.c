//Print all subarrays with 0 sum;
//Input:  { 4, 2, -3, -1, 0, 4 };
// Output : { -3, -1, 0, 4 };
#include <stdio.h>

void    sumzero(int s[], int n)
{
    for(int i = 0; i < n ; i++)
    {
        int sum = 0;
        for(int j = i; j < n; j++)
        {
            sum += s[j]; 
            if (sum == 0)
            printf("sum  = 0 | {%d..%d}\n", i, j);
        }
    }
}
int main()
{
    int c[] = { 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 };
    sumzero(c, sizeof(c)/sizeof(c[0]));
    return (0);
}