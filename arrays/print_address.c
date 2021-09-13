/*******************************************************************
*   print valu and address of element in array without using pointer 
*************************************************************************/
#include <stdio.h>
int main()
{
    int s[4];
    printf("neter 4 elemnt of array\n");
    for(int i = 0; i < 4; i++)
        scanf("%d", &s[i]);
    for (int i = 0; i < 4; i++)
    {
        printf("the value of arra is s[%d] = %d\t|| ",i, s[i]);
        printf("the addres of the value is s[%d] ====> %p\n", i , &s[i]);
    }
    return(0);
}
