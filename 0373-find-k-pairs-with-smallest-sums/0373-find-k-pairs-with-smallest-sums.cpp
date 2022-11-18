class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k)
    {
        vector<vector<int>> _vec;
        priority_queue <pair <int, pair<int, int>>> q;

        for (auto x : nums1)
        {
            for (auto y : nums2)
            {
                if (k-- > 0)
                    q.push({x + y, {x, y}});
                else if (q.top().first > x + y)
                    q.pop(),
                    q.push({x + y, {x, y}});
                else
                    break;
            }
        }
        while (!q.empty())
        {
            vector<int> v;
            
            v.push_back(q.top().second.first);
            v.push_back(q.top().second.second);
            _vec.push_back(v);
            q.pop();
        }
        return (_vec);
    }
};