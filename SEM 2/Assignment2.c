// NAME - YASH CHINCHOLE
// ROLL NO. - FY21H837

#include <stdio.h>

int findmax(int arr[])
{
    int max = arr[0];
    for (int i = 1; i < 10; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

float percentage(int arr[])
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
        sum += arr[i];

    float p = sum / 5;
    return p;
}

int fail(int arr[])
{
    int total_fail = 0;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] < 40)
            total_fail++;
    }
    return total_fail;
}

int main()
{
    char name[10][20];
    int roll[10], cpps[10], maths[10], mech[10], phy[10], graphics[10];

    for (int i = 0; i < 10; i++)
    {
        printf("\nEnter Name: ");
        scanf("%s", name[i]);
        printf("Enter Roll Number: ");
        scanf("%d", &roll[i]);
        printf("Enter CPPS Score: ");
        scanf("%d", &cpps[i]);
        printf("Enter Maths Score: ");
        scanf("%d", &maths[i]);
        printf("Enter Mech Score: ");
        scanf("%d", &mech[i]);
        printf("Enter Physics Score: ");
        scanf("%d", &phy[i]);
        printf("Enter Graphics Score: ");
        scanf("%d", &graphics[i]);
    }

    printf("\nRoll \t Name \t CPPS \t Maths \t Mech \t Phy \t Graphics");
    for (int i = 0; i < 10; i++)
    {
        printf("\n %d \t  %s \t  %d \t  %d \t  %d \t  %d \t   %d ", roll[i], name[i], cpps[i], maths[i], mech[i], phy[i], graphics[i]);
    }

    printf("\n\nMaximum in CPPS is: %d", findmax(cpps));
    printf("\n\nMaximum in Maths is: %d", findmax(maths));
    printf("\n\nMaximum in Physics is: %d", findmax(phy));
    printf("\n\nMaximum in Mech is: %d", findmax(mech));
    printf("\n\nMaximum in Graphics is: %d", findmax(graphics));

    float p_cpps = percentage(cpps);
    float p_maths = percentage(maths);
    float p_mech = percentage(mech);
    float p_phy = percentage(phy);
    float p_gr = percentage(graphics);

    int total_fail = 0;
    for (int i = 0; i < 10; i++)
    {
        if (cpps[i] < 40 || maths[i] < 40 || graphics[i] < 40 || phy[i] < 40 || mech[i] < 40)
            total_fail++;
    }

    printf("\n\nTotal number of passing students in the class: %d", 10 - total_fail);
    printf("\n\nThe overall percentage of class is: %d", (10 - total_fail) * 10);

    int f_cpps = fail(cpps);
    int f_maths = fail(maths);
    int f_mech = fail(mech);
    int f_phy = fail(phy);
    int f_gr = fail(graphics);

    printf("\n\nFail in CPPS is: %d", fail(cpps));
    printf("\n\nFail in Maths is: %d", fail(maths));
    printf("\n\nFail in Physics is: %d", fail(phy));
    printf("\n\nFail in Mech is: %d", fail(mech));
    printf("\n\nFail in Graphics is: %d", fail(graphics));

    int distinction = 0;
    for (int i = 0; i < 10; i++)
    {
        if ((cpps[i] > 75 && maths[i] > 75 && mech[i] > 75 && phy[i] > 75 && graphics[i]))
            distinction++;
    }

    printf("\n\nTotal number of students get distinction in the class: %d\n", distinction);
}