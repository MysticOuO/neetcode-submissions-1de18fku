class Solution {
public:
    int trap(vector<int>& height) {
        int res = 0;
        int lwall = height[0];
        int rwall = height[height.size() - 1];
        int l = 0;
        int r = height.size() - 1;

        while(l < r) {
            if(lwall < rwall) {
                l++;
                lwall = max(lwall, height[l]);
                res += lwall - height[l];
            }
            else {
                r--;
                rwall = max(rwall, height[r]);
                res += rwall - height[r];
            }
        }

        return res;

    }
};
