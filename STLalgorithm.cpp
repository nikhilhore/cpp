#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/* INPUT
10
9 5 1 3 4 0 7 8 2 6 
*/

void print_vector(vector <int> v){
	for (auto i:v){
		cout << i << " ";
	}
	cout << endl;
}

int main(){
	int n, temp;
	cin >> n;
	vector <int> v;
	for (int i=0; i<n; ++i){
		cin >> temp;
		v.push_back(temp);
	}
	print_vector(v);
	/* IMP NOTE: binary_search algorithm only
	checks if the element is equal to last case */
	cout << binary_search(v.begin(), v.end(), 4) << endl;
	cout << binary_search(v.begin(), v.end(), 6) << endl;
	cout << lower_bound(v.begin(), v.end(), 7)-v.begin() << endl;
	cout << upper_bound(v.begin(), v.end(), 7)-v.begin() << endl;
	cout << endl;

	sort(v.begin(), v.end());
	print_vector(v);

	/* This rotate function is very useful 
	for left and right rotate questions */
	rotate(v.begin(), v.begin()+4, v.end());
	print_vector(v);
	return 0;
}