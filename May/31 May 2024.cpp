class Solution {
  public:
    int swapNibbles(int n) {
        // code here
        int a=n/16;
        int b=n%16;
        int ans=0;
        ans|=b;
        ans=ans<<4;
        ans|=a;
        return ans;
    }
};