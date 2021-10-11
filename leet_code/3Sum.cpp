// #include <iostream>
// #include <vector> 
// using namespace std;
// vector<vector<int>> threeSum(vector<int>& nums) {
//     int len = nums.size();
//     int sum;
//     vector<vector<int>> s;
//     for(int i = 0; i < len - 2; i++)
//     {
//         for (int j = i + 1; j < len - 1; j++){
            
//             for (int k = j + 1; k < len; k++){
//                 if (nums[i] + nums[j] + nums[k] == 0){
//                     s.push_back({nums[i], nums[j], nums[k]});
//                 }
//             }
//         }
//     }
//     return s;
// }
#include <iostream>
#include <vector> 
#include <algorithm>
using namespace std;
vector<vector<int>> threeSum(vector<int>& nums) {
    int len = nums.size();
    int sum = 0;
    vector<vector<int>> s;
    if (nums.empty())
        return s;
    sort(nums.begin(), nums.end());
    for(int i = 0; i < len; i++)
    {
        if (nums[i] > 0) break;
        if (i > 0 && nums[i] == nums[i - 1]) continue;
        if(nums[i] > 0) break;
        int start = i + 1;
        int end = len - 1;   
        while (start < end){
            sum = nums[i] + nums[start] + nums[end];  
            if (sum == 0 ){
                s.push_back({nums[i], nums[start], nums[end]});
                int left = nums[start], right = nums[end];
                while (start < end && nums[start] == left) start++;
			    while (start < end && nums[end] == right) right--;
            }
            else if (sum > 0)
                end--;
            else
                start++;
        }
    }
    return s;
}
int main(){
    vector<int> nums = {-1,0,1,2,-1,-4};
    vector<vector<int>> s;
    s = threeSum(nums);
    for (int i = 0; i <s.size(); i++){
        for (int j = 0; j < s.size(); j++)
            cout << s[i][j] << " ";
        cout <<"    " ;
    }
    return 0;
}