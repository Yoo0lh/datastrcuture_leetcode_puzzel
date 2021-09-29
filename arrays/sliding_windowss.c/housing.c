#include <string.h>
#include <stdio.h>
void    housing(int *s, int len, int target)
{
    int sum;
    int i = 0;
    int j = 0;
    while(i < len)
    {
        sum += s[i];
        i++; 
        while (sum > target && j < i)
        {
            sum = sum - s[j];
            j++;
        }
        if (sum == target)
            printf("{%d,%d}\n",j, i -1 );
    }
}
int main()
{
    int s[] = {1,3,2,1,4,1,3,2,1,1};
    int len = sizeof(s)/sizeof(s[0]);
    housing(s, len, 8);
    return 0;
}