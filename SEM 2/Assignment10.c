// SEM : 2 - ASS : 10
// Author - YASH CHINCHOLE
// Roll No. - FY21H837

#include <stdio.h>

struct student
{
    char firstName[50];
    int roll_no;
    float marks;
} s[10];

int main()
{
    int i;
    printf("Enter information of students: \n");

    for (i = 0; i < 5; i++)
    {
        s[i].roll_no = i + 1;
        printf("Roll_no: %d\n", s[i].roll_no);
        printf("Enter first name: ");
        scanf("%s", s[i].firstName);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("Displaying Informtion of students: \n");

    for (i = 0; i < 5; i++)
    {
        printf("Roll number: %d \n", i + 1);
        printf("First name:%s \n", s[i].firstName);
        printf("Marks: %.2f", s[i].marks);
        printf("\n");
    }
    return 0;
}