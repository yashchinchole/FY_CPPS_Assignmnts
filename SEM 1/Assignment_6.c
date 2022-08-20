// Name - Yash Chinchole
// Roll No. - FY21H837

#include <stdio.h>

int main()
{
    long long int num, i, remainder, rem, last = 0, lastdigit = 0;
    printf("Enter Your Account Number\n");
    scanf("%lld", &num);

    for (i = 0; i < 4; i++)
    {
        remainder = num % 10;
        last = last * 10 + remainder;
        num /= 10;
    }

    printf("Last 4 Digits of Your Account : ");

    for (i = 0; i < 4; i++)
    {
        rem = last % 10;
        last /= 10;
        printf("%lld ", rem);
    }

    return 0;
}