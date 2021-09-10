//Write an efficient program to find the sum of contiguous subarray within a one-dimensional array of numbers that has the largest sum. 
//example :
//input: {-2, -3, 4, -1, -2, 1, 5, -3};
//output: 7
#include <stdio.h>
int   sum_largestarray(int s[], int n)
{
    int end = 0;
    int max_range = 0;
    for(int i = 0; i < n; i++)
    {
        end = end + s[i];
        if (max_range < end )
            max_range = end;
        if (end < 0)
            end = 0;
    }
    return max_range;
}
int main()
{
    int c[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int siz = sizeof(c)/sizeof(c[0]);
    int max = sum_largestarray(c, siz);
    printf("%d\n", max);
    return(0);
}