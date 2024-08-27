class KthLargest {
    PriorityQueue<Integer> pq; //min heap
    int size;
    public KthLargest(int k, int[] nums) {
        pq = new PriorityQueue<>();
        this.size = k;
        for(int num : nums){
            add(num);
            if(pq.size()>k) pq.remove();
        }
    }
    
    public int add(int val) {
        pq.add(val);
        if(pq.size() > size) pq.remove();
        return pq.peek();
    }
}

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest obj = new KthLargest(k, nums);
 * int param_1 = obj.add(val);
 */