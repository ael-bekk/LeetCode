class Solution {
public:
    bool check_pattern(string &p, string &s, int &i, string &T, size_t &pos, string *S)
    {
        int cnt = 0;
        T = s.substr(0, pos);
        if (i >= p.length() || (S[p[i] - 'a'] != "" && S[p[i] - 'a'] != T))
            return (0);
        S[p[i++] - 'a'] = T;
        for (int j = 0; j < 26; j++)
            cnt += (S[j] == T);
        s.erase(0, pos + 1);
        return (cnt == 1);
    }
    
    bool wordPattern(string p, string s)
    {
        int i = 0;
        size_t pos = 0;
        string S[26], T;

        while ((pos = s.find(" ")) != std::string::npos)
            if (!check_pattern(p, s, i, T, pos, S))
                return (0);
        return (i + 1 == p.length() && s != "" && check_pattern(p, s, i, T, pos, S));
    }
};