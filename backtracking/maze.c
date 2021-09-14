#include <stdio.h>
#include <stdbool.h>
#define N 4
void    printf_maze(int s[N][N])
{
    for(int  i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            printf(" %d ", s[i][j]);
        }
        printf("\n");
    }
}
bool    isway(int maze[N][N],int x,int y)
{
    if (x >= 0 && x < N && y >= 0 && y < N && maze[x][y] == 1)
        return(true);
    return(false);
}
bool    Maze_problem(int maze[N][N], int x, int y, int s[N][N] )
{
    if (x == N - 1 && y == N - 1 && maze[x][y] == 1){
        s[x][y] = 1; 
        return (true);
    }
    if(isway(maze, x, y) == true){
        if(s[x][y] == 1)
            return (false);
        s[x][y] = 1;
        if(Maze_problem(maze, x + 1, y, s) == true)
            return (true);
         if(Maze_problem(maze, x , y + 1, s) == true)
            return (true);
        if(Maze_problem(maze, x - 1, y, s) == true)
            return (true);
         if(Maze_problem(maze, x , y - 1, s) == true)
            return (true);
        s[x][y] = 0;
        return (false);
    }
    return(false);
}
int main()
{
    int c[N][N] = { { 1, 0, 0, 0 },
                    { 1, 1, 0, 1 },
                    { 0, 1, 0, 0 },
                    { 1, 1, 1, 1 } };
    
    int b[N][N] = { { 0, 0, 0, 0 },
                    { 0, 0, 0, 0 },
                    { 0, 0, 0, 0 },
                    { 0, 0, 0, 0 } };
    if(Maze_problem(c, 0, 0, b) == true){
      printf_maze(b);
      return(1);  
    }
    printf("FAILED");
    return(0);

}