class Solution {
public:
    int longestPalindrome(string str, int res = 0) {
        int s[127] = {};

        for (auto x : str)
            s[x]++;

        for (int i = 0; i < 127; i++)
            res += s[i] - (s[i] % 2) + (s[i] % 2 && !(res % 2));

        return (res);
    }
};