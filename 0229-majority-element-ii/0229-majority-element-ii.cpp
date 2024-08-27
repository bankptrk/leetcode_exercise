class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> mpp;
        vector<int> ans;
        for(auto num : nums) mpp[num]++;
        for(auto m : mpp){
            if(m.second > nums.size()/3) ans.push_back(m.first);
        }
        return ans;
    }
};