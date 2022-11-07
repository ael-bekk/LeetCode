class Solution {
public:
    int maximum69Number (int num)
    {
        for (int i = 0, l = 1000; i < 4; i++, l /= 10)
            if ((num % (l * 10)) / l == 6)
                return (num + 3 * l);
        return (num);
    }
};