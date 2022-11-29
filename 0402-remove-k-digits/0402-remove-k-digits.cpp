class Solution {
public:
    string removeKdigits(string nums, int k) {
        
        string s;

        for (int i = 0; i < nums.length(); i++)
        {
            while (k && s.length() && s.back() > nums[i])
                s.pop_back(),
                k--;
            if (s.length() or nums[i] != '0')
                s += nums[i];
        }
        
        while (k-- and s.length()) s.pop_back();
        if (s == "") s = "0";
        
        return (s);
    }
};