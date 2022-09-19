class Solution {
public:
    bool isIsomorphic(string s, string t)
    {
        char arr[256] = {0};
        char arr2[256] = {0};

        for (int i = 0; i < s.length(); i++)
            if ((arr[s[i]] && arr[s[i]] != t[i]) || (arr2[t[i]] && arr2[t[i]] != s[i]))
                return (0);
            else
                arr[s[i]] = t[i],
                arr2[t[i]] = s[i];
        return (1);
    }
};