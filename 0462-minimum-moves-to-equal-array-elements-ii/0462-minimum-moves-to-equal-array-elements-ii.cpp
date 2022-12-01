class Solution {
public:
    int minMoves2(vector<int>& nums)
    {
        long long l = 0, s = 0;
        nth_element(begin(nums), begin(nums) + (nums.size() / 2), end(nums));
        l = nums[nums.size() / 2];
        for (auto x : nums)
            s += abs(x - l);
        return (s);
    }
};