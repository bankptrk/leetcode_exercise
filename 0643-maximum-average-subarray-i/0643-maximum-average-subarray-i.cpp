class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0;
        double avg = 0, maxavg = INT_MIN;
        for(int i=0; i<nums.size(); i++){
            if(i < k) sum += nums[i];
            else sum += nums[i]-nums[i-k];
            if(i >= k-1){
                avg = double(sum)/k;
                maxavg = max(maxavg,avg);
            }
        }
        return maxavg;
    }
};