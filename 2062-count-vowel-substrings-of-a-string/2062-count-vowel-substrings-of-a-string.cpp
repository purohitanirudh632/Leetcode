class Solution {
public:
    bool vovel(char ch)
    {
        if(ch=='a' || ch=='o' || ch=='i' || ch=='e'|| ch=='u')
            return true;
        
           return false; 
    }
    
    int countVowelSubstrings(string word) {
     
        unordered_map<char,int> mp;
        int ans =0;
        
        for(int i=0;i<word.length();i++)
        {
            mp.clear();
            
            for(int j=i;j<word.length();j++)
            {
               
                
            if(vovel(word[j]) == false)
             break;
            
            //cout<<"hiii";
                mp[word[j]]++;
              
             //cout<<mp.size();   
            if(mp.size()==5) ans++;
           
            }  
        }
        return ans;
    }
};