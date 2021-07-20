#include<bits/stdc++.h>
using namespace std;
long merge(vector<int> &arr,int l,int m,int h)
{
    long inversion1=0;
    int n1=m-l+1, n2=h-m;
    int left[n1],right[n2];
    for(int i=0;i<n1;i++)
    {
        left[i]=arr[l+i];
    }
    for(int i=0;i<n2;i++)
    {
        right[i]=arr[m+1+i];
    }
    int i=0, j=0, k=l;
    while(i<n1 && j<n2)
    {
        if(left[i]<=right[j])
        {
            arr[k++]=left[i++];
        }
        else
        {
            inversion1+=(n1-i);
            arr[k++]=right[j++];
        }
    }
    while(i<n1)
    {
        arr[k++]=left[i++];
    }
    while(j<n2)
    {
        arr[k++]=right[j++];
    }
  return inversion1;
}

long countInversions(vector<int> &arr,int l,int h)
{
    long inversion = 0;

        if(l<h)
        {
            int m = l + (h -l)/2;
            inversion=inversion+countInversions(arr,l,m);
            inversion=inversion+countInversions(arr,m+1,h);
            inversion=inversion+merge(arr,l,m,h);
        }

 return inversion;
}
int main()
{
    vector<long> ans;
    int d;
    cin>>d;
    while(d--)
    {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        long a=countInversions(arr,0,arr.size()-1);
        ans.push_back(a);
    }
    for(auto it:ans)
    {
        cout<<it<<endl;
    }
    return 0;
}