#include <bits/stdc++.h>
using namespace std ;
int longest(vector<int>&s){
	int n = s.size() ;
	int lenght[n];
	for(int k = 0; k < n;k++){
		lenght[k] = 1;
		for(int i = 0; i < k; i++){
			if(s[i] < s[k]){
				lenght[k] = max(lenght[k], lenght[i] + 1);
			} 
		}	
	}
	int res = 0;
	for(int i = 0; i < n; i++)
		res = max(res, lenght[i]);
	return res;
}
int main() 
{	
	vector<int>s = { 10, 22, 9, 33, 21, 50, 41, 60 };
	int res = longest(s) ;
	cout << res <<endl; 
	return 0; 
}
