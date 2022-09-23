
int calcul_len(int n)
{
    int i = 0;

    while (n)
        i++, n >>= 1;
    return (i);
}

int concatenatedBinary(int n)
{
    int i = 1;
    long long sum = 1;
    
    while (++i <= n)
        sum <<= calcul_len(i),
        sum += i,
        sum %= 1000000007;
    return (sum % 1000000007);
}