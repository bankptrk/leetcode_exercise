class Solution {
public:
    int hammingWeight(uint32_t n) {
        int cntbit = 0;
        while(n){
            n &= (n-1);
            cntbit++;
        }
        return cntbit;
    }
};