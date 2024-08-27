class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> mpp;
        for(auto a : strs){
            string word = a;
            sort(word.begin(),word.end());
            mpp[word].push_back(a);
        }
        for(auto a : mpp) ans.push_back(a.second);
        return ans;
    }
};