#include <iostream>
#include <string>
using namespace std;
string timeConversion(string s) {
    int c=stoi(s.substr(0,2));
    int d;
    string e="00", f, g, x, y="AM",z="PM";
    if (s.find(z)!=string::npos) {
        if (c==12) {d=12;}
        else {d=c+12;}
        f=to_string(d);
        return f+s.substr(2,6);
    }
    else {
        if (c==12) {
                return e+s.substr(2,6);
        }
        else {return s.substr(0,8);}
    }
}
int main() {
    string s;
    cin >> s;
    cout << timeConversion(s);
    return 0;
}
