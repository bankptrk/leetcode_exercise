class Solution {
private:
    int findShaperIndex(string& str){
        int i = 0;
        for(auto c : str){
            if(c != '#') str[i++] = c;
            else if(i>0) i--;
        }
        return i;
    }
public:
    bool backspaceCompare(string s, string t) {
        int j = findShaperIndex(s);
        int k = findShaperIndex(t);
        if(j != k) return false;
        for(int i=0; i<k; i++) if(s[i] != t[i]) return false;
        return true;
    }
};