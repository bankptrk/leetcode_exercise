class Solution {
public:
    int minDeletions(string s) {
        int deletion = 0;
        vector<int> freq(26);
        for(char c : s) freq[c-'a']++;
        sort(freq.begin(),freq.end());
        for(int i=24; i>=0; i--){
            if(freq[i] >= freq[i+1]){
                int prev = freq[i];
                freq[i] = max(0,freq[i+1]-1);
                deletion += prev - freq[i];
            }
        }
        return deletion;
    }
};