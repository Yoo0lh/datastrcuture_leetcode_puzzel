#include <stdio.h>
void    swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
void    sort(int *s, int len)
{
    for(int i = 0; i < len; i++)    
    {
        for(int j = i + 1; j < len; j++)
        {
            if(s[i] > s[j])
                swap(&s[i], &s[j]);
        }
    }
}
//using simple methode
int findKthLargest(int* nums, int numsSize, int k){
    sort(nums, numsSize);
    return(nums[numsSize - k]);
}
int main()
{
    int c[] = {3,2,3,1,2,4,5,5,6};
    int len = sizeof(c)/sizeof(c[0]);
    int res = findKthLargest(c, len, 4);
    for(int i = 0; i < len ; i++)
        printf ("%d ", c[i]);
    printf("\n%d ", res);
    return 0;
}