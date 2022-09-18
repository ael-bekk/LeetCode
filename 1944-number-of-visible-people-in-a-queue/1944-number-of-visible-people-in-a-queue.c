

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* canSeePersonsCount(int* h, int s, int* rs)
{
    int arr[100000];
    int size = 0;

    *rs = s;
    while (s--)
    {
        int see = 0;
        for (; size && h[s] > arr[size - 1] ; size--)
            see++;
        arr[size] = h[s];
        h[s] = see + !!size++;
    }
    return (h);
}