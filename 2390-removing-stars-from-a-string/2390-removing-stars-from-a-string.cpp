class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        string str="";
        
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='*')
                str.pop_back();
            else
            str.push_back(s[i]);
        }
        
//         while(!st.empty())
//         {
//             str = st.top() + str;
//             st.pop();
//         }
        
        return str;
    }
};