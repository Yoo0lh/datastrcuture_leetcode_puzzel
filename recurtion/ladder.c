#include <stdio.h>
#include <string.h>
int countways(int n)
{
    if(n == 0)
        return 1;
    if(n < 0) 
        return 0;
    return countways(n - 1) + countways(n - 2) + countways(n - 3);
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d ",countways(n));
    return 0; 
}