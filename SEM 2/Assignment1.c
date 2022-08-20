// NAME - YASH CHINCHOLE
// ROLL NO. - FY21H837

#include <stdio.h>

long long int fact(int n)
{
    int factorial = 1;
    for (int i = 1; i <= n; i++)
        factorial *= i;

    return factorial;
}

int main()
{
    long long int number;
    printf("Enter Number\n");
    scanf("%lld", &number);

    printf("Factorial of %lld is %lld\n", number, fact(number));

    return 0;
}