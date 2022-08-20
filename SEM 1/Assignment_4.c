// Name - Yash Chinchole
// Roll No. - FY21H837
#include <stdio.h>

int main()
{
    int m, n;
    printf("\n\nEnter 2 Numbers\n\n");
    scanf("%d %d", &m, &n);
    int max_of_2 = (m > n) ? m : n;
    printf("\nMax of %d & %d is %d\n", m, n, max_of_2);

    int x, y, z;
    printf("\n\nEnter 3 Numbers\n\n");
    scanf("%d %d %d", &x, &y, &z);
    int max_of_3 = (x > y) ? (x > z ? x : z) : (y > z ? y : z);
    printf("\nMax of %d, %d, %d is %d\n", x, y, z, max_of_3);

    int a, b, c, d;
    printf("\n\nEnter 4 Numbers\n\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int max_of_4 = (a > b && a > c && a > d) ? a : ((b > c && b > d) ? b : (c > d ? c : d));
    printf("\nMax of %d, %d, %d, %d is %d\n", a, b, c, d, max_of_4);

    return 0;
}