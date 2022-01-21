#include <stdio.h>
#include <string.h>
int removeDuplicates(int* nums, int numsSize){
	if (numsSize == 0 || numsSize == 1)
		return numsSize;
	int j = 0;
	int tmp[numsSize];
	for(int i = 0; i < numsSize - 1; i++)
		if (nums[i] != nums[i + 1])
			tmp[j++] = nums[i];
	tmp[j++] = nums[numsSize - 1];
	for (int i = 0; i < j; i++)
		nums[i] = tmp[i];
	return j;
}		
int main()
{
	int s[] = {1,1,2};
	int len = sizeof (s)/sizeof(s[0]);
	printf ("res --> %d\n" ,  removeDuplicates(s, len));
	return 0;
}

