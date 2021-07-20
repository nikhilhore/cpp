#include <iostream>
using namespace std;
int *reverseArray(int A[],int N){
	int *arr;
	arr=new int[N];
	for (int i=0; i<N; ++i){
		arr[i]=A[N-i-1];
	}
	return arr;
}

int main(){
	int N;
	cin >> N;
	int *A;
	A=new int[N];
	int *array;
	array=new int[N];
	for (int i=0; i<N; ++i){
		cin >> A[i];
	}
	array=reverseArray(A, N);
	for (int i=0; i<N; ++i){
		cout << array[i] << ' ';
	}
	return 0;
}