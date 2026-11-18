// Transpose Matrix  row to colum

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

    printf("\nTranspose Matrix:\n");
    int sum = 0;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }

    return 0;
}