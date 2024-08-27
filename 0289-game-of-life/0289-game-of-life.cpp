class Solution {
public:
    bool checkNeighbors(int x,int y,vector<vector<int>>& board){
        return (x >= 0 && x < board.size() && y >= 0 && y < board[0].size());
    }
    void gameOfLife(vector<vector<int>>& board) {
        vector<int> dx = {0,0,1,1,1,-1,-1,-1};
        vector<int> dy = {1,-1,1,-1,0,0,1,-1};
        for(int i=0; i<board.size(); i++){
            for(int j=0; j<board[0].size(); j++){
                int cnt_live = 0;
                for(int k=0; k<8; k++){
                    int x = i + dx[k], y = j + dy[k];
                    if(checkNeighbors(x,y,board) && abs(board[x][y]) == 1)
                    cnt_live++;
                }
                if(board[i][j] == 1 && (cnt_live < 2 || cnt_live > 3))
                board[i][j] = -1;
                if(board[i][j] == 0 && cnt_live == 3)
                board[i][j] = 2;
            }
        }
        for(int i=0; i<board.size(); i++){
            for(int j=0; j<board[0].size(); j++){
                if(board[i][j] >= 1)
                board[i][j] = 1;
                else board[i][j] = 0;
            }
        }
    }
};