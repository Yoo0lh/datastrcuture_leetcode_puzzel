#include <bits/stdc++.h> 
#include <map>
using namespace std;
int memo[1000];
// normal function but if we give it a higer input lik n = 50 its gonna be slow
int fib(int n){
	if (n <= 2) return 1;
	int res =  res = fib(n - 1) + fib(n - 2);
	return res; 
}
// now try to solve it using memozation;
/*int fibmemo(int n, std::map<int, int>valu){
	if(n <= 1) return n; 
	std::map<int,int>:: iterator iter = valu.find(n);
	if(iter == valu.end())
		return valu[n] = fibmemo(n - 1, valu) + fibmemo(n - 2, valu);
	else
		return iter->second; 

}*/ 
int fibmemo(int n, int *memo){	
	if(memo[n] == -1){	
		memo[n] = fibmemo(n - 1, memo) + fibmemo(n - 2, memo);
	}
	return memo[n];
}
int main(){
	map<int, int>v;
	int *memo = new int[1000];
	memo[0] = 0; 
	memo[1] = 1;
	for(int i = 2; i < 1000; i++)
		memo[i] = -1;
	int res = fibmemo(50, memo);
	cout << res << endl;
	return 0;
}

	
