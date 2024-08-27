class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int start = 0, total_gas = 0, total_cost = 0;
        for(auto g : gas) total_gas += g;
        for(auto c : cost) total_cost += c;
        if(total_gas < total_cost) return -1;
        int curr = 0;
        for(int i=0; i<gas.size(); i++){
            curr += gas[i]-cost[i];
            if(curr < 0){
                start = i+1;
                curr = 0;
            }
        }
        return start;
    }
};