class Solution {
public:
    int maxArea(vector<int>& height)
    {
        int p = 0, q = height.size() - 1, max = 0, cond;

        while (p < q)
            max = (max < (q - p) * min(height[q],height[p])) ? (q - p) * min(height[q],height[p]): max,
            cond = (height[p] > height[q]),
            q -= cond, p += !cond;
        return (max);
    }
};