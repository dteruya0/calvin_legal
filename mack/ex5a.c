int pertence(int x, int v[], int n)
{
    int i = 0;

    while (i < n)
    {
        if (x == v[i])
            return (1);
        i++;
    }
    return (0);
}