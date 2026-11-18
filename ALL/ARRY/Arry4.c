// Identity Matrix

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

    int flag = 1;

    if (m != n)
    {
        flag = 0;
    }
    else
    {
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (i == j && a[i][j] != 1)
                {
                    flag = 0;
                    break;
                }
                else if (i != j && a[i][j] != 0)
                {
                    flag = 0;
                    break;
                }
            }

            if (flag == 0)
            {
                break;
            }
        }
    }

    if (flag == 1)
    {
        printf("Identity Matrix\n");
    }
    else
    {
        printf("Not an Identity Matrix\n");
    }

    return 0;
}