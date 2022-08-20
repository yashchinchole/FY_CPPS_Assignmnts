// Name - Yash Chinchole
// Roll No. - FY21H837

#include <stdio.h>

int main()
{
    int number, flag = 0;
    printf("\nEnter Your Number\n");
    scanf("%d", &number);

    for (int i = 2; i <= number / 2; i++)
    {
        if (number % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag)
        printf("%d is NOT Prime Number\n", number);

    else
        printf("%d is Prime Number\n", number);

    return 0;
}