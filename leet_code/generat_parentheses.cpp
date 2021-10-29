#include <bits/stdc++.h> 
using namespace std;
void generate(vector<string>&s,int pos, int open, int close, int n){
	static char str[100];
	if(close == n){
		s.push_back(str);
		return ;
	}
	else{
		if (open < n){
			str[pos] ='(';
			generate(s, pos + 1, open + 1, close, n);
		}
		if (close < open){
			str[pos] = ')';
			generate(s, pos + 1, open, close + 1, n);
		}
	}
}
vector<string> generateParenthesis(int n) {
	vector<string>res; 
	vector<string>one; 
	if(n == 1) { one.push_back("()"); return one;} 
	if(n == 2) { one.push_back("(())"); one.push_back("()()");
	return one;
	}
	generate(res, 0, 0, 0, n);
	return res;
}
int main()
{
	vector<string>res = generateParenthesis(3);
	for (int i = 0; i < res.size(); i++)
		cout << res[i] << " "; 
	cout << endl;
	res = generateParenthesis(1); 
	for(int i = 0; i < res.size(); i++)
		cout << res[i] << " ";
	return 0;
}
