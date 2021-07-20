#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int temp;
	vector <int> arr;
	for (int i=0; i<n; ++i){
		cin >> temp;
		arr.push_back(temp);
	}
	int m;
	cin >> m;
	vector <int> brr;
	for (int i=0; i<m; ++i){
		cin >> temp;
		brr.push_back(temp);
	}

	map<int, int> cnt_arr;
	for (int i = 0; i <n; ++i){
		cnt_arr[arr[i]]++;
	}

	map<int, int> cnt_brr;
	for (int i = 0; i <m; ++i){
		cnt_brr[brr[i]]++;
	}

	auto it= cnt_brr.begin();
	while (it != cnt_brr.end()) {
		if (cnt_arr[it->first] != it->second){
			cout << it->first << ' ';
		}
		it++;
	}
}