class Solution {
public:
    string removeKdigits(string nums, int k, int st = 0) {
        
        string s;
        for (int i = 0; i < nums.length(); i++)
        {
            while (k && s.length() && s.back() > nums[i])
                s.pop_back(),
                k--;
            s += nums[i];
        }
        while (k--) s.pop_back();
        if (s == "") s = "0";
        while (st + 1 < s.length() && s[st] == '0') st++;
        return (s.substr(st));
    }
};