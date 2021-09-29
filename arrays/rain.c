#include <stdio.h>
#include <string.h>
#define MAX(x, y) (((x) > (y)) ? (x) : (y))
#define MIN(x, y) (((x) < (y)) ? (x) : (y))

int  rain(int *s, int len)
{
    int left[len]; 
    int right[len];
    if (len <= 2)
        return 0;
    left[0] = s[0];
    right[len - 1] = s[len - 1];
    for (int i = 1; i < len; i++)
    {
        left[i] = MAX(left[i - 1], s[i]);
        right[len - i - 1] = MAX(right[len - i], s[len - i - 1]);
    }
    int max_water = 0;
    for(int i = 0; i < len; i++)
        max_water += MIN(left[i], right[i]) - s[i];
    return max_water; 
}
int  main ()
{
    int s[] = {0,1,0,2,1,0,1,3,2,1,2,1};
    int len = sizeof(s)/sizeof(s[0]);
    int res = rain(s, len);
    printf ("result ---> %d", res);
    return 0;
}