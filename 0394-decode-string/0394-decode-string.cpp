class Solution {
public:
    int start;
    Solution() : start(-1) {}

    string decodeString(const string &s) {
        string res;
        int muliple(1);

        while (++start < s.length())
            if (isdigit(s[start])) {

                muliple = stoi(s.substr(start));
                start = s.find('[', start) - 1;
            }
            else if (s[start] == '[') {

                string to_multiply = decodeString(s);
                while (muliple--)    res += to_multiply;
                muliple = 1;
            }
            else if (s[start] == ']')    return res;
            else                           res += s[start];

        return res;
    }
};