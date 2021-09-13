/*******************************************************************
*   partition problem using recursive
*   partition problem is to determin wheter a given set can be partitioned
*   into two.
*   example :
*            input : {3, 10, 2, 3, 2};
*            output: SUCCESS
*************************************************************************/

#include <stdio.h>
#include <stdbool.h>
bool    issum(int s[], int n, int sm)
{
    if (sm == 0)
        return(true);
    if (n == 0 && sm != 0)
        return(false);
    return(issum(s, n -1, sm) || issum(s, n -1, sm - s[n -1]));
}
bool    findePar(int s[], int n)
{
    int sm = 0;
    for(int i = 0; i < n; i++)
        sm +=s[i];
    if (sm % 2 != 0)
        return(false);
    return(issum(s, n, sm / 2));
}
int main()
{
    int c[] = {3, 10, 2, 3, 2};
    int len = sizeof(c)/sizeof(c[0]);
    if (findePar(c, len) == true)
        printf("SUCCESS");
    else 
        printf("FAILED");
    return (0);
}