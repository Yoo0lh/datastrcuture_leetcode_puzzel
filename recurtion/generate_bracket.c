#include <stdio.h>
void print_bracket(int pos, int close, int open, int len)
{
    static char str [100];
    if (close == len){
        printf("%s \n", str);
        return ; 
    }
    else{
        if(open > close){
            str[pos] = '}';
            print_bracket(pos + 1, close + 1, open, len);
        }
        if(open < len){
            str[pos] = '{'; 
            print_bracket(pos + 1, close, open + 1, len);
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    print_bracket(0, 0, 0, n);
    return 0;
}