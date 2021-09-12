//find the maximum product of two integers in an array      |
//examples :                                                |
//          input : { -10, -3, 10, 6, 12 };                 |
//          output: {10 , 12}                               |
//==========================================================
#include <stdio.h>
void product(int s[], int n)
{
    int max_product = 0;
    int nbr1;
    int nbr2;
    for(int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((s[i] * s[j]) > max_product)
            {
                max_product = s[i] * s[j];
                nbr1 = s[i];
                nbr2 = s[j];
            }
        } 
    }
    printf("product ===> {%d , %d}\n", nbr1, nbr2);
}
int main()
{
    int c[] = { -10, -3, 10, 6, 12 };
    int len = sizeof(c)/sizeof(c[0]);
    product(c, len);
}