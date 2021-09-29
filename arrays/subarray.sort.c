#include <stdio.h>
void    swap(int *a, int *b)
{
    int tmp = *a; 
    *a = *b;
    *b = tmp;
}
void    subSort(int *s, int len)
{
    for(int i = 0; i < len - 1; i++)
    {
        if (s[i] > s[i + 1]){
            swap(&s[i], &s[i + 1]);
        }
    }
}
int  main()
{
    int s[] = {1,2,3,4,5,8,6,7,9,10,11};
    int len = sizeof(s)/sizeof(s[0]);
    subSort(s, len);
    for(int i = 0; i < len; i++)
        printf("%d ", s[i]);
    return 0;
}