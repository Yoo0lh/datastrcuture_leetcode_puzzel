#include <stdio.h>
char s[] = {'0', '1','2','3','4','5','6','7','8','9'};
void    bord()
{
    printf("\nTic Tac Toe\n");
    printf("P1 (X) - P2 (O)\n\n");
    printf("     |     |   \n");
    printf("  %c  |  %c  |  %c  \n", s[1], s[2], s[3]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n", s[4], s[5], s[6]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n", s[7], s[8], s[9]);
    printf("     |     |   \n\n");

}
int win()
{
    if (s[1] == s[2] && s[2] == s[3])
        return (1);    
    else if (s[4] == s[5] && s[5] == s[6])
        return (1);
    else if (s[7] == s[8] && s[8] == s[9])
        return (1);
    else if (s[1] == s[4] && s[4] == s[7])
        return (1);
    else if(s[2] == s[5] && s[5] == s[8])
        return (1);
    else if (s[3] == s[6] && s[6] == s[9])
        return (1);
    else if (s[1] == s[5] && s[5] == s[9])
        return (1);
    else if (s[3] == s[5] && s[5] == s[7])
        return (1);
    else if (s[1] != '1' && s[2] != '2' && s[3] != '3' && s[4] != '4' &&
             s[5] != '5' && s[6] != '6' && s[7] != '7' && s[8] != '8' &&
             s[9] != '9')
        return (0);
    else 
        return (-1);
}
int main()
{
    int p =  1;
    int i;
    int choice;
    char put;
    do{
        bord();
        if(p % 2)
            p =  1;
        else    
            p = 2;
        printf("PLAYER{%d}please enter your choice ---> ", p);
        scanf ("%d", &choice);
        if (p == 1)
            put = 'X';
        else  
            put = 'O';
        if (!(choice > 0 && choice <= 9))
        {
            printf ("PLEAS ENTER NUMBER");
            return (0);
        }
        else if(choice == 1 && s[1] == '1')
            s[1] = put;
        else if (choice == 2 && s[2] == '2')
            s[2] = put;
        else if (choice == 3 && s[3] == '3')
            s[3] = put;
        else if (choice == 4 && s[4] == '4')
            s[4] = put;
        else if (choice == 5 && s[5] == '5')
            s[5] = put;
        else if (choice == 6 && s[6] == '6')
            s[6] = put;
        else if (choice == 7 && s[7] == '7')
            s[7] = put;
        else if (choice == 8 && s[8] == '8')
            s[8] = put;
        else if (choice == 9 && s[9] == '9')
            s[9] = put;
        else{
            printf("FAILDE you cant make this move ...(see more) o(╥﹏╥)o");
            p--;
            //getch();
        }
        i = win();
        p++;
            
    }while (i == -1);
    bord();
    if(i == 1)
        printf ("PLAYER{%d} WIN “ヽ(´▽｀)ノ” ", --p);
    else    
        printf("GAME EQUAL ( ⌒o⌒)人(⌒-⌒ )v");
    //getch()
    return (0);
}
