class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        for(int i = 0; i < board.size(); i++){
           for(int j = 0; j < board[i].size(); j++){
               if(board[i][j] == word[0]){
                   vector<vector<bool>> vis(board.size(), vector<bool>(board[0].size(),false)); bool flag = false;
                   dfs(i,j,board,word,vis,0,flag);
                   if(flag) return true;
               }
           } 
        }
        return false;
    }
    
    void dfs(int i, int j, vector<vector<char>>& board, string word, vector<vector<bool>>& vis, int pos, bool& flag){
        vis[i][j] = true;
        pos++;
        if(pos == word.size()){
            flag = true; return;
        }
        if(i+1 < board.size() && board[i+1][j] == word[pos] && !vis[i+1][j]) dfs(i+1,j,board,word,vis,pos,flag);
        if(j+1 < board[i].size() && board[i][j+1] == word[pos] && !vis[i][j+1]) dfs(i,j+1,board,word,vis,pos,flag);
        if(i-1 >= 0 && board[i-1][j] == word[pos] && !vis[i-1][j]) dfs(i-1,j,board,word,vis,pos,flag);
        if(j-1 >= 0 && board[i][j-1] == word[pos] && !vis[i][j-1]) dfs(i,j-1,board,word,vis,pos,flag);
        vis[i][j] = false;
    }
};
