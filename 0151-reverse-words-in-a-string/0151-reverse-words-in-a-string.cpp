class Solution {
public:
    string reverseWords(string s) {
        int i = 0;
        int n = s.size();
        string word, ans;     
        while (i < n) {
            while (i < n && s[i] == ' ') {
                i++;
            }
            if (i >= n) break;
            int j = i;
            while (j < n && s[j] != ' ') {
                j++;
            }
            word = s.substr(i, j - i);

            if (ans.length() == 0) {
                ans = word;
            } else {
                ans = word + " " + ans;
            }
            i = j + 1;
        }
        
        return ans;
    }
};
