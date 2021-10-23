#include <iostream>
#include <vector>
using namespace std;
vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector <int > s;
	int flage;
	int i;
        for(i = 0; i < nums1.size(); i++){
		flage = 0;
		for(int j = 0; j < nums2.size(); j++){
                       	if(nums1[i] == nums2[j])
              			flage = 1;
			if(flage == 1 and nums1[i] < nums2[j]){
				s.push_back(nums2[j]);
				flage = 0;
				break;
			}
       	        }
		if(flage == 1)
			s.push_back(-1);
        }
        return s;
}
int main()
{	
	vector<int>s{4,1,2};
	vector<int>b{1,3,4,2};
//	vector<int> s {1,3,5,2,4};
//	vector<int> b{6,5,4,3,2,1,7};
	vector <int> res = nextGreaterElement(s,b);
	for (int i = 0; i < res.size(); i++)
		cout << res[i] << " "; 
	return 0 ;
}
