//move all zeros to the end of array           |
//example :                                    |
//         input : {1, 0, 5, 0, 0, 6, 9, 0, 3};|
//         output: {1, 5, 6, 9, 3, 0, 0, 0, 0};|
//=============================================      
#include <stdio.h>

void    moveZero(int s[], int n)
{
    int p = 0;
    for (int i = 0; i < n; i++)
        if (s[i] != 0)
        {
            s[p] = s[i];
            p++;
        }
    for(int i = p; i < n; i++)
        s[i] = 0;
}
int main()
{
    int arr[] = {1, 0, 5, 0, 0, 6, 9, 0, 3};
    int len = sizeof(arr)/sizeof(arr[0]);
    moveZero(arr, len);
    for(int i = 0; i < len; i++)
        printf("%d ", arr[i]);
    return(0);
}