#include <bits/stdc++.h>
using namespace std;
int searchInsert(vector<int>& nums, int target) {
	int len = nums.size() - 1; 
	int i = 0;
	sort(nums.begin(), nums.end());
	if(target < nums[0] )
		return 0;
	while(i <= len){
		int midl = (len + i) / 2; 
		if(nums[midl] == target)
			return midl;
		if(nums[midl] < target)
			i = midl + 1;
		else if (nums[midl] > target)
			len = midl - 1; 
	}
	return i;
}
int main()
{	
	vector<int>a{1,3,5,6}; 
	vector<int>b{1,3,5,6};
	int target = 3; 
	int res = searchInsert(a, target) ;
	cout << res << endl;
	return 0;
}
