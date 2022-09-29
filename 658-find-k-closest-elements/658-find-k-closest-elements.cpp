class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int close, int target)
    {
        int size = arr.size();
        int l = 0, r = size - 1;
        vector<int> res;
        vector<int> ar;
        
        for (int i = 0; i < size; i++)
            ar.push_back(abs(arr[i] - target)),cout << ar[i] << " ";

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