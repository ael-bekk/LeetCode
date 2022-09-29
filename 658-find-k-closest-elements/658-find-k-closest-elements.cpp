class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int close, int target)
    {
        int size = arr.size();
        int l = 0, r = size - 1;
        vector<int> res;
        int ar[10000];

        for (int i = 0; i < size; i++)
            ar[i] = abs(arr[i] - target);

        while (l < r && r - l > close - 1)
            if (ar[l] <= ar[r])
                r--;
            else
                l++;
        for (int i = l; i < l + close && i < size; i++)
                res.push_back(arr[i]);
        return (res);
    }
};