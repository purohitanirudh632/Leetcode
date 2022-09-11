class Solution {
public:
    int partitionString(string s) {
        int count =0;
        
        unordered_map<char,int> mp;
        
        for(int i=0;i<s.length();i++)
        {
            if(mp.count(s[i])!=0 ){
                count++;
                mp.clear();
                mp[s[i]]++;
            }
            else{
                mp[s[i]]++;
            }
            
            // cout<<i<<" "<< count<<endl;
        }
        
        return count+1;
    }
};