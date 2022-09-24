

int findDuplicate(int* nums, int s)
{
    int arr[100003] = {0};

    while (s--)
        if (++arr[nums[s]] && arr[nums[s]] == 2)
            return (nums[s]);
    return (0);
}