/*******************************************************************
*   sort an array according to the order defind by another array
*   given s1 and s2, sor s1 in sush a way thwt the relativ order
*   among the elements will be same as those arre in s2, for the elemnts not
*   present in s2, append at the last array
*   example :
*           input : {2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8};
*           input : {2, 1, 8, 3};
*           
*           output: 2 2 1 1 8 8 3 5 6 7 9 ;
*
* 
*************************************************************************/
#include <stdio.h>
int    occurence(int s[], int start, int end, int find)
{
    if (end >= start){
        int hl = start + (end - start) / 2;
        if ((s[hl] == find) && (hl == 0 || find > s[hl - 1]))
            return (hl);
        if (find < s[hl])
            return(occurence(s, start, hl - 1, find));
        else
           return(occurence(s, hl + 1, end, find));
    }
    return(-1);
}
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
void    sortBased(int s1[], int s2[], int n1, int n2)
{
    int tmp[n1];
    int visited[n1];
    int index = 0;

    for(int i = 0; i < n1; i++){
        tmp[i] = s1[i];
        visited[i] = 0;
    }
    sort(tmp, n1);
    for (int i = 0; i < n2; i++){
        int occ = occurence(tmp,  0, n1 - 1, s2[i]);
        if (occ == -1) continue;
        for(int j = occ; (j < n1 && tmp[j] == s2[i]); j++){
            s1[index] = tmp[j];
            visited[j] = 1;
            index++;
        }
    }
    for(int i = 0; i < n1; i++)
        if (visited[i] == 0)
        {
            s1[index] =  tmp[i];
            index++;
        }    
}
int main()
{
    int c[] = {2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8};
    int b[] = { 2, 1, 8, 3 };
    int len1= sizeof(c)/sizeof(c[0]); 
    int len2= sizeof(b)/sizeof(b[0]);
    sortBased(c, b, len1, len2);
    for (int i = 0;  i < len1;  i++)
        printf("%d ", c[i]);
    return (0);
}