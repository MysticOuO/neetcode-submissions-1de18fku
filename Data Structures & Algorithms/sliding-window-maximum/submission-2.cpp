class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> res(n - k + 1, 0);
        // Double - Ended Queue
        deque<int> q;
        int l = 0, r = 0;

        while(r < n) {
            // Remove those who is smaller than cur number
            // ensure the biggest one always is the first one
            while(!q.empty() && nums[q.back()] < nums[r]) {
                q.pop_back();
            }

            q.push_back(r);

            // Delete the num is not within the window
            if(l > q.front()) {
                q.pop_front();
            }

            // Already seen k number time to find maximum
            if((r + 1) >= k) {
                res[l] = nums[q.front()];
                l++;
            }

            r++;
        }

        return res;
    }
};
