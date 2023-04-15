class Solution {
public:
    int lengthOfLIS(vector<int>& nums)
    {
        int _max = 1;
        vector<int> dp(nums.size(), 1);

        for (int i = 1; i < nums.size(); i++)
            for (int j = 0; j < i; j++)
                if (nums[j] < nums[i] && dp[j] + 1 > dp[i])
                    dp[i] = dp[j] + 1,
                    _max = max(_max, dp[i]);
        return _max;
    }
};