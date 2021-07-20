#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int low, int mid, int high){
    int n1= mid-low+1; // Here mid is included in left.
    int n2= high-mid;  // Elements after mid are considered in right.
    int L[n1], R[n2];
    for (int i=0; i<n1; ++i) L[i]= arr[low+i];
    for (int i=0; i<n2; ++i) R[i]= arr[mid+1+i];
    int i=0, j=0, k=low;
    while(i<n1 && j<n2){
        if (L[i]<=R[j]){
            arr[k]= L[i];
            i++;
        }
        else {
            arr[k]= R[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k]= L[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]= R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int low, int high){
    if (low>=high) return;
    int mid= low + (high-low)/2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);
    merge(arr, low, mid, high);
}

int main(void){
    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; ++i){
        cin >> arr[i];
    }
    int low=0, high=n-1;
    mergeSort(arr, low, high);
    for (int i=0; i<n; ++i){
        cout << arr[i] << ' ';
    }
    return 0;
}