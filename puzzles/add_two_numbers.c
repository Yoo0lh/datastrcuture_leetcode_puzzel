/*******************************************************************
*   add two number without using the addition operator
*   4 methods 
*   methode 1: using subtration operator
*   methode 2: repeated addition / subtration using --/++
*   methode 3: usnig printf() function 
*   methode 4: usig logarithm and exponential function
*   example :
*            input : 10,20
*            output: 30
*************************************************************************/

//methode 1
#include <stdio.h>

int add1(int a, int b)
{
    return(a - (- b));
}
//methdode 2
int add2(int a, int b)
{
    while (a > 0)
    {
        b++;
        a--;
    }
    while (a < 0)
    {
        b--;
        a++;
    }
    return(b);
}
//methode 3
int add3(int a, int b)
{ 
    return(printf("%*c%*c", a, ' ', b, ' '));
}
//methode 4 in main 
int main()
{

    printf("add 1 ===>%d\n", add1(10,20));
    printf("add 2 ===>%d\n", add2(10,20));
    printf("add 3 ===>%d\n",add3(10,20));
    //methode 4
    printf("add 4 ===>%g\n", log(exp(10) * exp(20)));
    return(0);
}