#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
	string str;
	getline(cin, str);
    for (int i=0; i<str.size(); ++i){
        if (str[i]==',') str[i]='\n';
    }
    cout << str;
    return 0;
}