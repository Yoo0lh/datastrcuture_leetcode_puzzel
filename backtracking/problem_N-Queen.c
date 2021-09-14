/*******************************************************************
*   print all possible solution to n queens problem; 
*   the idiea is to place queens on by on in different colums, starting 
*   from the left, when we place queens, in the current solums, if we find 
*   a row for which ther is no clash, we mark it , if we do not find such a row
*   due to clashes ther we backtrack and return false;
*   input1 : { { 0, 0, 0, 0 },
*             { 0, 0, 0, 0 },
*             { 0, 0, 0, 0 },
*             { 0, 0, 0, 0 } };
*   
    output1:    0  0  1  0 
*               1  0  0  0 
*               0  0  0  1 
*               0  1  0  0
    
    input2 :{   { 0, 0, 0, 0 },
                { 0, 0, 0, 0 },
                { 0, 0, 0, 0 },
                { 0, 0, 0, 0 },
                { 0, 0, 0, 0 },
                { 0, 0, 0, 0 },
                { 0, 0, 0, 0 },                    
                { 0, 0, 0, 0 } };
    output2 :   1  0  0  0  0  0  0  0 
                0  0  0  0  0  0  1  0 
                0  0  0  0  1  0  0  0 
                0  0  0  0  0  0  0  1 
                0  1  0  0  0  0  0  0 
                0  0  0  1  0  0  0  0 
                0  0  0  0  0  1  0  0 
                0  0  1  0  0  0  0  0 
*************************************************************************/
#include <stdbool.h>
#include <stdio.h>
#include <unistd.h>
#define N 4
bool    keep(int s[N][N], int row, int colm)
{
    int i;
    int j;
    for (i = 0; i < colm; i++)
        if (s[row][i])
            return(false);
    for(i = row, j = colm; i >= 0 && j >= 0; i--, j--)
        if (s[i][j])
            return(false);
    for(i = row, j = colm; j >= 0 && i < N; i++, j--)
        if(s[i][j])
            return(false);
    return(true);
}
bool    NQueen(int  s[N][N], int colm)
{
    if (colm  >= N)
        return (true);
    for(int i = 0; i < N; i++)
    {
        if (keep(s, i, colm))
        {
            s[i][colm] = 1;
            if(NQueen(s, colm + 1))
                return(true);
            s[i][colm] = 0;
        }
    }
    return(false);
}
void    printfNQueen(int s[N][N])
{
    for (int i = 0; i < N; i++){
        for(int j = 0; j < N; j++)
            printf(" %d ", s[i][j]);
        printf("\n");
    }
}
int main()
{
    int c[N][N] = { { 0, 0, 0, 0 },
                    { 0, 0, 0, 0 },
                    { 0, 0, 0, 0 },
                    { 0, 0, 0, 0 } };
    if (NQueen (c, 0) == false){
        printf("FAILED (does not exist)\n");

    }
    printfNQueen(c);
    return(0);
}