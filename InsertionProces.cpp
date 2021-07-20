#include <bits/stdc++.h>
using namespace std;

void printarray(int arr[], int n){
    for (int i=0; i<n; ++i) cout << arr[i] << ' ';
}

void insertelement(int arr[], int n, int element, int k){
    for (int i=n-1; i>=k; --i){
        arr[i+1]=arr[i];
    }
    arr[k]= element;
}

int main(void){
    int n, element, k;
    cin >> n >> element >> k;
    int arr[n];
    for (int i=0; i<n; ++i){
        cin >> arr[i];
    }
    insertelement(arr, n, element, k-1);
    printarray(arr, n+1);
    return 0;
}