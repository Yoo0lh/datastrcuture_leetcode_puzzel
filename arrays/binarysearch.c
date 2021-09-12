/*******************************************************************
*   implimentaion to recurtion binary search
*   rcurtion binary search function. it returns location of (find) index in
*   given array s[] or if did't founde it return -1.
*   ##important : this alorgithme onley work on sort array;
*   example :
*            input : {5, 10, 15, 20, 50, 100, 110};
*            output: 1
*************************************************************************/
#include <stdio.h>
int    binarySEarch(int s[], int start, int end, int find)
{
    if (end >= start)
    {
        int hl = start + (end - start)/2;
        // if the elemnt present at the middle od the array;
        if (s[hl] == find)
            return (hl);
        // if the elelment smaller then hl so thet its can be to the left of subarray;
        if (s[hl] > find)
            return(binarySEarch(s, start,hl -1, find));
        // else elment its can only be int the right;
        else
            return(binarySEarch(s, hl + 1, end, find));
    }
    return (-1);
}
int main()
{
    int c[] = {5, 10, 15, 20, 50, 100, 110};
    int len = sizeof(c)/sizeof(c[0]);
    int find = 10;
    printf("%d\n", binarySEarch(c, 0, len -1, find));
}