#include <iostream>
#include <vector>
using namespace std;
int runningTime(vector <int> a){
    int n= a.size();
    int cnt=0;
    for (int i=0; i<n; ++i){
        for (int j = 0; j < n - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                cnt+=1;
            }
        }
    }
    return cnt;
}

int main(){
    int n;
    cin >> n;
    vector <int> a;
    int temp;
    for (int i=0; i<n; ++i){
        cin >> temp;
        a.push_back(temp);
    }
    int t= runningTime(a);
    cout << t;
    return 0;
}