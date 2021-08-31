#include <iostream>
#include <time.h>
using namespace std;

int main(){
	int n;
	int a, b;
	cin >> n >> a >> b;
	srand(time(0));
	for (int i=0; i<n; ++i){
		cout << ((rand()%(b+1-a))+a) << endl;
	}
	return 0;
}