class Solution {
  public:
    long long reversedBits(long long x) {
        long long out = 0;
        for(int i = 0; i < 31; ++i)
            out += x & 1,
            out <<= 1,
            x >>= 1;
            
        return out;
    }
};
