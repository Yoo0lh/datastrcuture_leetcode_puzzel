/*******************************************************************
*   sudoko backtraking 
*   each row, colums and 3 * 3 box
*   1 - creat an algorithme that check if the given matrix is valid or not
*   2 - creat recursive finction that takes a grid and the row and colum index
*   3 - check base cases
*   
*
*
*
*
* 
*************************************************************************/

#include <stdio.h>
#define N 9
int put(int gride[N][N], int colm, int row, int n)
{
    for(int i = 0; i <= 8; i++)
        if(gride[row][i] == n)
            return 0;
    for(int i = 0; i < N; i++)
        if(gride[i][colm] == n)
            return 0;
    int xrow = row - row % 3;
    int xcolm = colm - colm % 3;
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            if(gride[i + xrow][j + xcolm] == n)
                return 0;
    return 1;
}
int    sudoko(int gride[N][N], int colm, int row)
{
    if(colm == N && row == N - 1)
        return 1;
    if(colm == N)
    {
        row++;
        colm = 0;
    }
    if(gride[row][colm] > 0)
        return(sudoko(gride, colm + 1, row));
    for(int i = 1; i <= N; i++)
    {
        if(put(gride, colm, row, i) == 1)
        {
            gride[row][colm] = i;
            if(sudoko(gride, colm + 1, row) == 1)
                return 1;
        }
        gride[row][colm] = 0;
    }
    return 0;
}
int main()
{
    int gride[N][N] = { { 3, 0, 6, 5, 0, 8, 4, 0, 0 },
                       { 5, 2, 0, 0, 0, 0, 0, 0, 0 },
                       { 0, 8, 7, 0, 0, 0, 0, 3, 1 },
                       { 0, 0, 3, 0, 1, 0, 0, 8, 0 },
                       { 9, 0, 0, 8, 6, 3, 0, 0, 5 },
                       { 0, 5, 0, 0, 9, 0, 6, 0, 0 },
                       { 1, 3, 0, 0, 0, 0, 2, 5, 0 },
                       { 0, 0, 0, 0, 0, 0, 0, 7, 4 },
                       { 0, 0, 5, 2, 0, 6, 3, 0, 0 } };
    if(sudoko(gride, 0, 0) == 1)
        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < N; j++)
                printf("%d ", gride[i][j]);
            printf("\n");
        }
    else
        printf("node solution");
    return 0;
}