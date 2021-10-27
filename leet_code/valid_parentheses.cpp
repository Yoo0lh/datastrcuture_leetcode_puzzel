#include <iostream>
#include <stack>
using namespace std;
bool isValid(string s) {
	stack<char>stack;
	char tmp;
	for(int i = 0 ; i < s.length(); i++){
		if(s[i] == '{' || s[i] == '(' || s[i] == '['){
			stack.push(s[i]);
			continue;
		}
		if(stack.empty())
			return false;
		switch(s[i]){
			case(')'):
				tmp = stack.top();
				stack.pop(); 
				if(tmp == '{' || tmp == '[') return false;
				break;
			case('}'):
				tmp = stack.top();
				stack.pop();
				if(tmp == '(' || tmp == '[') return false; 
				break; 
			case(']'):
				tmp = stack.top();
				stack.pop(); 
				if(tmp == '{' || tmp == '(') return false;
				break;
		}
	}
	return (stack.empty());	
}
int main()
{
	string s ="()[]{}";
	string b ="{]";
	string c ="{[]}";
	if(isValid(c)) cout << "true" << endl;
	else
		cout << "false" << endl;
	return 0;
}
