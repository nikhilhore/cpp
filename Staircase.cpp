#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i =1; i<=n; i+=1) {
        cout << string(n-i, ' ') << string(i, '#') << endl;
    }
return 0;}
