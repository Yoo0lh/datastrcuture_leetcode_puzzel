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
#include <stdio.h>
#define N 4
int    isNotMate(int s[N][N], int row, int colm)
{
    int i;
    int j;
    //check row on left side
    for (i = 0; i < colm; i++)
        if (s[row][i])
            return(0);
            //check upper diagonal on left side;
    for(i = row, j = colm; i >= 0 && j >= 0; i--, j--)
        if (s[i][j])
            return(0);
    //check lower diagonale on left side
    for(i = row, j = colm; j >= 0 && i < N; i++, j--)
        if(s[i][j])
            return(0);
    return(1);
}
int    NQueen(int  s[N][N], int colm)
{
    if (colm  >= N)
        return (1);
    //try palicing this queen in all rows on by on;
    for(int i = 0; i < N; i++)
    {   
        //chek if the queen can be placed on s[i][colm];
        if (isNotMate(s, i, colm))
        {
            s[i][colm] = 1;
            //recur to place rest of the queens;
            if(NQueen(s, colm + 1) == 1) 
                return(1);
            //if palicng the queen is doesn't happend, then remove queen from s[i][colm];
            s[i][colm] = 0;
        }
    }
    //if the queen cannot be placed in any row in this colm  then return 0;
    return(0);
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
    if (NQueen (c, 0) == 0){
        printf("FAILED (does not exist)\n");

    }
    printfNQueen(c);
    return(0);
}