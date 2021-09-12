//finde the index to creat the largest seriie of 11
//example : 
//          input : { 0, 0, 1, 0, 1, 1, 1, 0, 1, 1 };
//          output: index 7;
#include <stdio.h>

int findeIndex(int s[], int n)
{
    int count = 0;
    int totalcount = 0;
    int prev = -1;
    int index ;
    for(int i = 0; i < n; i++)
    {
        if (s[i] == 1)
            count++;
        else
        {
            count = i - prev;
            prev = i;
        }
        if (count > totalcount){
            totalcount = count ;
            index = prev;
        } 
    }
    return(index);
}
int main()
{
    int c[] = { 0, 0, 1, 0, 1, 1, 1, 0, 1, 1 };
    int len = sizeof(c)/ sizeof(c[0]);
    printf("index is ====> %d\n", findeIndex(c, len));
    return(0);
}