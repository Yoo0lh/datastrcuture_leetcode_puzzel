#include <stdio.h>
#include <string.h>
char *key[]= {"", "", "ABC", "DEF", "GHI", "IJK", "MNO", "PQRS", "TUV", "WXYZ"};
void    print_key(char *input, char *output, int i)
{
    if(input[i] == '\0'){
        printf("%s \n", output);
        return;
    }
    int cur = input[i] - '0';
    if (cur == 0 || cur == 1)
        print_key(input, output, i + 1);
    for(int j = 0; j < (int )(strlen(key[cur])); j++)
        print_key(input, output + key[cur][j], i + 1);
    return ;
}
int main()
{
    char input[] = "23";
    char output[100]; 
    print_key(input, output, 0);
    return 0; 
}
