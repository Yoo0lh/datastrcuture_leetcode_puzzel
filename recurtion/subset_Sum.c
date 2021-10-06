#include <stdio.h>
int subset_sum_count(int *s, int len,int i, int target)
{
    // base case 
    if(i == len){
        if(target == 0)
            return 1;
        return 0;
    }
    int inc = subset_sum_count(s, len, i + 1, target - s[i]);
    int exc = subset_sum_count(s, len, i + 1, target);
    return inc + exc; 
}
int main()
{
    int s[] = {1,2,3,4,5};
    int len = sizeof(s)/sizeof(s[0]);
    int target = 6;
    printf("res --> %d \n", subset_sum_count(s, len, 0, target));
    return 0;
}