#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n, r1, r2, target;
	cin >> n >> r1 >> r2 >> target;
	int tv, ntv, days, total=0, patients;
	for (int i=0; i<=n; ++i){
		tv=i, ntv=n-i;
		total=0;
		for (int j=1; j<=12; ++j){
			days= 31;
			if (j==2) days=28;
			else if (j==4 || j==6 || j==9 || j==11) days=30;
			for (int k=1; k<=days; ++k){
				patients= pow((6-j), 2) + abs(k-15);
				if (patients<=ntv) {
					total+= patients*r2;
					continue;
				}
				if (patients>ntv && patients<=n) {
					total+= ntv*r2 + (patients-ntv)*r1;
					continue;
				}
				total+= tv*r1 + ntv*r2;
			}
		}
		if (total>=target) {
			break;
		}
	}
	cout << tv;
	return 0;
}