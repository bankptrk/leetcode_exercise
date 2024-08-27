class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(int num : nums)
            mpp[num]++;
        int n = mpp.size();
        mpp.clear();
        int i = 0, j = 0, cnt = 0;
        while(i < nums.size() && j < nums.size()){
            mpp[nums[j]]++;
            while(i <= j && n == mpp.size()){
                cnt += nums.size()-j;
                mpp[nums[i]]--;
                if(mpp[nums[i]] == 0) mpp.erase(nums[i]);
                i++;
            }
            j++;
        }
        return cnt;
    }
};