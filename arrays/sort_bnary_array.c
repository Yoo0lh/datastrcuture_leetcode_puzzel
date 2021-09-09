//sort binary array in linear time
//example : 
//input:  { 1, 0, 1, 0, 1, 0, 0, 1 };
//output: { 0, 0, 0, 0, 1, 1, 1, 1 };
#include <stdio.h>
void    sortbinary(int s[], int n)
{
    //firt we gonna count the number of zero
    int zero = 0;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == 0)
            zero++;
    }
    //now put numers of zeros int the beginning of the array,
    int i = 0;
    while (i< zero)
    {
        s[i] = 0;
        i++;
    }
    //now put ther rest 
    while(i < n)
    {
        s[i] = 1;
        i++;    
    }
}
int main()
{
    int c[] = {0, 1, 0, 1, 1, 0};
    int n = sizeof(c)/sizeof(c[0]);
    sortbinary(c, sizeof(c)/sizeof(c[0]));
    for(int i = 0; i < n; i++)
        printf("%d", c[i]);
    return(0);
}