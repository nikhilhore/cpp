#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
string x;
getline(cin, x);
for (int i=0; i<x.length(); i+=1){
    if (isupper(x[i])) cout << x[i];
}
return 0;
}
