#include <iostream>
#include <cmath>
using namespace std;

int powerSum(int s, int p, int c){
    if (pow(c,p)<s){
        return powerSum(s,p,c+1) + powerSum(s-pow(c,p), p,c+1);
    }
    else if (pow(c,p)==s){
        return 1;
    }
    return 0;
}

int main() {
    int s,p;
    cin >> s >> p;
    int c=1;
    cout << powerSum(s,p,c);
    return 0;
}
