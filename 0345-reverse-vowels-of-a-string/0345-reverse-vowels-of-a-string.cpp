class Solution {
public:
    bool isvovel(char ch)
    {
       if( ch == 'a' ||ch == 'e'||ch == 'i'||ch == 'o'||ch == 'u'||ch == 'A'||ch == 'E'||ch == 'I'||ch == 'O'||ch == 'U')
       {
           return true;
       }
    
        return false;
    }
    
    string reverseVowels(string s) {
       
        int i=0;
        int j = s.length()-1;
        
        while(i<=j)
        {
            if(isvovel(s[i]) && isvovel(s[j]))
            {
                char temp = s[i];
                s[i] = s[j];
                s[j]=temp;
                i++;
                j--;
            }
            else if(isvovel(s[i]) && !isvovel(s[j])) 
            {
                j--;
            }
            else if(!isvovel(s[i]) && isvovel(s[j]))
            {
                
             i++;
             }
             else
            {
                i++;
                j--;
            }
        }
        return s;
    }
};