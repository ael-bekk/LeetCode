class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr, int mult = 0) {

        long long total = accumulate(arr.begin(), arr.end(), 0);
        
        if (total % 3)
            return (0);

        total /= 3;
        for (int i = 0; i < arr.size() && mult < 3; i++)
            arr[i] += i ? arr[i - 1] : 0,
            mult +=(arr[i] == total * (mult + 1));
            
            
        return mult == 3;
    }
};