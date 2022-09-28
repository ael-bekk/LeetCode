class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intrv)
    {
        sort(intrv.begin(), intrv.end(),
             [](const std::vector<int>& a, const std::vector<int>& b) {
        return a[0] < b[0];});

        int j = 0;
        vector<vector<int>> in;

        for (int i = 1; i < intrv.size(); i++)
        {
            if (intrv[j][1] >= intrv[i][0])
            {
                intrv[j][0] = (intrv[j][0] < intrv[i][0]) ? intrv[j][0]: intrv[i][0];
                intrv[j][1] = (intrv[i][1] > intrv[j][1]) ? intrv[i][1]: intrv[j][1];
            }
            else
                in.push_back(intrv[j]), j = i;
        }
        in.push_back(intrv[j]);
        return (in);
    }
};