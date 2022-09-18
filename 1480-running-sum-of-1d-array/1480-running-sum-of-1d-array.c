/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int s, int* rs)
{
    long long sum = 0;

    for (int i = 0; i < s; i++)
        sum += nums[i],
        nums[i] = sum;
    *rs = s;
    return (nums);
}