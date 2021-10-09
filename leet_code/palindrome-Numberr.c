#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
bool isPalindrome(int x){
    int res = 0;
    double sum = 0;
    int n = 0;
    res = x;
    while(x > 0){
        n = x % 10;
        sum = (sum * 10) + n;
        x = x / 10;
    }
    if (res == sum)
        return true;
    else
        return false;
}
int main()
{
    int x; 
    scanf("%d", &x);
    printf ("--->%d \n", isPalindrome(x));
    return 0;
}