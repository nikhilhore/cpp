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
    int n;
    cin >> n;
    int arr[n];
    int cnt=0;
    int vowels[5]= {'a', 'e', 'i', 'o', 'u'};
    for (int i=0; i<n; ++i){
        cin >> arr[i];
        for (int j=0; j<words[arr[i]].length(); ++j){
            for (int k=0; k<5; ++k){
                if (words[arr[i]][j]==vowels[k]) cnt++;
            }
        }
    }
    int brr[101]={0};
    for (int i=0; i<n; ++i){
        brr[arr[i]]=1;
    }
    int total=0;
    for (int i=0; i<n; ++i){
        int rem= cnt- arr[i];
        if (brr[rem]==1) total++;
    }
    cout << words[total/2];
    return 0;
}