class Solution {
public:
    string makeGood(string s) {
        
        stack<char> st;
        for(int i=s.length()-1;i>=0;i--)
        {
             if(st.empty())
                 st.push(s[i]);
             else 
             {
                 int num1 = st.top();
                 int num2 = s[i];
                 if(abs(num2-num1)==32)
                     st.pop();
                   else
                    st.push(s[i]);
             }
                    
        }
       s.clear();
        while(!st.empty())
        {
            s+=st.top();
            st.pop();
        }
        
        return s;
    }
};