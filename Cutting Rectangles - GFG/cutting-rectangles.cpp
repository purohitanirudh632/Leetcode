//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
    
    long long int gcd(long long int a, long long int b)
    {
     return b == 0 ? a : gcd(b, a % b);  
    }
public:
    vector<long long int> minimumSquares(long long int L, long long int B)
    {
        vector<long long int> ans;
        
        long long int val = gcd(L,B);
        
        long long int temp1 = L/val;
        long long int temp2 = B/val;
        ans.push_back(temp1*temp2);
        ans.push_back(val);
        
     return ans;    
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int L, B;
        cin>>L>>B;
        
        Solution ob;
        vector<long long int> ans = ob.minimumSquares(L, B);
        cout<<ans[0]<<" "<<ans[1]<<"\n";
    }
    return 0;
}
// } Driver Code Ends