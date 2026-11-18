// trace

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
    int trace = 0;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
            {
                trace = trace + a[i][j];
            }
        }
    }
    printf("Sum of matrix trace = %d\n", trace);

    return 0;
}
