//quick sort algorithme : quick sort algorthime is faster than merg sort and heapsort quiuck sort                                                                                |
//is based on comparation sort its can sort items of any time                                                                                                                    |
//O(n.log(n)) to sort n items and in the worst case its makes O(n2) comparation                                                                                                  |
//pivot    : pick an element called a pivot from the array (usually the left or the right of the array)                                                                          |
//partion  : satart reorder the array such all elements withe values less than the (pivot) and the element withe value grater than pivot its come after it .                      |
//recurion : recurtion apply the above steps to the subarray of elemnts with smaller values then pivot and separatly to the subarray of elements withe greater value .          |
//example  :                                                                                                                                                                     |
//          input : { 10, -1, 4, 0, 6, 9, -to6, 2, 3 };                                                                                                                            |
//          output: -6 -1 0 2 3 4 6 9 10 ;                                                                                                                                       |
//===============================================================================================================================================================================
#include <stdio.h>
int partion (int s[], int start, int end)
{
    int tmp;
    int pivot = s[end];
    int index = start;
    for (int i = start; i < end; i++)
    {
        if (s[i] <= pivot)
        {
            tmp = s[i];
            s[i] = s[index];
            s[index] = tmp;
            index++;
        }
    }
    tmp = s[index];
    s[index] = s[end];
    s[end] = tmp;

    return(index);
}
void    quickSort(int s[], int start, int end)
{
    if (end <= start)
        return ;
    int pivot = partion(s, start, end);
    quickSort(s, start, pivot - 1);
    quickSort(s, pivot + 1, end);

}
int main()
{
    int c[] = { 10, -1, 4, 0, 6, 9, -6, 2, 3 };
    int len = sizeof(c)/sizeof(c[0]);
    quickSort(c, 0, len -1);
    for (int i = 0; i < len; i++)
    {
        printf("%d ", c[i]);
    }
    return(0);
}