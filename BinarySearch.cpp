/* For Binary Search algorithm to work the array is needed to be sorted.
 Here we are assuming the array is already sorted. */

#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int l, int r, int key){
    if (r>=l){
        int m= l+(r-l)/2;
        if (key>arr[m]) return binarySearch(arr, m+1, r, key);
        else if (key<arr[m]) return binarySearch(arr, l, m-1, key);
        else return m;
    }
    return -1;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; ++i){
        cin >> arr[i];
    }
    int key;
    cin >> key;
    int index= binarySearch(arr, 0, n-1, key);
    if (index==-1) cout << "Not found!" << endl;
    else cout << "Found first instance at index " << index << endl;
    return 0;
}