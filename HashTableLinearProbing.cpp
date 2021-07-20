#include <bits/stdc++.h>
using namespace std;
const int size= 10;

int arr[size];
void init(){
    for (int i=0; i<size; ++i){
        arr[i]= -1;
    }
}

bool insert(int data){
    int index= data % size;
    int key= index;
    while(arr[index]!=-1){
        index= (index+1) % size;
        if (index==key){
            cout << "Hash Table full" << endl;
            return false;
        }
    }
    arr[index]= data;
    return true;
}

bool del(int data){
    int index= data % size;
    int key= index;
    while(arr[index]!=data){
        index= (index+1) % size;
        if (index==key){
            return false;
        }
    }
    arr[index]= -1;
    return true;
}

int search(int data){
    int index= data % size;
    int key= index;
    while(arr[index]!=data){
        index= (index+1) % size;
        if (index==key){
            return index;
        }
    }
    return -1;
}

int main(){
    init();
    int temp;
    for (int i=0; i<size; ++i){
        cin >> temp;
        insert(temp);
    }
    for (int i=0; i<size; ++i){
        cout << arr[i] << " ";
    }
    return 0;
}