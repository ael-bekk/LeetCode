
class Solution {
public:
    
    string pushDominoes(string d)
    {
        int l = -1, r = -1, p = -1;
        
        while (++p < d.length())
        {
            if (d[p] == 'R' && r == -1)
                r = p;
            else if (d[p] == 'R')
            {
                r = p;
                while (r-- && d[r] == '.')
                    d[r] = 'R';
                r = p;
            }
            else if (d[p] == 'L' && r == -1)
            {
                l = p;
                while (l-- && d[l] == '.')
                    d[l] = 'L';
                l = -1;
            }
            else if (d[p] == 'L')
            {
                l = p;
                while (++r < --l)
                    d[r] = 'R',
                    d[l] = 'L';
                r = -1;
                l = -1;
            }
            else if (r != -1 && p == d.length() - 1)
            {
                while (++r < d.length() && d[r] == '.')
                    d[r] = 'R';
                r = p;
            }
        }
        return (d);
    }
};