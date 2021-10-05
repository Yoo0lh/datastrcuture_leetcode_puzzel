#include <stdio.h>
int binara_search(int *s, int len, int find)
{
    int hl;
    int i = 0;
    int e = len ;

    while(i < e)
    {
        int hl = (e + i)/2;
        if (s[hl] == find)
            return hl;
        else if (s[hl] > find)
            e = hl - 1;
        else 
            i = hl + 1;
    }
    return -1;
}
int main()
{
    int c[] = {5,10,15,20,40,50,100};
    int len = sizeof(c)/sizeof(c[0]);
    printf("res ---> %d ", binara_search(c, len, 100));
    return 0;
}