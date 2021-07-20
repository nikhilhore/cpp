#include <iostream>
using namespace std;
int main(){
	string m,n;
	int c=0;
	cin >> m;
	cin >> n;
	for (int i=0; i<m.length(); ++i) {
        int a,b;
        a=m[i];
        b=n[i];
        if (a>96) a-=32;
        if (b>96) b-=32;
        if (a==b) c=0;
        else if (a<b){c=-1; break;}
        else {c=1; break;}
	}
	cout <<c;
	return 0;
}
