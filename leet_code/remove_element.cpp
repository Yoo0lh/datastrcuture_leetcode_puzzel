#include <iostream>
#include <vector>
using namespace std;
int removeElement(vector<int>& nums, int val) {
        int count = 0;
	for (int i = 0; i < nums.size(); i++)
		if (nums[i] != val)
			nums[count++] = nums[i];
	return (count);
}
int main()
{
	vector<int>s{3,2,2,3};
	int val = 2; 
	int res = removeElement(s, val);
	cout << res << endl;
	return 0 ;
}
