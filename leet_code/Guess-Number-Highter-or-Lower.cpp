#include <iostream>
using namespace std;
int guessNumber(int n) {
    int left = 1; 
    int raight = n;
    while(left <= raight){
        int mid = left + (raight - left) / 2;
        int res = guess(mid);
        if (res == 0)
            return mid;
        else if (res > 0)
            left = mid + 1;
        else 
            raight =  mid - 1;
    }
    return 0;
}
