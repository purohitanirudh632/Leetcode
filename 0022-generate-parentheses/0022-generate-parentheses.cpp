class Solution {
public:
    
 bool isValid(string s) {
        int count = 0;
        
        if(s.length() == 1)
        return false;
        
        stack <char> st;
        for(int i=0;i<s.length();i++)
        {
         
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
            {  
                st.push(s[i]);
            }
            
            else if(st.empty()==false)
            {
                 if ( (s[i]==')' && st.top() == '(') || (s[i]=='}' && st.top() == '{')|| (s[i]==']' && st.top() == '['))
                {
                
                    st.pop();
                }
                else
                {
                    return false;
                }
                
            } 
            else
            {
                return false;
            }
           
        }
        if(st.empty()==true)
           return true;    
        else
           return false;
        
    }
    
   void generate(string str,int n ,int open,int close,int index,vector<string> &ans)
    {
       
        if(index == 2*n)
        {
            if(isValid(str))
            {
                ans.push_back(str);
            } 
            
          return;  
        }
        
        if(open!=n)
            generate(str+'(',n,open+1,close,index+1,ans);
        if(close!=n)
            generate(str+')',n,open,close+1,index+1,ans);

       
    }
    
    vector<string> generateParenthesis(int n) {
      
        int top = n,tcl=n;
        string str;
            vector<string> ans;
        generate(str,n,0,0,0,ans);
        
        return  ans;
    }
};