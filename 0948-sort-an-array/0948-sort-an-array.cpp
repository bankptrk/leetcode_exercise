class Solution {
public:
    void maxHeapify(vector<int>& nums,int n,int i){
        int largest = i;
        int leftc = (2*i)+1, rightc = (2*i)+2;
        if(leftc < n && nums[leftc] > nums[largest]){
            largest = leftc;
        }
        if(rightc < n && nums[rightc] > nums[largest]){
            largest = rightc;
        }
        if(largest != i){
            swap(nums[i],nums[largest]);
            maxHeapify(nums,n,largest);
        }
    }
    void heapsort(vector<int> &nums,int n){
        for(int i=n/2-1; i>=0; i--){
            maxHeapify(nums,n,i);
        }
        for(int i=n-1; i>0; i--){
            swap(nums[0],nums[i]);
            maxHeapify(nums,i,0);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        heapsort(nums,nums.size());
        return nums;
    }
};