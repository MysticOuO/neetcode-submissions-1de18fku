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
        int slow = n; 
        int fast = cal(n);
        while(slow != fast) {
            fast = cal(fast);
            fast = cal(fast);
            slow = cal(slow);
        }

        return fast == 1;
    }
};
