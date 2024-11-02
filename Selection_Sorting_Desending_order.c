#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d integer: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\n");
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }

    printf("Sorting Array Element in Descending Order: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
