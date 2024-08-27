class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int j = jewels.size();
        int s = stones.size();
        map<char,int> mp;
        for(int i=0;i<j;i++){
            mp[jewels[i]]= 1;
        }
        int total=0;
        for(int i=0;i<s;i++){
            total += mp[stones[i]];
        }
        return total;

    }
};