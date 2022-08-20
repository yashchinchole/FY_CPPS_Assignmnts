// Name - Yash Chinchole
// Roll No. - FY21H837

#include <stdio.h>

int main()
{
    int i, j, k, a1, a2, b1, b2;
    int a[100][100], b[100][100], add[100][100], mul[100][100];

    printf("\n\nEnter Details Of 1st Matrix\n");
    printf("\nEnter --> Number Of Rows & Columns : \n");
    scanf("%d %d", &a1, &a2);

    for (i = 0; i < a1; i++)
    {
        for (j = 0; j < a2; j++)
        {
            printf("Enter --> Value Of a[%d][%d] : ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n1st Matrix\n");
    for (i = 0; i < a1; i++)
    {
        for (j = 0; j < a2; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("\n\nEnter Details Of 2nd Matrix\n");
    printf("\nEnter --> Number Of Rows & Columns : \n");
    scanf("%d %d", &b1, &b2);

    for (i = 0; i < b1; i++)
    {
        for (j = 0; j < b2; j++)
        {
            printf("Enter --> Value Of b[%d][%d] : ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }

    printf("\n2nd Matrix\n");
    for (i = 0; i < b1; i++)
    {
        for (j = 0; j < b2; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    if ((a1 == b1) && (a2 == b2))
    {
        printf("\n\nAddition of a[%d][%d] & b[%d][%d] is :\n\n", a1, a2, b1, b2);
        for (i = 0; i < a1; i++)
        {
            for (j = 0; j < b2; j++)
            {
                add[i][j] = a[i][j] + b[i][j];
                printf("%d\t", add[i][j]);
            }
            printf("\n");
        }
    }

    if (a2 == b1)
    {
        printf("\nMultiplication of a[%d][%d] & b[%d][%d] is :", a1, a2, b1, b2);
        for (i = 0; i < a1; i++)
        {
            for (j = 0; j < b2; j++)
            {
                mul[i][j] = 0;
                for (k = 0; k < b1; k++)
                {
                    mul[i][j] = mul[i][j] + (a[i][k] * b[k][j]);
                }
            }
            printf("\n");
        }

        for (i = 0; i < a1; i++)
        {
            for (j = 0; j < b2; j++)
            {
                printf("%d\t", mul[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}