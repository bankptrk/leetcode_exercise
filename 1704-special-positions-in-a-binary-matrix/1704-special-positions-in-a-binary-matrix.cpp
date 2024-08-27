class Solution {
private:
    int checkRow(vector<vector<int>>& mat, int i){
        int index = -1;
        for(int j=0; j<mat[0].size(); j++){
            if(mat[i][j] == 1){
                if(index >= 0) return -1;
                else index = j;
            }
        }
        return index;
    }
    int checkCol(vector<vector<int>>& mat, int i, int index){
        for(int j=0; j<mat.size(); j++){
            if(mat[j][index] == 1 && j != i) return false;
        }
        return true;
    }
public:
    int numSpecial(vector<vector<int>>& mat) {
        int cnt = 0;
        for(int i=0; i<mat.size(); i++){
            int index = checkRow(mat,i);
            if(index >= 0 && checkCol(mat,i,index)) cnt++;
        }
        return cnt;
    }
};