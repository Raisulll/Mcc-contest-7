#include <stdio.h>
int main(int argc, char const *argv[])
{
    int temp, n, i, j;
    scanf("%d", &n);
    int arr1[n], arr2[n];
    for (i = 0; i < n-1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j > n - 1; j++)
        {
            if (arr2[i] > arr2[j])
            {
                temp = arr2[i];
                arr2[i] = arr2[j];
                arr2[j] = temp;
            }
        }
    }
    for (i = 0; i < n - 1; i++)
    {
        printf("%d ", arr2[i]);
    }
    return 0;
}
