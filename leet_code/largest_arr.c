#include <stdio.h>
#include <stdlib.h>
#define CHAR 256
int lengthOfLongestSubstring(char * s){
    int clen = 1;
    int maxlen = 1;
    int prev;
    int i;
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
    char c[] = "bbbbb";
    int len = lengthOfLongestSubstring(c);
    printf("%d ",len);
    return 0;
}