class Solution {
private:
    int searchPotentialRow(vector<vector<int>>& matrix,int target){
        int l = 0, r = matrix.size()-1;
        while(l <= r){
            int mid = l+(r-l)/2;
            if(matrix[mid][0] <= target && target <= matrix[mid][matrix[0].size()-1])
                return mid;
            else if(matrix[mid][0] < target) l = mid+1;
            else r = mid-1;
        }
        return -1;
    }
    bool binarySearch(vector<vector<int>>& matrix, int rowid, int target){
        int l = 0, r = matrix[0].size()-1;
        while(l <= r){
            int mid = l+(r-l)/2;
            if(matrix[rowid][mid] == target) return true;
            else if(matrix[rowid][mid] > target) r = mid-1;
            else l = mid+1;
        }
        return false;
    }
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rowid = searchPotentialRow(matrix,target);
        if(rowid == -1) return false;
        return binarySearch(matrix,rowid,target);
    }
};