#include <stdio.h>

int main()
{
    float basic_pay;
    printf("\nEnter the Basic Pay\n\n");
    scanf("%f", &basic_pay);
    printf("\n*******************************************\n");

    float HRA, TA, gross_salary, Tax;

    HRA = basic_pay * 10 / 100;
    TA = basic_pay * 5 / 100;
    gross_salary = basic_pay + HRA + TA;
    Tax = gross_salary * 2 / 100;

    printf("\nHRA = %.2f  &  TA = %.2f  &  Tax = %.2f\n", HRA, TA, Tax);
    printf("\n*******************************************\n");

    float net_salary;
    net_salary = gross_salary - Tax;

    printf("\nNet salary = %.2f\n\n", net_salary);
    printf("*******************************************\n");

    return 0;
}