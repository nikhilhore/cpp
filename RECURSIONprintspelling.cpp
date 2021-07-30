#include <iostream>
using namespace std;

const int k=10;
string spellings[k]= {"zero", "one", "two", "three", 
  "four", "five", "six", "seven", "eight", "nine"};

void print_spelling(int n){
	if (n==0) return;
	print_spelling(n/10);
	cout << spellings[n%10] << " ";
}

int main(){
	print_spelling(5437);
	return 0;
}