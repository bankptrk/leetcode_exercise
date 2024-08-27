class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x;
        long long rev_num = 0;
        while(x > 0){
            rev_num = (rev_num*10)+(x%10);
            x /= 10;
        }
        if(temp == rev_num) return true;
        return false;
    }
};