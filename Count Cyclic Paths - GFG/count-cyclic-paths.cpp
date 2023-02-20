//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    long long mod = 1000000007;
    int countPaths(int N){

        if(N<2)
         return 0;
         
        int second = 1;
        int val =0;
        for(int i=2;i<=N;i++)
        { 
            val =(((second+second)%mod)+second)%mod;
            
            if(i%2 == 0 )
            {
                second = val-1; 
            }
            else
            {
                second = val+1;
            }
            
        }
        return val;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        
        Solution ob;
        cout << ob.countPaths(N) << endl;
    }
    return 0; 
}

// } Driver Code Ends