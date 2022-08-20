// SEM : 2 - ASS : 7
// Author - YASH CHINCHOLE
// Roll No. - FY21H837

// Problem statement :- Write a program to define a structure for customer bank account that holds information like account number, name of account holder, balance, internet banking facility availed(Yes or No), pin code ( 422001 to 422013) , account type(saving, recurring, deposit).
// a) Read account details for N customers.
// b) Identify the golden, silver and general customers.
//  Golden customers: Balance > 10,00000.
// Silver Customers: Balance > 500000 and < 10,00000.
// General customers: Balance <500000.
// c) Display the list of customers availing the internet banking facility.
// d) Display the customers belonging to a particular geographical location depending on postal code.
// e) Display the customer list as per their account type.

#include <stdio.h>
#include <string.h>

struct bank_info
{
    int account_no;
    char name[100];
    float balance;
    int pin;
    char type[20];
} cust[10];

int main()
{
    int fac, n;
    // char str[20]="hii";
    char str1[20] = "Savings";
    char str2[20] = "Recurring";
    char str3[20] = "Deposit";
    printf("Enter the count of customer :");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("*****************************************");
        printf("\n\t\tENTER BANK DETAILS :");
        printf("\n\nENTER ACCOUNT NUMBER :");
        scanf("%d", &cust[i].account_no);
        printf("\nENTER NAME :");
        scanf("%s", cust[i].name);
        printf("\nENTER BANK BALANCE :");
        scanf("%f", &cust[i].balance);
        printf("\nDO YOU HAVE INTERNET BANKING FACILITIES (1 - Yes or 0 -No)");
        scanf("%d", &fac);
        printf("\nENTER PIN CODE (from 422001 to 422013) :");
        scanf("%d", &cust[i].pin);
        printf("\nENTER TYPE OF ACCOUNT (Savings, Recurring , Deposit):");
        scanf("%s", cust[i].type);
        printf("\n-----------------------------------------");
        printf("\n*****************************************\n");
    }

    printf("\n**********BANK DETAILS***********\n");

    for (int i = 0; i < n; i++)
    {
        printf("\nBank account no : %d", cust[i].account_no);
        printf("\nName of customer : %s", cust[i].name);
        printf("\nBank balance : %.2f", cust[i].balance);
        printf("\nAvailed the facility of internet banking : %d", fac);
        printf("\nPin code : %d", cust[i].pin);

        if (cust[i].balance > 1000000)
            printf("\nGOLDEN COUSTOMER\n");

        if (cust[i].balance < 1000000 && cust[i].balance > 500000)
            printf("\nSILVER COUSTOMER\n");

        if (cust[i].balance < 500000)
            printf("\nGENRAL COUSTOMER\n");

        if (cust[i].pin == 422001)
            printf("Geographical location : Delhi\n");

        if (cust[i].pin == 422002)
            printf("Geographical location : Madhya Pradesh\n");

        if (cust[i].pin == 422003)
            printf("Geographical location : Gujrat\n");

        if (cust[i].pin == 422004)
            printf("Geographical location : Maharashtra\n");

        if (cust[i].pin == 422005)
            printf("Geographical location : Assam\n");

        if (cust[i].pin == 422006)
            printf("Geographical location : Karnataka\n");

        if (cust[i].pin == 422007)
            printf("Geographical location : Nagaland\n");

        if (cust[i].pin == 422008)
            printf("Geographical location : Sikkim\n");

        if (cust[i].pin == 422009)
            printf("Geographical location : Goa\n");

        if (cust[i].pin == 4220010)
            printf("Geographical location : Kerala\n");

        if (cust[i].pin == 4220011)
            printf("Geographical location : Odisha\n");

        if (cust[i].pin == 4220012)
            printf("Geographical location : Uttar Pradesh\n");

        if (cust[i].pin == 4220013)
            printf("Geographical location : Arunachal Pradesh\n");

        if ((cust[i].pin < 422001 || cust[i].pin > 422013))
            printf("\nInvalid Pin Code\n");
    }
    printf("\n*************** Table ***************\n");
    printf(" Name of customer |\t Type of Account |\n");

    for (int i = 0; i < n; i++)
    {
        printf("\n %s              %s              \n", cust[i].name, cust[i].type);
    }
}