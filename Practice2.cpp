#include <bits/stdc++.h>
using namespace std;

int main(){
    int a=10;
    try {
        int b=5;
        char c= '%';
        string s= "nik";
        if (a==10) throw(b);
        else if (a==3) throw(c);
        else throw(s);
    }
    catch(int x){
        cout << x;
    }
    catch(char x){
        cout << x;
    }
    catch(string s){
        cout << s;
    }
    return 0;
}