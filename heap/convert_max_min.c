//given array a max-heap , convert in place to min_heap in liner time (O(n))
#include <stdio.h>
void    swap(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}
void    MAXheapify(int *s, int i, int n)
{
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    int largest = i;
    if (left < n && s[left] > s[i])
        largest = left;
    if(right < n && s[right] > s[largest])
        largest = right;
    if(largest != i)
    {
        swap(&s[i], &s[largest]);
        MAXheapify(s, largest, n);
    }
}
void convert(int *s, int n)
{   
    for(int i = (n - 2)/2; i >= 0; i--)
        MAXheapify(s, i, n);
}
int main()
{
    int c[] ={3,5,9,6,8,20,10,12,18,9};
    int len = sizeof(c)/sizeof(c[0]);
    convert(c, len);
    for (int i = 0; i < len ; i++)
        printf("%d ", c[i]);
    return (0);
}