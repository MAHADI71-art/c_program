// Sum of two

#include <stdio.h>

int main(void)
{
    int i, j, m, n;

    printf("Enter Dimension\n");
    scanf("%d %d", &m, &n);
    int a[m][n];

    printf("Enter Matrix\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int b[m][n];

    printf("Enter Another Matrix\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    int sum[m][n];

    printf("Enter the sum of Matrix\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Sum of two matrix:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}