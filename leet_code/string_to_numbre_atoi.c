#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>
int myAtoi(char * s){
    int i = 0;
    int signe = 1;

    while(s[i] == '\t' || s[i] == ' ')
        i++;
    if(s[i] == '+' || s[i] == '-'){
        if(s[i] == '-')
            signe = -1;      
        i++;
    }
    int res = 0;
    while (s[i] != '\0' && (s[i] >= '0' && s[i] <= '9'))
    {
        if (res * signe > 2147483647 / 10)
            return 2147483647;
        else if (res * signe < -2147483648 / 10)
            return -2147483648;
        res *= 10 ;
        res += s[i] - '0';
        i++;
    }
    return res * signe;
}
int main()
{
    char *c ="-91283472332";
    int res = myAtoi(c);
    printf("%d \n", res);
    printf("%d ", atoi(c));
    return 0;
}