#include <stdio.h>
#include <stdlib.h>
#define CHAR 256
int f_strlen(char *s)
{
    if(s[0] == '\0')
        return 0;
    return 1;
}
int lengthOfLongestSubstring(char * s){
    int clen = 1;
    int maxlen = 1;
    int prev;
    int i;
    if(f_strlen(s) == 0)
        return 0;
    int *tmp = (int *)malloc(sizeof(int) * CHAR);
    for(i = 0; i < CHAR; i++)
        tmp[i] = -1;
    tmp[(int)s[0]] = 0;
    i = 1;
    while (s[i])
    {
        prev = tmp[(int)s[i]];
        if(prev == -1 || i - clen > prev)
            clen++;
        else
        {
            if(clen > maxlen)
                maxlen = clen;
            clen = i - prev;
        }
        tmp[(int)s[i]] = i;
        i++;
    }
    if(clen > maxlen)
        maxlen = clen;
    free(tmp);
    return maxlen;
}
int main()
{
    char c[] = ""; 
    int res = lengthOfLongestSubstring(c);
    printf("res ---> %d \n", res);
    return 0;
}