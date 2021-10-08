#include <stdio.h>
#define max(a, b) (((a)>(b))?(a):(b))
// void sort(int *s, int len)
// {
//     int tmp;
//     for(int i = 0; i < len; i++)
//         for(int j = 0; j < len; j++)
//             if (s[i] < s[j]){
//                 tmp = s[i]; 
//                 s[i] = s[j];
//                 s[j] = tmp;
//             }
// }
// double calculat(int *s, int len)
// {
//     double res;
//     int hl;
//     if (len % 2 == 0)
//     {
//         hl = len / 2;
//         res = s[hl] + s[hl - 1];
//     }
//     else
//         res = s[hl];
//     return res/2;
// }
double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
   int i = 0; 
   int j = 0; 
   int count;
   double n1 = -1; 
   double n2 = -1; 
   if((nums1Size + nums2Size) % 2 == 1)
   {
       for(count = 0; count <= (nums1Size + nums2Size) / 2; count++)
       {
           if(i != nums1Size  && j != nums2Size ){
               n1 = (nums1[i] > nums2[j]) ? nums2[j++] : nums1[i++];
           }
           else if( i < nums1Size){
               n1 = nums1[i++];
           }
           else {
               n1 = nums2[j++];
           }
       }
       return n1;
    }
    else{
        for (count = 0; count<= (nums1Size + nums2Size)/2; count++)
        {
            n2 = n1; 
            if (i != nums1Size && j != nums2Size){
                n1 = (nums1[i] > nums2[j]) ? nums2[j++] : nums1[i++];
            }
            else if(i < nums1Size)
                n1 = nums1[i++];
            else 
                n1 = nums2[j++];
        }
    return (n1 + n2) / 2;
   }
}   
int main()
{
    int c[] = {1,3};
    int b[] = {2};
    int len1= sizeof(c)/sizeof(c[0]);
    int len2 = sizeof(b)/sizeof(b[0]);
    int res = findMedianSortedArrays(c, len1, b,len2);
    printf("res --> %d \n", res);
    return 0;
}