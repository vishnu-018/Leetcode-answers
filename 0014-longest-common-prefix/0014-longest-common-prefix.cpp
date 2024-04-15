class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        string res="";
        sort(strs.begin(),strs.end());
        string first=strs[0],last=strs[n-1];
        for(int i=0;i<min(first.size(),last.size());i++)
        {
            if(first[i]!=last[i])
            {
                return res;
            }
            else
            {
                res+=first[i];
            }
        }
        return res;
    }
};