#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int p, t, n1, n2;
    cin >> p >> t;
    cin >> n1;
    double arr[n1][2];
    for (int i=0; i<n1; ++i){
        cin >> arr[i][0] >> arr[i][1];
    }
    cin >> n2;
    double brr[n2][2];
    for (int i=0; i<n2; ++i){
        cin >> brr[i][0] >> brr[i][1];
    }
    int sum1=0, sum2=0;
    int emi1=0, emi2=0;
    for (int i=0; i<n1; ++i){
        int years= arr[i][0];
        int rate= arr[i][1];
        int base= pow((1+rate),(years*12));
        emi1= (p*rate)/(1-1/base);
        sum1+= years*emi1;
    }
    for (int i=0; i<n2; ++i){
        int years= brr[i][0];
        int rate= brr[i][1];
        int base= pow((1+rate),(years*12));
        emi2= (p*rate)/(1-1/base);
        sum2+= years*emi2;
    }
    // cout << sum1 << " " << sum2 << endl;
    if (sum1<=sum2) cout << "Bank A";
    else cout << "Bank B";
    return 0;
}