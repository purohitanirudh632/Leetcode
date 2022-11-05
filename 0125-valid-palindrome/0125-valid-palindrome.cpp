class Solution {
public:
    bool isPalindrome(string s) {
        
        if(s.length()==0)
            return true;
        
        int i=0;
        int j=s.length()-1;
        
        while(i<j)
        {
            int val1 = (int)s[i];
            int val2 = (int)s[j];
            
             //cout<<i<<" "<<j<<endl;
            if((val1>=65 && val1<=90 ||val1>=97 && val1<=122||isdigit(s[i])) && (val2>=65 && val2<=90 ||val2>=97 && val2<=122||isdigit(s[j])))
            {
                 if(tolower(s[i]) ==tolower(s[j]))
                 {
                     i++;
                     j--;
                 }
                else
                {
                    // cout<<s[i]<<" "<<s[j];
                    return false;
                }
            }
            else if(val1>=65 && val1<=90 ||val1>=97 && val1<=122 ||isdigit(s[i]))
            {
                j--;
            }
            else if(val2>=65 && val2<=90 ||val2>=97 && val2<=122||isdigit(s[j]))
            { i++;
            }
            else
            {
                i++;
                j--;
            }
            
        }
        
        return true;
    }
};