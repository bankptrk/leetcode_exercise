class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int cnt = 0;
        for(int i=0; i<grid.size(); i++){
            int x = -1 , y = -1;
            for(int j=0; j<grid[0].size(); j++){
                if(grid[i][j]){
                    if(x == -1 && y == -1){
                        x = i;
                        y = j;
                    }else{
                        grid[x][y]++;
                        grid[i][j]++;
                    }
                }
            }
        }
        for(int j=0; j<grid[0].size(); j++){
            int x = -1, y = -1;
            for(int i=0; i<grid.size(); i++){
                if(grid[i][j]){
                    if(x == -1 && y == -1){
                        x = i;
                        y = j;
                    }else{
                        grid[x][y]++;
                        grid[i][j]++;
                    }
                }
            }
        }
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
                if(grid[i][j] > 1) cnt++;
            }
        }
        return cnt;
    }
};