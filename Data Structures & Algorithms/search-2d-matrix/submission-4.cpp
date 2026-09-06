class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int ROW = matrix.size();
        int COL = matrix[0].size();
        int up = 0;
        int down = ROW - 1;

        // Comparison with biggest & smallest in the row
        while(up <= down) {
            int row = up + (down - up) / 2;
            if(matrix[row][COL - 1] < target)
                up = row + 1;
            else if(matrix[row][0] > target) 
                down = row - 1;
            else 
                break;
        }

        if(up > down)
            return false;
        
        int row = up + (down - up) / 2;
        int l = 0;
        int r = COL - 1;
        while(l <= r) {
            int m = l + (r - l) / 2;
            if(matrix[row][m] > target)
                r = m - 1;
            else if(matrix[row][m] < target)
                l = m + 1;
            else 
                return true;
        }

        return false;
    }
};
