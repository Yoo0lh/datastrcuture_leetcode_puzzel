#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define MAX(a,b) (((a)>(b))?(a):(b))

void sort(int *s, int len)
{
    int tmp;
    for (int i = 0; i < len; i++)
        for(int j = 0; j < len; j++)
            if (s[i] < s[j])
            {
                tmp = s[i]; 
                s[i] = s[j]; 
                s[j] = tmp;
            }
}
bool chek(int *s, int len, int nb)
{
    for (int i = 1; i < len; i++)
        if (s[i] == nb)
            return true;
    return false;
}
int     longest_baned(int *s, int len)
{
    int longest; 
    int cur_arr = 1; 
    sort(s, len);
    for(int i = 1; i < len ; i++)
    {
        if(s[i] == s[i - 1] + 1)
            cur_arr++;
        else
            cur_arr = 1;
        longest = MAX (longest, cur_arr);
    }
    return longest;
}
int main()
{
    int c[] = {1,9,0,14,20,2,4,80,10,12};
    int len = sizeof(c)/sizeof(c[0]);
    int res = longest_baned(c, len);
    for (int i = 0; i < len; i++)
        printf("%d ", c[i]);
    printf ("\nres --> %d ", res);
    return 0;
}