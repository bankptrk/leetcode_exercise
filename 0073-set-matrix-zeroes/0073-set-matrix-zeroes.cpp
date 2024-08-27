class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int flag = 0;
        int n = matrix.size(), m = matrix[0].size();
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j] == 0){
                    matrix[i][0] = 0;
                    if(j!=0) matrix[0][j] = 0;
                    else flag = 1;
                }
            }
        }
        for(int i=1; i<n; i++){
            for(int j=1; j<m; j++){
                if(matrix[i][0] == 0 || matrix[0][j] == 0) matrix[i][j] = 0;
            }
        }
        if(matrix[0][0] == 0){
            while(m--) matrix[0][m] = 0;
        }
        if(flag == 1){
            while(n--) matrix[n][0] = 0;
        }
    }
};