class Solution {
    public int findComplement(int num) {
        if(num == 0) return 1;
        if(num == 1) return 0;
        int bitLength = Integer.toBinaryString(num).length();
        int mask = (1 << bitLength)-1;
        return num ^ mask;
    }
}