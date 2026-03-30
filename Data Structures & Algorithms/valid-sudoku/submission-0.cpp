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

        for (int square = 0; square < 9; square++) {
            unordered_set<char> seen;
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    int row = (square / 3) * 3 + i;
                    int col = (square % 3) * 3 + j;
                    if (board[row][col] == '.') continue;
                    if (seen.count(board[row][col])) return false;
                    seen.insert(board[row][col]);
                }
            }
        }

        return true;
    }
};
