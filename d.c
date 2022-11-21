#include <stdio.h>
int main()
{
    int n;
    while (scanf("%d", &n) == 1)
    {
        int arr1[n], arr2[n], i, j, temp;
        for (i = 0; i < n; i++)
        {
            scanf("%d", &arr1[i]);
        }
        for (i = 0; i < n - 1; i++)
        {
            if (arr1[i] > arr1[i + 1])
            {
                arr2[i] = arr1[i] - arr1[i + 1];
            }
            else
            {
                arr2[i] = arr1[i + 1] - arr1[i];
            }
        }
        // for (i = 0; i < n - 1; i++)
        // {
        //     printf("%d ", arr2[i]);
        // }
        // printf("\n");
        for (i = 0; i < n - 1; i++)
        {
            for (j = i + 1; j < n - 1; j++)
            {
                if (arr2[i] > arr2[j])
                {
                    temp = arr2[i];
                    arr2[i] = arr2[j];
                    arr2[j] = temp;
                }
            }
        }
        // for (i = 0; i < n - 1; i++)
        // {
        //     printf("%d ", arr2[i]);
        // }
        int count = 0;
        for (i = 0; i < n - 1; i++)
        {
            if (arr2[i + 1] - arr2[i] != 1 && i != n - 2)
            {
                count++;
            }
        }
        if (count == 0)
            printf("Jolly\n");
        else
            printf("Not jolly\n");
    }
    return 0;
}
