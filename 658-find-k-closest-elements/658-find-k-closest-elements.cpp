class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int close, int target)
    {
        int l = 0, r = arr.size() - 1;
        vector<int> res;
        vector<int> ar;
        
        for (int i = 0; i < arr.size(); i++)
            ar.push_back(abs(arr[i] - target)),cout << ar[i] << " ";

        while (l < r && r - l > close - 1)
            if (ar[l] <= ar[r])
                r--;
            else
                l++;
        for (int i = l; i < l + close && i < arr.size(); i++)
                res.push_back(arr[i]);
        return (res);
    }
};