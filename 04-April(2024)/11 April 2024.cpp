class Solution {
public:
    int grayToBinary(int n)
    {
        int ans = 0;
        while(n > 0)
        {
            ans = ans ^ n;
            n = n >> 1;
        }
        return ans;
    }
};

