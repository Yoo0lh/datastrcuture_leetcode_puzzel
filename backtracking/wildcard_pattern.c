/*******************************************************************
*   finde all binary string that can be formed from a wildcard pattern
*   using recursive
*   example :
*            input : ?011?00?1?
*            output: 0011000010
*                    0011000011
*                    0011000110
*                    0011000111
*                    0011100010
*                    0011100011
*                    0011100110
*                    0011100111
*                    1011000010
*                    1011000011
*                    1011000110
*                    1011000111
*                    1011100010
*                    1011100011
*                    1011100110
*                    1011100111
*************************************************************************/
#include <stdio.h>
void    combination(char *s, int n)
{
    if (s[n] == '\0'){
        printf("%s\n", s);
        return ;
    }
    if(s[n] == '?'){
        for(int i = 0; i < 2; i++){
            s[n] = i + '0';
            combination(s, n + 1);
            s[n] = '?';
        }
        return ;
    }
    combination(s, n + 1);
}
int main()
{
    char c[] = "?011?00?1?";
    combination(c, 0);
    return(0);
}
