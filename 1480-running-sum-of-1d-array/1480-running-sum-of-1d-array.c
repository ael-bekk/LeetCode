/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int s, int* rs)
{
    for (int i = 1; i < s; i++)
        nums[i] += nums[i - 1];
    *rs = s;
    return (nums);
}