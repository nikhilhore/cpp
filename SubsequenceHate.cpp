#include <bits/stdc++.h>
using namespace std;

long long hate(string str, long long l){
    if (l<3) return 0;
    else if (l==3){
        if (str=="101" || str=="010") return 1;
        else return 0;
    }
    else {
        long long c0=0, c1=0;
        for (long long i=0; i<l; ++i){
            if (str[i]=='0') c0++;
        }
        c1= l-c0;
        if (c0<2){
            if (str[0]=='0' || str[l-1]=='0') return 0;
            return c0;
        }
        if (c1<2){
            if (str[0]=='1' || str[l-1]=='1') return 0;
            return c1;
        }

        long long pos1=0, pos2=0;
        if (str[0]=='0'){
            if (str[l-1]=='0'){
                for (long long i=1; i<l-1; ++i){
                    if (str[i]=='1'){
                        pos1=i;
                        break;
                    }
                }
                for (long long i=l-2; i>0; --i){
                    if (str[i]=='1'){
                        pos2=l-1-i;
                        break;
                    }
                }
                long long minn= min(c0-pos1, c0-pos2);
                return min(minn, c1);
            }
            else {
                for (long long i=1; i<l-1; ++i){
                    if (str[i]=='1'){
                        pos1= i;
                        break;
                    }
                }
                for (long long i=l-2; i>0; --i){
                    if (str[i]=='0'){
                        pos2= l-i-1;
                        break;
                    }
                }
                // cout << pos1 << ' ' << pos2 << endl;
                return min(c0-pos1, c1-pos2);
            }
        }
        else {
            if (str[l-1]=='1'){
                for (long long i=1; i<l-1; ++i){
                    if (str[i]=='0'){
                        pos1=i;
                        break;
                    }
                }
                for (long long i=l-2; i>0; --i){
                    if (str[i]=='0'){
                        pos2=l-1-i;
                        break;
                    }
                }
                long long minn= min(c1-pos1, c1-pos2);
                return min(minn, c0);
            }
            else {
                for (long long i=1; i<l-1; ++i){
                    if (str[i]=='0'){
                        pos1= i;
                        break;
                    }
                }
                for (long long i=l-2; i>0; --i){
                    if (str[i]=='1'){
                        pos2= l-i-1;
                        break;
                    }
                }
                // cout << pos1 << ' ' << pos2 << endl;
                return min(c1-pos1, c0-pos2);
            }
        }
    }
    return 0;
}

int main(){
    long long n=0;
    cin >> n;
    while (n--){
        string str;
        cin >> str;
        long long l= str.size();
        long long a= hate(str, l);
        cout << a << endl;
    }
    return 0;
}