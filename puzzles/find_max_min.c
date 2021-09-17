#include <stdio.h>
int min(int a, int b)
{
    return((a < b) ? a : b);
}
int main()
{
    int a = 20;
    int b = 10;
    printf ("min is ===>%d\n", min(a, b));
    return(0);
}