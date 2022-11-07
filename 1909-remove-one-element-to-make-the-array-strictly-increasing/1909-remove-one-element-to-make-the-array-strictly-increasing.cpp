class Solution {
public:
    bool canBeIncreasing(vector<int>& nums)
    {
        int l = 0, r = nums.size() - 1;

        while (l < r)
        {
            if (nums[r - 1] >= nums[r] && nums[l] >= nums[l + 1])
                break;
            if (nums[l] < nums[l + 1])
                l++;
            if (nums[r - 1] < nums[r])
                r--;
        }
        if (r + 1 < nums.size() && (!l || nums[l] >= nums[r + 1]))
            nums.erase(nums.begin() + l);
        else
            nums.erase(nums.begin() + r);
        while (l < nums.size())
        {
            if (l && nums[l - 1] >= nums[l])
                return (false);
            l++;
        }
        return (true); 
    }
};