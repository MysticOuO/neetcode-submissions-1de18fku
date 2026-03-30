class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for(int i = 0; i < numbers.size(); i++) {
            int count = target - numbers[i];
            int left = i;
            int right = numbers.size() - 1;
            while(left <= right) {
                int mid = left + (right - left) / 2;
                if(numbers[mid] < count)
                    left = mid + 1;
                else if(numbers[mid] > count)
                    right = mid - 1;
                else 
                    return {i + 1, mid + 1};
            }
        }

        return {};
    }
};
