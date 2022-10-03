class Solution {
public:
    int minCost(string colors, vector<int>& neededTime)
    {
        int time = 0;
        int tmp = -1;

        for (int i = 1; i < colors.length(); i++)
        {
            if (colors[i] == colors[i - 1] && tmp == -1)
                time += min(neededTime[i], neededTime[i - 1]),
                tmp = (neededTime[i] > neededTime[i - 1]) ? i : i - 1;
            else if (colors[i] == colors[i - 1] && tmp != -1)
                time += min(neededTime[i], neededTime[tmp]),
                tmp = (neededTime[i] > neededTime[tmp]) ? i : tmp;
            else
                tmp = -1;
        }       
        return (time);
    }
};