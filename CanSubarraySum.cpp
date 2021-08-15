#include <iostream>
#include <vector>
using namespace std;

bool helper(vector<int> nums, int target, vector<int> arr, int j){
	if (target==0) return true;
	if (j==nums.size()) return false;
	bool d1= helper(nums, target, arr, j+1);
	target-= nums[j];
	arr.push_back(nums[j]);
	bool d2= helper(nums, target, arr, j+1);
	return d1 || d2;
}

bool canSum(vector<int> nums, int target){
	if (target==0) return true;
	if (nums.empty()) return false;
	vector<int> arr;
	return helper(nums, target, arr, 0);
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