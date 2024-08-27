class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map<int, int> mpp;
        for(auto num : arr) mpp[num]++;
        int target = arr.size()/4;
        for(auto num : mpp){
            if(num.second > target) return num.first;
        }
        return -1;
    }
};