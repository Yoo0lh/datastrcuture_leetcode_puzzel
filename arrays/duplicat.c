//find the duplicate element in a limited range array
//example : 
//input:  { 1, 2, 3, 4, 4 }
//output: The duplicate is 4
#include <stdio.h>
void duplicat(int s[], int n)
{
    for(int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (s[i] == s[j])
                printf("the duplicat is %d\n", s[j]);
        }
    }
}
int main()
{
    int c[] = {4, 3, 2, 4, 5};
    int size = sizeof(c)/sizeof(c[0]);
    duplicat(c, size);
}