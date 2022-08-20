// Name - Yash Chinchole
// Roll No. - FY21H837

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    do
    {
        int option, num, factorial = 1;
        float x, y, base, exp;
        printf("\n\n*************************************\n\n");
        printf("WELCOME! TO THE SIMPLE CALCULATOR\n\n");
        printf("\nENTER :\n\n");
        printf("1 --> ADDITION\n");
        printf("2 --> SUBTRACTION\n");
        printf("3 --> MULTIPLICATION\n");
        printf("4 --> DIVISION\n");
        printf("5 --> CALCULATE POWER OF A NUMBER\n");
        printf("6 --> CALCULATE FACTORIAL OF A NUMBER\n");
        printf("7 --> EXIT\n\n");
        printf("*************************************\n\n");
        scanf("%d", &option);
        printf("\n*************************************\n\n");

        switch (option)
        {
        case 1:
            printf("\nEnter the values of 2 Numbers --> x & y\n\n");
            scanf("%f %f", &x, &y);
            printf("\nSUM of %.2f & %.2f is %.2f\n\n", x, y, x + y);
            break;

        case 2:
            printf("\nEnter the values of 2 Numbers --> x & y\n\n");
            scanf("%f %f", &x, &y);
            printf("\nDIFFERENCE of %.2f & %.2f is %.2f\n\n", x, y, x - y);
            break;

        case 3:
            printf("\nEnter the values of 2 Numbers --> x & y\n\n");
            scanf("%f %f", &x, &y);
            printf("\nMULTIPLICATION of %.2f & %.2f is %.2f\n\n", x, y, x * y);
            break;

        case 4:
            printf("\nEnter the values of 2 Numbers --> x & y\n\n");
            scanf("%f %f", &x, &y);
            printf("\nDIVISION of %.2f & %.2f is %.2f\n\n", x, y, x / y);
            break;

        case 5:
            printf("\n\nEnter the values of Base & Exponent\n");
            scanf("%f %f", &base, &exp);
            printf("[%.0f]^(%.0f) = %.2f", base, exp, pow(base, exp));
            break;

        case 6:
            printf("\n\nEnter the Number\n");
            scanf("%d", &num);

            for (int i = 1; i <= num; i++)
                factorial *= i;

            printf("\nFACTORIAL of %d is %d\n", num, factorial);
            break;

        case 7:
            exit(0);

        default:
            printf("WRONG CHOISE\n\n");
            break;
        }
    } while (1);

    return 0;
}