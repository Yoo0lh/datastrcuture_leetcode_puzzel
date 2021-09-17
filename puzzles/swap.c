/*******************************************************************
*   swap two numbers without using third variable
*   methode 1 : using  pointers addion and substract operator
*   methode 2 : using pointers multiplication and divition operator
*   methode 3 : using pointers difference between two values
*   example :
*            input : a = 10
*                    b = 5
*            output: a = 5;
*                    b = 10;
*************************************************************************/

#include <stdio.h>
//methode 1
void    swap1(int *a, int *b)
{
    if (a == b)
        return ;
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
//methode 2
void    swap2(int *a, int *b)
{
    if(b && a != b)
    {
        *a = *a * *b;
        *b = *a / *b;
        *a = *a / *b;
    }
}
//methode 3
void    swap3(int *a, int *b)
{
    if (a == b)
        return ;
    *a = *a - *b;
    *b = *b + *a;
    *a = *b - *a;
}
int main()
{
    int a = 10;
    int b = 5;
    int x = 10;
    int y = 5;
    int k = 10;
    int p = 5;
    swap1(&x, &y);
    swap2(&k,&p);
    swap3(&a,&b);
    printf("x===>%d\ny===>%d\n\n",x,y);
    printf("k===>%d\np===>%d\n\n",k,p);
    printf("a===>%d\nb===>%d\n",a,b);
    return(0);
}