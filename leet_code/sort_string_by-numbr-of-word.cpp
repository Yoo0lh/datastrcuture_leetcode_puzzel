#include<bits/stdc++.h>
#define MAX(a, b) ((a) > (b)) ? (a) : (b) ;
using namespace std;
int main(){
    	string s = "hello hi me";
	int len = s.size();	
	int count = 0;
	int j;
	for (int i = 0; i < len/2 ; i++){
    		swap(s[i], s[len - i - 1]);
	}
	len = s.size();
	for (int i = 0; i < len; i++){
		int n = 0;
		if(s[i] == ' ' || s[i] == '\0'){
			j = count; 
			while(j++ != 0 || j++ != ' ')
				swap (s[j], s[j - n] );
		}
		else{
			n++;
			count++;
		}
				
	}
	cout << count << endl;
	cout << s << endl;
	return 0;
}
