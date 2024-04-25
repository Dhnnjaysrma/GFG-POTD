class Solution {
  public:
    int findMaxSum(int n, int m, vector<vector<int>> mat) {
        // code here
        int ans = -1;
        
        for(int i= 0;i<n;i++) {
            for(int j = 0;j<m;j++) {
                if( i-1 < 0 or j+1 >= m or i+1 >= n or j-1 < 0)continue;
                int sum = 0;
                // upper part 
                sum += mat[i-1][j-1] + mat[i-1][j] + mat[i-1][j+1];
                // middle part 
                sum += mat[i][j];
                // lower part 
                sum += mat[i+1][j-1] + mat[i+1][j] + mat[i+1][j+1];
                ans = max(ans, sum);
            }
        }
        return ans;
    }
};
