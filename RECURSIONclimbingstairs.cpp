#include <iostream>
#include <vector>
using namespace std;

int noofways(int stairs){
	if (stairs<0) return 0;
	if (stairs==0) return 1;
	return noofways(stairs-1)+noofways(stairs-2)+noofways(stairs-3);
}

int main(){
	int stairs= 5;
	int ways= noofways(stairs);
	cout << ways;
	return 0;
}