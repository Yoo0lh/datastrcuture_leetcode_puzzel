/*******************************************************************
*   Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target
*   exmaple 1 :
*       Input: nums = [2,7,11,15], target = 9
*       Output: [0,1]
*       Output: Because nums[0] + nums[1] == 9, we return [0, 1].
*   example 2 :
*       Input: nums = [3,3], target = 6
*       Output: [0,1]
*************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    *returnSize = 2;
    int *returnArr=(int*)malloc((*returnSize)*sizeof(int));
    for(int i=0; i<(numsSize-1); i++){
        for(int j=i+1; j<numsSize; j++){
            if((nums[i]+nums[j]) == target){
                returnArr[0] = i;
                returnArr[1] = j;
                return returnArr;
            }
        }
    }
    returnArr[0] = -1;
    returnArr[1] = -1;
    return returnArr;
}