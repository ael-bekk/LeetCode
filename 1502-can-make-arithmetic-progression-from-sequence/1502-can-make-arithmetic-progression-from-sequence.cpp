class Solution {
public:    
    bool canMakeArithmeticProgression(vector<int>& arr)
    {
        sort(arr.begin(), arr.end());
        for (int i = 1; i < arr.size() - 1; i++)
            if (arr[1] - arr[0] != arr[i + 1] - arr[i]) return (0);
        return (1);
    }
};