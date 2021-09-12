// finde a pair withe the given sum in an array
//======= input===========
// arr = [8, 9, 5, 2, 1];
// find = 10; 
//=====output==============
// pair is founde 8 , 2 || 9, 1;
#include <stdio.h>
void    findpair(int s[], int n, int find)
{
    //using for loop;
    for(int i = 0; i < n -1; i++)
    {
        for(int j = j + 1; j < n - 1; j++)
        {
            if (s[i] + s[j] == find )
            {
                printf("paire =====> %d | %d", s[i], s[j]);
                return;
            }
        }
    }
    printf("pair not founde");
}
int main()
{
    int find = 10;
    int c[] = {8, 9, 5, 2, 1};
    findpair(c, 5, find);
    return (0);
}