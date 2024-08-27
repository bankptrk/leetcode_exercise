class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<vector<int>> ans;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                long target2 = (long)target-nums[j]-nums[i];
                int start = j+1, end = n-1;
                while(start<end){
                    if(nums[start]+nums[end] == target2){
                        ans.push_back({nums[i],nums[j],nums[start],nums[end]});
                        while(start < end && nums[start] == nums[start+1]) start++;
                        while(start < end && nums[end] == nums[end-1]) end--;
                        start++;
                        end--;
                    }else if(nums[start]+nums[end] < target2) start++;
                    else end--;
                }
                while(j+1 < n && nums[j] == nums[j+1]) j++;
            }
            while(i+1 < n && nums[i] == nums[i+1]) i++;
        }
        return ans;
    }
};