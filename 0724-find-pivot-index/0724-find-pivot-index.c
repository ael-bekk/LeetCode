

int pivotIndex(int* nums, int s)
{
    for (int i = 1; i < s; i++)
        nums[i] += nums[i - 1];
    for (int i = 0; i < s; i++)
        if (nums[i - 1 * !!i] * !!i == nums[s - 1] - nums[i])
                return (i);
    return (-1);
}