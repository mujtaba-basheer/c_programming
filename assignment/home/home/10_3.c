int Max(int n, int arr[n], int max_i, int i)
{
    if (i == n)
        return max_i;
    else
    {
        max_i = arr[i] > max_i ? arr[i] : max_i;
        return Max(n, arr, max_i, i + 1);
    }
}

int Min(int n, int arr[n], int min_i, int i)
{
    if (i == n)
        return min_i;
    else
    {
        min_i = arr[i] < min_i ? arr[i] : min_i;
        return Min(n, arr, min_i, i + 1);
    }
}

void main()
{
    int i, n;
    printf("Enter the array size : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the array elements : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The MAX element is : %d\n", Max(n, a, a[0], 1));
    printf("The MIN element is : %d\n", Min(n, a, a[0], 1));

    return;
}
