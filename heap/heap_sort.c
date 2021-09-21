#include <stdio.h>
void    swap(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}
void    heapfly(int s[], int n, int i)
{   
    int larg = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if(left < n && s[left] > s[larg])
        larg = left;
    if(right < n && s[right] > s[larg])
        larg = right;
    if (larg != i)
    {
        swap(&s[i], &s[larg]);
        heapfly(s, n, larg);
    }
}

void sort_heap(int s[], int n)
{
    for(int i =  n / 2 -1; i >= 0; i--)
        heapfly(s, n, i);
    for(int i = n - 1; i > 0; i--)
    {
        swap(&s[0], &s[i]);
        heapfly(s, i, 0);
    }
}

int main()
{
    int c[] = {15,12,11,5,6,7};
    int len = sizeof(c)/ sizeof(c[0]);
    sort_heap(c, len);
    for(int i = 0; i < len; i++)
        printf ("%d ",c[i]);
    return (0);
}