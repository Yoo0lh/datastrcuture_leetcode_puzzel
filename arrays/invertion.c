/********************************************************************************************
*  invertion of count an arra.
*   fin the total number of invertion  of array, ig (i < j) and (s[i] > s[j]), pair (i , j);
*   example :
*            input : {1, 9, 6, 4, 5};
*            output: the invertion count is 5;
*   ther are 5 invvertion in array s :  (9, 6), (9, 4), (9, 5), (6, 4), (6, 5)
***********************************************************************************************/
#include <stdio.h>
int     countInvertion(int s[], int n)
{
    int count = 0;
    for(int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (s[i] > s[j])
                count++;
    return(count);
}
int main()
{
    int c[] = {1, 9, 6, 4, 5};
    int len = sizeof(c)/sizeof(c[0]);
    printf("%d\n", countInvertion(c, len));
}