class Solution {
public:
    bool isSubsequence(string s, string t) {
        string ans = "";
        for(int i=0,j=0; j<t.size(); j++){
            if(t[j] == s[i]){
                ans += s[i];
                i++;
            }
        }
        if(ans == s) return true;
        return false;
    }
};