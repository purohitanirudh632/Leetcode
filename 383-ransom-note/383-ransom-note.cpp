class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
     
        map<char,int> mp;
        
        for(int i=0;i<magazine.length();i++)
        {
            mp[magazine[i]]++;
        }
        
        for(int j=0;j<ransomNote.length();j++)
        {
            if(mp[ransomNote[j]] == 0)return false;
            else
                mp[ransomNote[j]]--;
        }
     return true;   
    }
};