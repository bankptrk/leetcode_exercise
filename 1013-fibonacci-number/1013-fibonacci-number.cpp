class Solution {
public:
    int fib(int n) {
        if(n < 2) return n;
        vector<int> ans(n+1);
        ans[0] = 0;
        ans[1] = 1;
        for(int i=2;i<ans.size();i++){
            ans[i] = ans[i-1]+ans[i-2];
        }
        return ans[n];
    }
};