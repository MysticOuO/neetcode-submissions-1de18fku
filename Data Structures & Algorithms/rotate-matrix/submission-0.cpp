class Solution {
public:
    // (i, j) -> (j, n - 1 - i)
    void rotate(vector<vector<int>>& matrix) {
        // (i, j) -> (n - 1 - i, j)
        reverse(matrix.begin(), matrix.end());

        // (n - 1 - i, j) -> (j, n - 1 - i)
        for(int i = 0; i < matrix.size(); i++) {
            for(int j = i + 1; j < matrix[i].size(); j++)
                swap(matrix[i][j], matrix[j][i]);
        }
    }
};
