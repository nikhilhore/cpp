#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q;
    cin >> q;
    set <int> s;
    for (int i=0; i<q; ++i){
        int a, b;
        cin >> a;
        if (a==1){
            cin >> b;
            s.insert(b);
        }
        if (a==2){
            cin >> b;
            s.erase(b);
        }
        if (a==3){
            for (auto i: s){
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}
