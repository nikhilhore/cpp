#include <iostream>
#include <cmath>
using namespace std;

string words[101];

void numtoword(){
    words[0]="zero";
    string a[10]= {"", "one", "two", "three", 
            "four", "five", "six", "seven", "eight", "nine"};
    string b[10]= {"", "eleven", "twelve", "thirteen", "fourteen", "fifteen", 
            "sixteen", "seventeen", "eighteen", "nineteen"};
    string c[10]= {"", "", "twenty", "thirty", "forty", "fifty", 
            "sixty", "seventy", "eighty", "ninety"};
    for (int i=1; i<10; ++i){
        words[i]= a[i];
    }
    words[10]= "ten";
    for (int i=11; i<20; ++i){
        words[i]= b[i-10];
    }
    for (int i=20; i<100; ++i){
        int tensplace= i/10;
        int onesplace= i%10;
        words[i]=c[tensplace]+a[onesplace];
    }
    words[100]= "hundred";
}

int main(){
    numtoword();
    for (int i=0; i<=100; ++i){
        cout << words[i] << endl;
    }
    return 0;
}