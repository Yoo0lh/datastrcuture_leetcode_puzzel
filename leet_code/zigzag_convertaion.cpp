#include <iostream>
#include <string>
using namespace std;
string convert(string s, int numRows) {
    if(numRows == 1)
        return s;   
    string arr[numRows];
    int len = s.length();
    int row = 0;
    bool down;
    for(int i = 0; i < len; i++){
        arr[row].push_back(s[i]); // append the currtent char to row;
        if(row == numRows - 1) // if the last row id reached, change directiom to up;
            down = false;
        else if(row == 0) // if one row id reched change direction to down
            down = true;
        (down) ? (row++) : (row--); // if the direction is down, increment, else decrement;
    }
    string arr2 = "";
    for(int i = 0; i < numRows; i++)
        arr2 += arr[i];
    return arr2;
}
int main(){
    string c = "GEEKSFORGEEKS";
    int n = 3;
    cout << convert(c, n) << endl;
    return 0;
}