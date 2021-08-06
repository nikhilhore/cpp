// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> helper(int input[], vector<int> output, int index, int n, int s){
        int x= output.size();
        int sum= 0;
        for (int i=0; i<x; ++i){
            sum+= output[i];
        }
        if (sum==s) return output;
        output= helper(input, output, index+1, n, s);
        output.push_back(input[index]);
        output= helper(input, output, index+1, n, s);
        return output;
    }
    
    vector<int> subarraySum(int arr[], int n, int s)
    {
        // Your code here
        vector <int> output;
        output= helper(arr, output, 0, n, s);
        if (output.empty()) output.push_back(-1);
        return output;
    }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
    return 0;
}  // } Driver Code Ends