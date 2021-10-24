// run time 0ms | faster then : 100.00% of c++ online submission | memory usage : 7.6 MB | less than 91.62% of c++ online submission
#include <bits/stdc++.h>
using namespace std;
void permutation(vector<int>&nums, vector<vector<int>>&res , int start) 
{
	if(start >= nums.size()){
		res.push_back(nums);
		return ;
	}
	for(int i = start; i < nums.size(); i++){
		swap(nums[start], nums[i]);
		permutation(nums, res, start + 1);
		swap(nums[start], nums[i]);
	}
}
vector<vector<int>> permute(vector<int>& nums) {
	vector<vector<int>>res ;
	permutation(nums, res, 0);
	return res;
}
int main()
{
	vector<int>s{1,2,3};
	vector<vector<int>>res =  permute(s);
	for(int i = 0; i < res.size(); i++){
		for(int j = 0; j < res[i].size(); j++)
			cout << res[i][j] << " ";
	cout << endl;
	}
	return 0;
}
