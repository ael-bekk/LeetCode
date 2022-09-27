int cmpfunc (const void * a, const void * b) { return ( *(int*)a - *(int*)b ); }

bool canMakeArithmeticProgression(int* arr, int arrSize)
{
    qsort(arr, arrSize, sizeof(int), cmpfunc);
    for (int i = 1; i < arrSize - 1; i++)
        if (arr[1] - arr[0] != arr[i + 1] - arr[i]) return (0);
    return (1);
}