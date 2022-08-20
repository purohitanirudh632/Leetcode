class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> mp;
        
        for(int i=0;i<s.length();i++)
        {
            mp[s.at(i)]++;
        }
        int count=0;
        int maxi =0;
        int len =0;
        
        for(auto x: mp)
        {
            if(x.second % 2 == 0)
                len+= x.second;
            else{
                len+= x.second-1;
                count++;
            }
        }
        
        if(count==0)
            return len;
        else
        return len+maxi+1;
    }
};