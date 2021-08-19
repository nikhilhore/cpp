#include <iostream>
#include <vector>
using namespace std;

void printarray(vector<int> arr){
	for (auto i: arr){
		cout << i << " ";
	}
	cout << endl;
}

vector<int> findsub(vector<int> nums, int target){
	
}

int main(){
	int n, target;
	cin >> n >> target;
	vector<int> nums(n);
	for (int i=0; i<n; ++i){
		cin >> nums[i];
	}
	vector<int> subarr;
	subarr= findsub(nums, target);
	printarray(subarr);
	return 0;
}