class Solution {
public:
    int cal(int n) {
        int count = 0;
        while(n) {
            int digit = n % 10;
            count += pow(digit, 2);
            n /= 10;
        }
        return count;
    }
    bool isHappy(int n) {
        unordered_set<int> table;
        while(!table.count(n)) {
            table.insert(n);
            if(n == 1)
                return true;
            n = cal(n);
        }
        return false;
    }
};
