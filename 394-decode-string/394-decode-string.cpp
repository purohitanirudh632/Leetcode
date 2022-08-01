class Solution {
public:
    string decodeString(string s) {
        
        
        int i=0;
        stack<char> st;
        while(i<s.length())
        {   
            if(s[i]!=']')
              st.push(s[i]);
            else
            {
                string s1= "";
                while(st.top() != '[')
                {
                    s1 = st.top() + s1; 
                    st.pop();
                }
                
                st.pop();
                
                cout<<s1;
                
                string k="";
                
              while(!st.empty() && isdigit(st.top()) == true) 
              {
                  k = st.top() + k;
                  st.pop();
              }
                
                int l = stoi(k) ;
                cout<<l;
                
                string s2;
                
                while(l--)
                {
                    s2 = s2+s1;
                }
                
                int j =0;
               while(j < s2.length())
               {
                   st.push(s2[j]);
                   j++;
               }
                  
            }
            
           i++; 
        }
       
        string  result="";
      while(!st.empty())  
      {
          result = result + st.top();
          st.pop();
      }
        
         reverse(result.begin(), result.end());
        
     return result;
    }
};