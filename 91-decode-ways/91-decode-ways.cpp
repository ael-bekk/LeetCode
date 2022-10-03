class Solution {
public:
    int numDecodings(string s)
    {
        int res = 0, pre1 = 1, pre2 = 1, r = 1, t;
        for (int i = 1; i < s.length(); i++)
            if (s[i] == '0' && (s[i - 1] > '2' || s[i - 1] == '0'))
                return (0);
            else if ((s[i] < '7' && s[i - 1] < '3' && s[i - 1] != '0'  && s[i] != '0' && s[i + 1] != '0')
                        || (s[i - 1] == '1'&& s[i] != '0' && s[i + 1] != '0'))
                res++,
                t = pre2,
                pre2 += pre1,
                pre1 = t;
            else if (res)
                r *= pre2,
                res = 0,
                pre2 = pre1 = 1;
        if (res)
            r *= pre2;
        return ((s[0] != '0') * r);
    }
};