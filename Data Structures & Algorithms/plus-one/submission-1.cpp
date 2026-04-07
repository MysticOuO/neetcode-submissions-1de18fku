class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        vector<int> res(n + 1, 0);

        for(int i = digits.size() - 1; i >= 0; i--) {
            if(digits[i] + 1 != 10) {
                ++digits[i];
                return digits;
            }
            else 
                digits[i] = 0;
        }

        res[0] = 1;
        return res;
    }
};
