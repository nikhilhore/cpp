#include <iostream>
using namespace std;
int main() {
    string a,b,c;
    int l;
    cin >>a;
    l=a.length()-2;
    c="h"+string(2*l,'e')+"y";
    cout << c;
    return 0;
}
