// #include <stdio.h>
// #include <string.h>
// #include <limits.h>
// #include <stdlib.h>
// int myAtoi(char * s){
//     int length = strlen(s);
//     int flag = 0;
//     int power10 = 1;
//     int toReturn = 0;
//     for (int i = 0; i < length - 1; i++){
//         power10 = power10 * 10;
//     }
//     for (int i = 0; s[i] != '\0'; i++){
//           if (s[i] >= 48 && s[i] <= 39){
//                 //Now, you know it's gonna be a number.
//                 int num = (int)s[i] - 48;
//                 //reconstruct the string here.
//                 toReturn = toReturn + (num * power10);
//                 power10 = power10 / 10;
//           }
//           else{
//               flag = 1;
//               break; //Alphabet detected, give error.
//           }
//      }
//   return toReturn;
// }
// int main()
// {
//     char *c ="2147483648" ;
//     int res = myAtoi(c);
//     printf("%d \n", res);
//     printf("%d ", atoi(c));
//     return 0;
// }
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
        res *= 10 ;
        res += s[i] - '0';
        if (res * signe > INT_MAX) 
            return 2147483647;
        else if (res * signe < INT_MIN)
            return -2147483648;
        i++;
    }
    return res * signe;
}
int main()
{
    char *c ="2147483648" ;
    int res = myAtoi(c);
    printf("%d \n", res);
    printf("%d ", atoi(c));
    return 0;
}
