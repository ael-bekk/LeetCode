

int majorityElement(int* nums, int s)
{
    int cnt = 0;
    int elm = nums[0];

    for (int i = 0; i < s ; i++)
        if (elm == nums[i])
            cnt++;
        else if (cnt)
            cnt--;
        else
            elm = nums[i], cnt++;
            
    return (elm);
}