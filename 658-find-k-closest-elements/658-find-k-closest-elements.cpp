class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int close, int target)
    {
        int size = arr.size();
        int l = 0, r = size - 1;
        vector<int> res (close);

        while (l < r && r - l > close - 1)
            if (abs(arr[l] - target) <= abs(arr[r] - target)) r--;
            else l++;

        for (int i = l; i < l + close && i < size; i++)
                res[i - l] = arr[i];

        return (res);
    }
};