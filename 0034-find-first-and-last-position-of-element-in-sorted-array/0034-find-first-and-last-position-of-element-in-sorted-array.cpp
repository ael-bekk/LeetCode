class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target)
    {
        
        auto it = equal_range(nums.begin(), nums.end(), target);
        
        if (it.second - it.first == 0)
                return {-1, -1};
        return {(int)(it.first - nums.begin()), (int)(it.second - nums.begin() - 1)};
    }
};