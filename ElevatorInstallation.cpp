#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
  int temp;
  vector <int> v;
  while(cin >> temp){
    v.push_back(temp);
  }
  int n= v.size();
  if (n==2) {
    if (v[0]==v[1]){
      cout << v[0];
    }
    else cout << 0;
    return 0;
  }
  sort(v.begin(), v.end());
  int l=0,r=0;
  int maxx= 0;
  int i=0, j=n-1;
  while(abs(i-j)>1){
    l+= v[i++];
    r+= v[j--];
    if (l==r) maxx= l;
    swap(l,r);
  }
  if (l<r) l+= v[n/2];
  else r+= v[n/2];
  if (l==r) maxx= l;
  cout << maxx;
  return 0;
}