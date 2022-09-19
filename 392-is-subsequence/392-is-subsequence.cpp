class Solution {
public:
    bool isSubsequence(string s, string t)
    {
        int c = 0;
        for (int i = 0; i < t.length(); i++)
            c += (c < s.length() && t[i] == s[c]);
        return (c == s.length());
    }
};