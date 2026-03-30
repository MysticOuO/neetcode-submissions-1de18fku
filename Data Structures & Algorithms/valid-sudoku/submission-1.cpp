class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int m = board.size();
        int n = board[0].size();

        for(int i = 0; i < m; i++) {
            unordered_set<char> row;
            for(int j = 0; j < n; j++) {
                if(board[i][j] != '.') {
                    if(row.find(board[i][j]) != row.end())
                        return false;                        
                    else 
                        row.insert(board[i][j]);
                }
                else
                    continue;
            }
        }

        for(int i = 0; i < n; i++) {
            unordered_set<char> col;
            for(int j = 0; j < m; j++) {
                if(board[j][i] != '.') {
                    if(col.find(board[j][i]) != col.end())
                        return false;
                    else 
                        col.insert(board[j][i]);
                }
                else
                    continue;
            }
        }

        for(int num = 0; num < 9; num++) {
            unordered_set<int> table;
            for(int i = 0; i < 3; i++) {
                for(int j = 0; j < 3; j++) {
                    int row = (num / 3) * 3 + i;
                    int col = (num % 3) * 3 + j;
                    if(board[row][col] != '.') {
                        if(table.find(board[row][col]) != table.end())
                            return false;
                        else
                            table.insert(board[row][col]);
                    }
                    else 
                        continue;
                }
            }
        }

        return true;
    }
};
