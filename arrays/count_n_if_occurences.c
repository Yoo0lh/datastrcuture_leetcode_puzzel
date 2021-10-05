/***********************************************************************************************
*   calculat the number of frequence of umber using to methods  
*   first methode using linear search  : time complexity O(n)
*   seconde using binary search (better using binary search) : time complexity O(log n * count)
*  
************************************************************************************************/

#include <stdio.h>
//methode 1 : 
int countFrequence(int *s, int len, int find)
{
    int count = 0; 
    for (int i = 0; i < len; i++)
    {
        if(s[i] == find)
            count++;
    }
    return count;
}
//methode 2:
int binary_search(int *s, int left, int right, int find)
{
    if(right < left)
        return -1;
    int hl = left + (right - left) / 2;
    if(s[hl] == find)
        return hl;
    if(s[hl] > find)
        return binary_search(s, left, hl - 1, find);
    return binary_search(s, hl + 1, right, find);
}

int countFrequence2(int *s, int len, int find)
{
    int index = binary_search(s, 0, len - 1, find);
    if (index == -1)
        return 0;
    int count = 1;
    int left = index - 1;
    while (left >= 0 && s[left] == find)
        count++, left-- ;
    int right = index + 1;
    while (right < len && s[right] == find)
        count++,  right++;
    return count;
}
int main()
{
    int s[] = {1,1,1,2,2,2,2,3};
    int len = sizeof(s)/sizeof(s[0]);
    int find = 2;
    printf ("result ---> %d ", countFrequence2(s, len, find));
    return 0;
}