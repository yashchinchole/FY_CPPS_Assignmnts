#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    system("cls");
    float c1, c2, c3, c4, c5;
    printf("\n\n********************************************\n");
    printf("\nEnter the Marks of Five Courses (Out of 100)\n\n");
    scanf("%f %f %f %f %f", &c1, &c2, &c3, &c4, &c5);

    if (c1 < 40 || c2 < 40 || c3 < 40 || c4 < 40 || c5 < 40)
    {
        printf("\n***********************\n");
        printf("\nSorry! Student is Fail\n");
        printf("\n***********************\n");
        exit(0);
    }

    else
    {
        float total = c1 + c2 + c3 + c4 + c5;
        float percentage = total / 5;

        printf("\n***********************\n");
        printf("\nTotal Marks = %.2f\n", total);
        printf("\n***********************\n");
        printf("\nPercentage = %.2f\n", percentage);
        printf("\n***********************\n");

        if (percentage >= 75)
        {
            printf("\nGrade is Distinction\n");
            printf("\n***********************\n");
        }

        else if (75 > percentage && percentage >= 60)
        {
            printf("\nGrade is First Division\n");
            printf("\n***********************\n");
        }

        else if (60 > percentage && percentage >= 50)
        {
            printf("\nGrade is Second Division\n");
            printf("\n***********************\n");
        }

        else
        {
            printf("\nGrade is Third Division\n");
            printf("\n***********************\n");
        }
    }

    return 0;
}