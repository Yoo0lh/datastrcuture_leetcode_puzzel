// time complexity of this code is O(log n), n is the number of element of the array;
#include <bits/stdc++.h>
using namespace std; 
int binary_search(vector<int>&s, int finde)
{
	int k = 0; 
	int len = s.size();
	sort(s.begin(), s.end()); // if you are sure tht the given array is soted you can skip this line ;
	for(int i = len / 2; i >= 1; i /= 2)
		while(k + i < len && s[k + i] <= finde )
			k += i; 
	if(s[k] == finde)
		return k; 
	else 
		return 0;
}
int main()
{
	vector<int> s{2,4,5,0,2 }; 
	int finde = 0; 
	int res = binary_search(s, finde);
	cout << res << endl;
	return 0;
}
