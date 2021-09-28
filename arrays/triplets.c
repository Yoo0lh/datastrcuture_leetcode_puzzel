#include <stdio.h>
#include <string.h>
// void triplet(int *s, int  len, int target)
// {
//     for(int i = 0; i < len; i++){
//         int sum = 0;
//         for(int j = i + 1; j < len; j++){
//             for(int k = j + 1; k < len; k++){
//                 sum = s[i] + s[j] + s[k];
//                 if (sum == target){
//                     printf ("EXIST\n");
//                     continue ;
//                 }
//             }
//         }
//     }
// }
//int row = 0;
void     sort(int *s, int len)
{
    int tmp;
    for(int i = 0; i < len; i++)
        for (int j = 0; j < len; j++)
            if (s[i] < s[j])
            {
                tmp = s[i];
                s[i] = s[j]; 
                s[j] = tmp;
            }
}
void triple2(int *s, int len, int target)
{
    sort(s, len);
    for(int i = 0; i < len - 3 ; i++)
    {
        int j = i + 1; 
        int k = len - 1;
        while (j < k)
        {
            int sum  = s[i];
            sum += s[j];
            sum += s[k];
            if (sum == target)
            {
                printf("%d %d %d\n",s[i], s[j],s[k]);
                j++;
                k--;

            }
            else if (sum > target)
                k--;
            else 
                j++;
        }
    }
}
int main()
{
    int c []={1,200,15,3,2,2};
    int len = sizeof(c)/sizeof(c[0]);
    int target = 19; 
    triple2(c, len, target);
    
    return 0;
}
// void push(int **new, int *s)
// {
     
//     for (int row; row < row + 1; row++)
//     {
//         for (int n = 0; n < 3; n++)
//         {
//            new[row][n] = s[n];
//         }
//     }
//     printf ("row ---> %d", row );
// }