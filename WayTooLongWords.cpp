#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i=0; i<n; i+=1) {
        string a,b,d,e;
        cin >> a;
        if (a.length()<=10){
            cout << a<< endl;
        }
        else {
            int c;
            c=a.length()-2;
            b=to_string(c);
            d=a.front();
            e=a.back();
            cout << d+b+e << endl;
        }
    }
return 0;}
