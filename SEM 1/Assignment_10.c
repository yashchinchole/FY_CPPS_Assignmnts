// Name - Yash Chinchole
// Roll No. - FY21H837

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char pass[20];
    printf("\n\nEnter Password:\t");
    gets(pass);
    int n = strlen(pass);

    bool lenght = false;
    bool upper = false;
    bool lower = false;
    bool digit = false;
    bool symbol = false;

    for (int i = 0; i < n; i++)
    {
        if (n >= 6 && n <= 12)
            lenght = true;

        if (isupper(pass[i]))
            upper = true;

        if (islower(pass[i]))
            lower = true;

        if (isdigit(pass[i]))
            digit = true;

        if (ispunct(pass[i]))
            symbol = true;
    }

    if (lenght != true)
        printf("\nPassword Must Be Have At least 6 - 12 \n\n");

    if (upper != true)
        printf("\nPassword Must Be Have At least One Uppercase Character\n\n");

    if (lower != true)
        printf("\nPassword Must Be Have At least One Lowercase Character\n\n");

    if (digit != true)
        printf("\nPassword Must Be Have At least One Digit\n\n");

    if (symbol != true)
        printf("\nPassword Must Be Have At least One Special Symbol\n\n");

    if (lenght == true && upper == true && lower == true && digit == true && symbol == true)
        printf("\nPassword Verified\n\n");

    return 0;
}