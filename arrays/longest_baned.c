#include <stdio.h>
#include <string.h>
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
int     longest_baned(int *s, int len)
{
    int longest; 
    int cur_arr; 
    sort(s, len);
    for(int i = 0; i < len; i++)
    {
        if (s[i])
    }
}