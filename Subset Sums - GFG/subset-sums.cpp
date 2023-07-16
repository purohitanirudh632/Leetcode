//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    
    vector<int> recur(vector<int>& arr, int N,int index,vector<int>& ans,int sum)
    {
        if(index>=N)
        {
            ans.push_back(sum);
            return ans;
        }
        
        recur(arr,N,index+1,ans,sum);
        recur(arr,N,index+1,ans,sum+arr[index]);
        
     return ans;     
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int> ans;
       return recur(arr,N,0,ans,0);
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends