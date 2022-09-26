class Solution {
public:
    int maxArea(vector<int>& height)
    {
        int p = 0, q = height.size() - 1, max = 0;

        while (p < q)
        {
            max = (max < (q - p) * min(height[q],height[p])) ? (q - p) * min(height[q],height[p]): max;
            if (height[p] > height[q])
                q--;
            else
                p++;
        }
        return (max);
    }
};