class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int> mpp;
        for(char c : s)
            mpp[c]++;
        int max = 0;
        char letter = '\0';
        for(auto entry : mpp){
            if(entry.second > max){
                max = entry.second;
                letter = entry.first;
            }
        }
        if(max > (s.length()+1)/2) return "";
        vector<char> ans(s.length());
        int idx = 0;
        while(mpp[letter]-- > 0){
            ans[idx] = letter;
            idx += 2;
        }
        for(auto entry : mpp){
            char c = entry.first;
            while(entry.second-- > 0){
                if(idx >= ans.size()) idx = 1;
                ans[idx] = c;
                idx += 2;
            }
        }
        return string(ans.begin(),ans.end());
    }
};