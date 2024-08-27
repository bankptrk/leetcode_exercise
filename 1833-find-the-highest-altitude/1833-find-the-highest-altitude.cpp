class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int al = 0, maxal = 0;
        for(int i:gain){
            al += i;
            maxal = max(al,maxal);
        } 
        return maxal;
    }
};