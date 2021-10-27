#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#define MAX(x, y) (((x) > (y)) ? (x) : (y))
bool chek(char *s, char i, int j)
{
    bool tmp[26];
    (void)s;
    for(int k = i; k <= j; k++)
    {
        if (tmp[k] == true)
            return false;
        tmp[k] = true; 
    }
    return true;
}
int     largest_substring(char *s)
{

    int res = 0;
    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        for(int j = i; j < len; j++)
        {
            if(chek(s, i, j)){
                res = MAX(res, j - i + 1);
            }
        }
    }
    return res;
}
int main()
{
    char s[] = "geeksforgeeks";
    int res = largest_substring(s);
    printf("%d ", res);
    return 0;
}
