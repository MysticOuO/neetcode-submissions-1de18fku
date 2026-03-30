class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;

        while(left < right) {
            int count = numbers[left] + numbers[right];
            if(count < target) 
                ++left;
            else if(count > target) 
                --right;
            else
                return {left + 1, right + 1};
        }

        return {};
    }
};
