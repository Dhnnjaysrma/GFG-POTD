class Solution {
public:
    int lis(vector<int>& nums){
        int n = nums.size();
        vector<int> dp(n,1);
        for(int i=1;i<n;++i)
            for(int j=0;j<i;j++)
                if(nums[i]>nums[j] && (nums[i]-nums[j])>=(i-j))
                    dp[i] = max(1+dp[j],dp[i]);
                    
        int out = 1;
        for(auto i: dp)
            out = max(out, i);
        
        return out;
    }
    int min_operations(vector<int>& nums) {
        return nums.size() - lis(nums);
    }
};

