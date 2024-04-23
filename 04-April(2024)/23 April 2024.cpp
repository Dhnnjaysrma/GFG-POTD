class Solution {
  public:
  const int mod =1000000007;
    int firstElement(int n) {
        // code here
    vector<int> dp(n+1,1);
    dp[0]=0,dp[1]=1,dp[2]=1;
        for(int i=2;i<=n;i++){
            dp[i]=(dp[i-1]%mod +dp[i-2]%mod)%mod;
        }
        return dp[n];
    }
};
