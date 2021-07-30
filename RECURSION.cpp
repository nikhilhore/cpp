#include <iostream>
using namespace std;

/* Function calling itself is RECURSION
  Dividing a problem into small problems */
/* Base case is important
  Base case must return something */

int fib(int n){
	if (n==0 || n==1) return n;
	return fib(n-1)+fib(n-2);
}

int fact(int n){
	if (n==1) return 1;
	return n*fact(n-1);
}

// head recursion
/* Processing occurs after the recursive call */
void print_count_head(int n){
	if (n==0) return;
	print_count_head(n-1);
	cout << n << " ";
}

// tail recursion
/* Processing occurs before the recursive call */
void print_count_tail(int n){
	if (n<=0) return;
	cout << n << " ";
	print_count_tail(n-1);
}

int main(){
	cout << fib(5) << endl;
	cout << fact(5) << endl;
	print_count_head(5);
	cout << endl;
	print_count_tail(5);
	return 0;
}