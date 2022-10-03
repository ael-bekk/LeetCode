class Solution {
public:
    int minCost(string colors, vector<int>& neededTime)
    {
        int time = 0, tmp = -1;

        for (int i = 1; i < colors.length(); i++)
        {
            int prv = (i - 1) * (tmp == -1) + tmp * (tmp != -1);
            if (colors[i] == colors[prv])
                time += min(neededTime[i], neededTime[prv]),
                tmp = (neededTime[i] > neededTime[prv]) ? i : prv;
            else
                tmp = -1;
        }       
        return (time);
    }
};