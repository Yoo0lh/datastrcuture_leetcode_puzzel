//check if array  represent min heap or not 
#include <stdio.h>
int minHeap(int *s, int n, int len)
{
    if (2 * n + 2 > len)
        return 1;
    int left = (s[n] <= s[2 * n + 1]) && minHeap(s, 2 * n + 1, len);
    int right = (2  * n + 2 == len) || (s[n] <= s[2 * n + 2] && minHeap (s, 2 * n + 2, len)); 
    return left && right;
}
int main()
{
    int c[] ={2,5,6,7,9,10};
    int len = sizeof(c)/sizeof(c[0]);
    if(minHeap(c,0, len))
        printf("SUCCSESS min heap");
    else    
        printf ("FAILDE");
    return 0;
}