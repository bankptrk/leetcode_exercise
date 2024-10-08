class Solution {
public:
    void maxHeapify(vector<int>& nums, int n, int i){
        int largest = i;
        int l = (2*i)+1, r = (2*i)+2;
        if(l<n && nums[l] > nums[largest]) largest = l;
        if(r<n && nums[r] > nums[largest]) largest = r;
        if(largest != i){
            swap(nums[largest],nums[i]);
            maxHeapify(nums,n,largest);
        }
    }
    void heapSort(vector<int>& nums, int n){
        for(int i=n/2-1; i>=0; i--){
            maxHeapify(nums,n,i);
        }
        for(int i=n-1; i>0; i--){
            swap(nums[i],nums[0]);
            maxHeapify(nums,i,0);
        }
    }

    void sortColors(vector<int>& nums) {
        heapSort(nums,nums.size());
    }
};