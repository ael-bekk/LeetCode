class Solution {
public:
    int numDecodings(string s)
    {
        int pre1 = 1, pre2 = 1, res = 1;
        for (int i = 1; i < s.length(); i++)
            if (s[i] == '0' && (s[i - 1] > '2' || s[i - 1] == '0'))
                return (0);
            else if (((s[i] < '7' && s[i - 1] == '2') || s[i - 1] == '1') && s[i] != '0' && s[i + 1] != '0')
                pre2 += pre1,
                pre1 = pre2 - pre1;
            else if (pre2 != 1)
                res *= pre2,
                pre2 = pre1 = 1;
        if (pre2 != 1)
            res *= pre2;
        return ((s[0] != '0') * res);
    }
};