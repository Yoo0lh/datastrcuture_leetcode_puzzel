#include <stdio.h>
#include <limits.h>
int reverse(int x){
    int result;
    long rev = 0; 
   
    while(x != 0){
        result = x % 10;
        rev = rev * 10 + result;
        x =  x / 10;
    }
    if (rev > INT_MAX || rev < INT_MIN){
        return 0;
    }
    return rev;
}
int main()
{
    int n = -123; 
    int rev = reverse (n);
    printf("res -->%d \n", rev);
    return 0;
}