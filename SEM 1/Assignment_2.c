#include <stdio.h>

int main()
{
    int guest, nights, extra, business;
    int person = 1000;
    float charges, total;

    printf("\n\nWELCOME!! To Ocean View Hotel\n");
    printf("\n***************************************\n");

    printf("\nEnter no of guest\n");
    scanf("%d", &guest);

    printf("\nEnter no of nights\n");
    scanf("%d", &nights);

    printf("\nIs it business trip -> (if YES Enter => 1) & (if NO Enter => 0)\n");
    scanf("%d", &business);

    charges = (500 + 1000 * guest) * nights;

    if (business)
    {
        float discount = charges * 20 / 100;

        charges = charges * 80 / 100;

        printf("\n*******************************\n");
        printf("\nDiscount Amount = %.2f\n", discount);
    }

    printf("\n*******************************\n");
    printf("\nTotal cost is %.2f\n", charges);
    printf("\n*******************************\n");
    printf("\nTHANK YOU\n");
    printf("\n*******************************\n");

    return 0;
}