// NAME - YASH CHINCHOLE
// ROLL NO. - FY21H837

#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x, y;
    printf("Enter Values Of x & y\n");
    scanf("%d %d", &x, &y);

    printf("Values Of x & y Before Swap is %d & %d\n", x, y);
    swap(&x, &y);
    printf("Values Of x & y After Swap is %d & %d\n", x, y);

    return 0;
}