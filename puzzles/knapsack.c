/*******************************************************************
*   0-1 knapsack problem 
*   example : 
*            input : value: 60, 100, 120
*                    weight : 10, 20, 30
*                    w : 50
*            ouput: 220
*
*************************************************************************/
#include <stdio.h>
#define MAX(a,b) (((a)>(b))?(a):(b))
int    knapsack(int *value, int *weight, int W, int n)
{
    if (W == 0 || n == 0)
        return (0);
    if (weight[n -1] > W)
        return(knapsack(value, weight, W, n-1));
    else
        return(MAX(value[n-1] + knapsack(value, weight, W-weight[n-1], n-1), knapsack(value, weight, W,n - 1)));

}
int main()
{
    int c[] = {60,100,120};
    int b[] = {10,20,30};
    int W = 40;
    int len = sizeof(c)/sizeof(c[0]);
    printf("%d\n", knapsack(c,b,W,len));
    return(0);
}