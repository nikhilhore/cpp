#include <bits/stdc++.h>
using namespace std;

vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {
    vector <int> rotated;
    int n= a.size();
    k= k%n;
    for (int i=n-k; i<n; ++i){
        rotated.push_back(a[i]);
    }
    for (int i=0; i<n-k; ++i){
        rotated.push_back(a[i]);
    }
    int l= queries.size();
    vector <int> newque;
    for (int i=0; i<l; ++i){
        newque.push_back(rotated[queries[i]]);
    }
    return newque;
}

int main(){
	int n=0, k=0, q=0, temp=0;
	cin >> n >> k >> q;
	vector <int> a, queries, newque;
	for (int i=0; i<n; ++i){
		cin >> temp;
		a.push_back(temp);
	}
	for (int i=0; i<q; ++i){
		cin >> temp;
		queries.push_back(temp);
	}
	newque= circularArrayRotation(a, k, queries);
	for (int i=0; i<q; ++i){
		cout << newque[i] << endl;
	}
	return 0;
}