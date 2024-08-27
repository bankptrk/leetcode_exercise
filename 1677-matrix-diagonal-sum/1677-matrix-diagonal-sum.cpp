class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int sum = 0;
        vector<int> dia1;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i == j)
                dia1.push_back(mat[i][j]);
                else if(i+j == n-1)
                dia1.push_back(mat[i][j]);
            }
        }
        for(int i: dia1){
            sum += i;
        }

        return sum;
    }
};