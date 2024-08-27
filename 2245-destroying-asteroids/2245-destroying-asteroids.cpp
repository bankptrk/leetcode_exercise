class Solution {
public:
    bool asteroidsDestroyed(long long mass, vector<int>& as) {
        sort(as.begin(),as.end());
        for(int ith: as){
            if(mass >= ith) mass += ith;
            else return false;
        }
        return true;
    }
};