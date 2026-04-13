class Solution {
public:
    // remember that need to check overflow when calculating not check it at the last
    int reverse(int x) {
        int max = INT_MAX;
        int min = INT_MIN;
        int res = 0;
        while (x) {
            int digit = x % 10;
            x /= 10;

            if(res > max / 10 || (res == max / 10 && digit > max % 10))
                return 0;
            if(res < min / 10 || (res == min / 10 && digit < min % 10)) 
                return 0;
            res = res * 10 + digit;
        }


        return res;
    }
};
