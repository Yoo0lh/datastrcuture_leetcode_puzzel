#include <string.h>
#include <stdio.h>
#define MAX(a, b) (((a) > (b)) ? (a) : (b))
//MAX(x, y) (((x) > (y)) ? (x) : (y))
int chek(char *s, char c, int pos)
{
    int i = 0;
    while(i < pos)
    {
        if (s[i] == c)
            return 0;
    }
    return i;
}
int     largest_substring(char *s)
{
    int i = 0;
    int j = 0; 
    int max = 0;
    int cur = 0;
    while (s[i])
    {
        int ch = s[i];
        j = chek(s, ch, i);
        if (j != 0)
        {
            j++;
            cur++;
        }
        j = i;
        cur++;
        i++;
        max = MAX(cur, max);
    }
    return max;
}
int main()
{
    char s[] = "aabcdb";
    int res = largest_substring(s);
    printf("%d ", res);
    return 0;
}