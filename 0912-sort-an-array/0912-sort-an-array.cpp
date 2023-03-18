class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        if (nums.size() == 1)
            return (nums);
        vector<int> a, b;
        for (int i = 0; i < nums.size(); i++)
            if (i < nums.size() / 2)
                a.push_back(nums[i]);
            else
                b.push_back(nums[i]);
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