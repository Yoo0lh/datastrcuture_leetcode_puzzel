#include <stdio.h>
#include <string.h>
#define MAX(a,b) (((a)>(b))?(a):(b))
int montain(int *s, int len )
{
    int  max_peak = 0;
    int curtent_peak ;
    for (int i = 1; i < len - 1; i++)
    {
        int  prev_nums = 0;
        int after_nums = 0; 
        if (s[i] > s[i - 1] && s[i] > s[i + 1])
        {
            int j = i;
            while(s[j] > s[j - 1] && j >= 1)
            {
                prev_nums++;
                j--;
            }
            while (s[i] > s[i + 1] && i <= len - 1)
            {
                after_nums++;
                i++;
            }
            curtent_peak = prev_nums + after_nums;
            max_peak = MAX(max_peak, curtent_peak);
        }
    }
    return max_peak + 1;
}
int  main()
{
    int s[] = {5,6,1,2,3,4,5,4,3,2,0,1,2,3,-2,4};
    int len = sizeof(s)/sizeof(s[0]);
    int res = montain(s, len);
    printf("result ---> %d ",res);
    return 0;
}