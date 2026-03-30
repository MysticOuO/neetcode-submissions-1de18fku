class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int res = 0;
        int pos = 31;
        while(n) {
            if(n % 2 == 1)
                res += pow(2, pos);
            else
                res += 0;
            --pos;
            n /= 2;
        }

        return res;
    }
};
