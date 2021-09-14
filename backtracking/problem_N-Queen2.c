/*******************************************************************
*   print all possible solution to N-queens problem 
*   
*
*************************************************************************/

#include <stdio.h>
#include <string.h>
#define N 8
void *ft_memset(void *str, int c, size_t n)
{
        size_t i;
        char *p;

        i = 0;
        p = str;
        while(i < n )
        {
                *p =(unsigned char)c; 
                p++;
                i++;
        }
        *p = '\0';
        return(p);
}
int k ;
void    printfNQueen(char s[N][N])
{
    printf("===== %d =======\n", k++);
    for(int i = 0; i < N; i++){
        for (int j = 0; j < N; j++)
            printf("%c ", s[i][j]);
        printf("\n");
    }
}

int   isNotMat(char s[N][N], int row,  int n)
{
    int i;
    int j;
    for(i = 0; i < row; i++){
        if (s[i][n] == 'Q')
            return (0);
    }
    for (i = row, j = n; i >= 0 && j >= 0; i--, j--){
        if (s[i][j] == 'Q')
            return (0);
    }
    for(i = row, j = n; i >= 0 && j < N; i--, j++){
        if (s[i][j] == 'Q')
            return (0);
    }
    return (1);
}

void  NQueen(char s[N][N],  int row)
{
    if (row == N){
        printfNQueen(s);
        return ;
    }
    for (int i = 0; i < N; i++){
        if (isNotMat(s, row, i)){
            s[row][i] = 'Q';
            NQueen(s, row + 1);
            s[row][i] = '-';
        }
    }
}
int main()
{
    char c[N][N];
    ft_memset(c, '-', sizeof c);
    NQueen(c, 0);
    return(0);
}