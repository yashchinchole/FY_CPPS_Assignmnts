// Name - Yash Chinchole
// Roll No. - FY21H837

#include <stdio.h>

int main()
{
    int n, i;
    printf("\nEnter Number Of Elements\n\n");
    scanf("%d", &n);

    int mar[n];
    for (i = 0; i < n; i++)
    {
        printf("\n\nEnter --> %d Element : ", i + 1);
        scanf("%d", &mar[i]);
    }
    int max = mar[0];

    for (i = 0; i < n; i++)
    {
        if (mar[i] > max)
            max = mar[i];
    }

    printf("\n\nMax Of All Elements is : %d", max);

    return 0;
}