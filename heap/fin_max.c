#include <stdio.h>
void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
void heapify(int *s, int n, int i)
{
    int larg = i;
    int left = 2 * i + 1;
    int rigth= 2 * i + 2; 
    if (left < n && s[left] > s[larg])
        larg = left; 
    if (rigth < n && s[rigth] > s[larg])
        larg = rigth;
    if(larg != i)
    {
        swap(&s[i], &s[larg]);
        heapify(s, n, larg);
    }
}
int findMax(int s[], int n)
{
    int max;
    for(int i = n / 2 - 1; i >= 0; i--)
        heapify(s, n, i);
    for(int i = n - 1; i >= 0; i--)
    {
        swap(&s[0], &s[i]);
        heapify (s, i, 0);
    }
    return max = s[n - 1];
}
int main()
{
    int max;
    int s[] = {15,12,11,5,6,7};
    int len = sizeof(s)/sizeof(s[0]);
    max = findMax(s, len);
    for(int i = 0; i < len; i++)
        printf("%d ",s[i]);
    printf("the max is %d\n", max);
    return 0;

}