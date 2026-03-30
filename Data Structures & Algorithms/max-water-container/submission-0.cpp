class Solution {
public:
    int maxArea(vector<int>& heights) {
        int res = 0;
        int left = 0;
        int right = heights.size() - 1;

        while(left < right) {
            int count = min(heights[left], heights[right]) * (right - left);
            res = max(res, count);
            if(heights[left] > heights[right])
                --right;
            else
                ++left;
        }

        return res;
    }
};
