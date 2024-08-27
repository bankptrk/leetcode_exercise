class Solution {
public:
    int arrangeCoins(int n) {
        return (int)(-0.5 + sqrt(2 * long(n) + 0.25));
    }
};
