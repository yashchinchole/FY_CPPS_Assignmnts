// NAME - YASH CHINCHOLE
// ROLL NO. - FY21H837

#include <stdio.h>
#include <string.h>

void substring(char str1[], char str2[])
{
    int ss = 1;
    char *p1 = str1, *p2 = str2;
    printf("Enter the main string: \n");
    scanf("%s", str1);
    printf("Enter substring to check in the main string: \n");
    scanf("%s", str2);

    while (*p1 != '\0')
    {
        if (*p1 == *p2)
        {
            p1++;
            p2++;
            ss = 1;
        }

        else
        {
            if (ss == 0)
                p1++;

            else
            {
                p2 = str2;
                ss = 0;
            }
        }

        if (*p2 == '\0')
            break;
    }

    if (*p2 == '\0')
        printf("The entered substring is present in the main string!!!\n");

    else
        printf("The entered substring is not present in the main string\n");
}

void palindrome(char str1[])
{
    int i, end;
    char rev_str[20];
    printf("Enter the string to know whether the string is a Palindrome or not: \n");
    scanf("%s", str1);

    int len = strlen(str1);
    end = len - 1;
    for (i = 0; i < len; i++)
    {
        rev_str[i] = str1[end];
        end--;
    }

    rev_str[i] = '\0';
    char *p1, *p2;
    p1 = str1;
    p2 = rev_str;
    int comp = 1;

    while (*p1 != '\0')
    {
        if (*p1 == *p2)
        {
            p1++;
            p2++;
            comp = 1;
        }

        else
        {
            comp = 0;
            break;
        }
    }

    if (comp == 1)
        printf("Entered string is a Palindrome!!!\n");

    else if (comp == 0)
        printf("Entered string is a not a Palindrome\n");
}

void compare(char str1[], char str2[])
{
    int comp = 1;
    char *p1, *p2;
    printf("\nEnter the first string: \n");
    scanf("%s", str1);
    printf("\nEnter the second string to compare: \n");
    scanf("%s", str2);
    p1 = str1;
    p2 = str2;

    if (strlen(str1) == strlen(str2))
    {
        while (*p1 != '\0')
        {
            if (*p1 == *p2)
            {
                p1++;
                p2++;
            }

            else
            {
                comp = 0;
                break;
            }
        }

        if (comp == 1)
            printf("Entered strings are exactly same!!!\n");

        else
            printf("Entered strings are not same\n");
    }

    else
        printf("The entered strings are not same\n");
}

char *copy(char str1[], char str2[])
{
    char *p1, *p2;
    p1 = str1;
    p2 = str2;
    printf("Enter the first string: \n");
    scanf("%s", str1);
    printf("Enter the second string: \n");
    scanf("%s", str2);

    while (*p2 != '\0')
    {
        *p1 = *p2;
        p1++;
        p2++;
    }

    *p1 = '\0';
    printf("String is %s\n", str1);
    return str1;
}

void reverse(char str1[])
{
    int i, end;
    char rev_str[20];
    printf("Enter the string to get its reverse: \n");
    scanf("%s", str1);

    int len = strlen(str1);
    end = len - 1;

    for (i = 0; i < len; i++)
    {
        rev_str[i] = str1[end];
        end--;
    }

    rev_str[i] = '\0';
    printf("Reverse of the string is %s\n", rev_str);
}

int main()
{
    int no;
    char *p1;
    char str1[20], str2[20];

    while (no != 6)
    {
        printf("\nEnter :\n");
        printf("1) SUBSTRING\n");
        printf("2) PALINDROME\n");
        printf("3) COMPARE\n");
        printf("4) COPY\n");
        printf("5) REVERSE\n");
        printf("6) EXIT\n");
        scanf("%d", &no);

        switch (no)
        {
        case 1:
            substring(str1, str2);
            break;
        case 2:
            palindrome(str1);
            break;
        case 3:
            compare(str1, str2);
            break;
        case 4:
            copy(str1, str2);
            break;
        case 5:
            reverse(str1);
            break;
        case 6:
            printf("THANK YOU!!!\n");
            break;
        default:
            printf("INVALID INPUT!!!\n");
        }
    }
}