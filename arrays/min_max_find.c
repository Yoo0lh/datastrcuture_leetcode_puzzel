/*******************************************************************
*  
*
* 
*******************************************************************/
#include <stdio.h>
#include <limits.h>

void    min_max(int s[], int start, int end, int max, int min)
{
    if (end == start)
    {
        if (max < s[start])
            max = s[start];
        if (min > s[end])
            min = s[end];
        return;
    }
    if (end - start == 1)
    {
        if (s[start] < s[end])
        {
            if (min > s[start])
                min = s[start];
            if (max < s[end])
                max = s[end];
        }
        else
        {
            if (min > s[end])
                min = s[end];
            if (max < s[start])
                max = s[start];
        }
        return ;
    }
   
    int hl = (start  + end) / 2;
    min_max(s, start, end, max, min);
    min_max(s, hl + 1, end, max, min);
}
int main()
{
    int c[] = { 7, 2, 9, 3, 1, 6, 7, 8, 4 };
    int len = sizeof(c)/sizeof(c[0]);
    int max = INT_MAX;
    int min = INT_MIN;
    min_max(c, 0, len - 1, max, min);
    printf("min====>%d\n", min);
    printf("max=====%d\n", max);
    return (0);
}   