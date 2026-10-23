class Solution {
public:
    double myPow(double x, int n) {
        if(x == 0)
            return 0;
        if(n == 0)
            return 1;
        double count = 1;
        int power = abs(n);

        while(power) {
            if(power & 1)
                count *= x;
            x *= x;
            power /= 2;
        }

        return n > 0 ? count : 1 / count;
    }
};
