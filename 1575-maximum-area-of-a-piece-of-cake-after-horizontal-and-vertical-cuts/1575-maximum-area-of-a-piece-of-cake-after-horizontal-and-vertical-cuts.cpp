class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        int mod = 1e9+7;
        long int maxH = 0, maxW = 0;
        horizontalCuts.push_back(h);
        verticalCuts.push_back(w);
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        for(int i=0, prev=0; i<horizontalCuts.size(); i++){
            maxH = max((long int)horizontalCuts[i]-prev,maxH);
            prev = horizontalCuts[i];
        }
        for(int i=0, prev=0; i<verticalCuts.size(); i++){
            maxW = max((long int)verticalCuts[i]-prev,maxW);
            prev = verticalCuts[i];
        }
        return (long int)(maxH*maxW)%mod;
    }
};