class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        if (nums.size() == 1)
            return (nums);
        vector<int> a(nums.begin(), nums.begin() + nums.size()/2);
        vector<int> b(nums.begin() + nums.size()/2, nums.end());
        sortArray(a);
        sortArray(b);
        for (int i = 0, j = 0; i < a.size() || j < b.size();) {
            if (i < a.size() && (j == b.size() || a[i] < b[j]))
                nums[i + j] = a[i], i++;
            else
                nums[i + j] = b[j], j++;
        }
        return nums;
    }
};