#include <iostream>
#include <string>
using namespace std;
// runtime error time complexity slow
// int strStr(string haystack, string needle){
// 	if (needle.length() == 0)
// 		return 0;
// 	if (needle.length() > haystack.length())
// 		return -1;
// 	if (haystack.compare(needle) == 0)
// 		return 0;
// 	for(int i = 0; i < haystack.length(); i++){
// 		int j = i;
// 		int len = 0;
// 		while(haystack[j] == needle[len]){
// 			if(needle[len + 1] == '\0')	
// 				return i;
// 			else{ 
// 				j++;
// 				len++;
// 			}
// 		}
// 	}
// 	return - 1;
// }
// work SUCCSSES 
int strStr(string haystack, string needle){
        if (needle.length() == 0)
                return 0;
        if (needle.length() > haystack.length())
                return -1;
        if (haystack.compare(needle) == 0)
                return 0;
        for(int i = 0; i <= haystack.length() - needle.length(); i++){
            if(haystack.substr(i, needle.length()) == needle)
                return i;
        }
        return - 1;
}
int main ()
{
	string c = "a"; 
	string ll = "";
	cout << strStr(c, ll)<<endl;
	return 0;
}
