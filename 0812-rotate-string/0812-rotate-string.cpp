class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.size();
        
            if(s.size()!=goal.size())
            return false;
               string ans=s+s;
                if(ans.find(goal)==-1)
                {
                    return false;
                }
        
         return true;
    }
};