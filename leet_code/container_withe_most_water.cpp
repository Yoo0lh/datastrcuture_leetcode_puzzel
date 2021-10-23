#include <iostream>
#include <vector>
using namespace std;
int maxArea(vector<int>& height) {
	int area = 0;
	for(int i = 0; i < height.size(); i++)
		for(int j = i + 1; j < height.size(); j++){
			int res = (j - i) * (min(height [i], height[j]));
			area = max (area, res);
		}
					
	return area ;
}
int trytwo(vector<int>&height)
{
	int ares = 0
	int i = 0;
	int len = height.size() - 1;
	while (i < len){
		ares = max (ares, min(height[i] , height[len]) * (len - i));
		if(height[i] < height[len])
			i++;
		else
			len--;
	}
	return ares ;
}
int main()
{
	vector<int>a{1,8,6,2,5,4,8,3,7};
	vector <int>b{1,2,1};
	vector<int>c{4,3,2,1,4};
	vector<int>d{1,5,4,3};
	vector<int>e{2,3,4,5,18,17,6};
	int res = maxArea(e);
	cout << res << endl;
	res = trytwo(e);
	cout << res << endl;
	return 0;
}
