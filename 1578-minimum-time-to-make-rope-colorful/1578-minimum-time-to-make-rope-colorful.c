

int minCost(char *colors, int *neededTime, int neededTimeSize)
{
    int time = 0;
    int tmp = -1;

    for (int i = 1; i < neededTimeSize; i++)
        if (colors[i] == colors[i - 1] && tmp == -1)
            time += (neededTime[i] < neededTime[i - 1]) ? neededTime[i] : neededTime[i - 1],
            tmp = (neededTime[i] > neededTime[i - 1]) ? i : i - 1;
        else if (colors[i] == colors[i - 1] && tmp != -1)
            time += (neededTime[i] < neededTime[tmp]) ? neededTime[i] : neededTime[tmp],
            tmp = (neededTime[i] > neededTime[tmp]) ? i : tmp;
        else tmp = -1;
    return (time);
}