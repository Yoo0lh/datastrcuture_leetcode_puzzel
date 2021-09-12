#include <stdio.h>

void    sort(int s[], int n)
{
    int tmp;
    for(int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (s[i] > s[j]){
                tmp = s[i];
                s[i] = s[j];
                s[j] = tmp;
            }
}
int main()
{
    int c[] = {6, -9, 0, 7, 10, 3};
    int len = sizeof(c)/sizeof(c[0]);
    sort(c, len);
    for (int i = 0; i < len; i++)
        printf("%d ", c[i]);
}