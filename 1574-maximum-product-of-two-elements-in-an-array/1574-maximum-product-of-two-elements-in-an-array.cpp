class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int f_max = INT_MIN;
        int s_max = INT_MIN;
        for(auto num : nums){
            if(num > f_max){
                s_max = f_max;
                f_max = num;
            }else if(num > s_max) s_max = num;
        }
        return (f_max-1)*(s_max-1);
    }
};