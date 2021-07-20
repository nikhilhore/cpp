#include <iostream>
#include <vector>
using namespace std;
void quickSort(vector<int> &arr){
	if (arr.size()<2) return;
	int pivot = arr[0], n=arr.size();
	vector <int> left, right;

	for (int i=0; i<n; ++i){
		if(arr[i] < pivot) left.push_back(arr[i]);
		if(arr[i] > pivot) right.push_back(arr[i]);
	}

	quickSort(left);
	quickSort(right);

	for (int i = 0; i < left.size(); ++i) arr[i] = left[i];
	arr[left.size()] = pivot;
	int itr = 0;
	for (int i = left.size() + 1;i<n;++i) arr[i] = right[itr++];

	for (int i = 0; i < n;++i) cout << arr[i] << " ";
	cout << endl;
}

int main(){
	int n;
	cin >> n;
	int temp;
	vector <int> arr;
	for (int i=0; i<n; ++i){
		cin >> temp;
		arr.push_back(temp);
	}
	quickSort(arr);
	return 0;
}