#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
string longestCommonPrefix(vector<string>& strs) {
	if(strs.size() == 0)
		return "";
	string res = "" ;
	int minl = strs[0].size();
	for(int i = 1; i < strs.size(); i++){
	//	int tmp = strs[i].size();
		minl = min(minl, (int)strs[i].size());
	}
	for(int i = 0; i < minl; i++){
		char cur = strs[0][i];
		for(int j = 1; j < strs.size(); j++)
			if(strs[j][i] != cur)
				return res;
		res += cur;
	}
	return res; 
}
int main()
{
	vector<string>s{"geeks", "geellll", "geeo"};
	cout << longestCommonPrefix(s) << endl;
	return 0;
}
