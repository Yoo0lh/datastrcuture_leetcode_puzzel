#include <iostream>
#include <string>
using namespace std;
int chaek(char c){
    if (c == 'I')
        return 1;
    else if(c == 'V')
        return 5;
    else if(c == 'X')
        return 10;
    else if (c == 'L')
        return 50;
    else if(c == 'C')
        return 100;
    else if(c == 'D')
        return 500;
    else if(c == 'M')
        return 1000;
    return -1;
}
int romanToInt(string s) {
    int res = 0;
    int len = s.length();
    for (int i = 0; i < len; i++){
        int n1 = chaek(s[i]);
        if (i + 1 < len){
            int n2 = chaek(s[i + 1]);
            if(n1 >= n2)
                res = res + n1;
            else {
                res = res + n2 - n1;
                i++;
            }
        }
        else {
            res = res + n1;
            i++;
        }
    }
    return res;
}
int main(){
    string c = "LVIII"; 
    cout<<romanToInt(c)<<endl;
    return 0;
}
