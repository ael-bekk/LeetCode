class Solution {
public:
    string toHex(int n) {
        string res;
        char base[] = "0123456789abcdef";
        unsigned int num = n;
        do
        {
            res += base[num % 16];
            num >>= 4;
        } while(num);
        
        return {res.rbegin(), res.rend()};
    }
};