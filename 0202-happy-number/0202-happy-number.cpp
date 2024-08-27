class Solution {
public:
    int helperisHappy(int n){
        int ans = 0;
        while(n){
            int temp = n%10;
            ans += (temp*temp);
            n /= 10;
        }
        return ans;
    }
    bool isHappy(int n) {
        int slow = n, fast = helperisHappy(n);
        while(slow != fast){
            slow = helperisHappy(slow);
            fast = helperisHappy(helperisHappy(fast));
        }
        return slow == 1;
    }
};