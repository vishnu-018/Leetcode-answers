class Solution {
public:
    bool isValid(string s) {
        stack<int>st;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(' ||s[i]=='{'||s[i]=='[')
            {
                st.push(s[i]);
            }
            else
            {
                if(st.empty())
                {
                    return false;
                }
                char ch=st.top();
                st.pop();
                if(s[i]==')'&&ch!='('||s[i]==']'&&ch!='['||s[i]=='}'&&ch!='{')
                return false;
                
            }
        }
        if(st.empty()==true)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};