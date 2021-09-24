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
int findKthLargest1(int* nums, int numsSize, int k){
    sort(nums, numsSize);
    return(nums[numsSize - k]);
}
//using min-heap
int minHeap(int *s, int n, int len)
{
    if (2 * n + 2 > len)
        return 1;
    int left = (s[n] <= s[2 * n + 1]) && minHeap(s, 2 * n + 1, len);
    int right = (2  * n + 2 == len) || (s[n] <= s[2 * n + 2] && minHeap (s, 2 * n + 2, len)); 
    return left && right;
}
int findKthLargest(int* nums, int numsSize, int k){

}
int main()
{
    int c[] = {3,2,3,1,2,4,5,5,6};
    int len = sizeof(c)/sizeof(c[0]);
    int res = findKthLargest1(c, len, 4);
    for(int i = 0; i < len ; i++)
        printf ("%d ", c[i]);
    printf("\n%d ", res);
    return 0;
}