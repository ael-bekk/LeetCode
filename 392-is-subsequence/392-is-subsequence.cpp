class Solution {
public:
    bool isSubsequence(string s, string t)
    {
        int c = 0, Ss = s.length(), St = t.length();
        for (int i = 0; i < St; i++)
            c += (c < Ss && t[i] == s[c]);
        return (c == Ss);
    }
};