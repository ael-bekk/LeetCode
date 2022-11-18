class Solution {
public:
    int countCollisions(string d)
    {
        int collisions = 0, l = 0, r = d.length() - 1;
        while (l <= r && (d[l] == 'L' || d[r] == 'R'))
            l += (d[l] == 'L'),
            r -= (d[r] == 'R');
        cout << l << " " << r << endl;
        while (l++ <= r)
            collisions += (d[l - 1] != 'S');
        return (collisions);
    }
};