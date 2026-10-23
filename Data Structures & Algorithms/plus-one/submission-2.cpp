class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        // Simulate the situation with or without carry
        for(int i = n - 1; i >= 0; i--) {
            if(digits[i] + 1 != 10) {
                digits[i]++;
                return digits;
            }
            else 
                digits[i] = 0;
        }

        // encounter the number likes 99 or 999 ...
        vector<int> res(n + 1, 0);
        res[0] = 1;
        return res;
    }
};
