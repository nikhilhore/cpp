#include <iostream>
#include <vector>
using namespace std;

bool helper(vector<int> nums, int target, int j){
	if (target==0) return true;
	if (target<0 || j>=nums.size()) return false;
	bool d1= helper(nums, target, j+1);
	if (d1) return true;
	target-= nums[j];
	bool d2= helper(nums, target, j+1);
	return d2;
}

bool canSum(vector<int> nums, int target){
	if (target==0) return true;
	if (nums.empty()) return false;
	return helper(nums, target, 0);
}

int main(){
	int n, target;
	cin >> n >> target;
	vector<int> nums(n);
	for (int i=0; i<n; ++i){
		cin >> nums[i];
	}
	bool yn= canSum(nums, target);
	cout << yn;
	return 0;
}