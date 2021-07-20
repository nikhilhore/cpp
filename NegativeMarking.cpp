#include <bits/stdc++.h>
using namespace std;
int main(){
	float n, a, m;
	cout << "Enter total number of questions= ";
	cin >> n;
	cout << endl << "Enter number of attempted questions= ";
	cin >> a;
	cout << endl << "Enter marks= ";
	cin >> m;
	float total=a*4;
	float w= (total-m)/5;
	cout << endl << "Correct questions= " << a-w;
	return 0;
}