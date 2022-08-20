// SEM : 2 - ASS : 9
// Author - YASH CHINCHOLE
// Roll No. - FY21H837

// Problems statementTITLE OF ASSIGNMENT Accept an array of integers; arrange the elements of this array in such a way that each element is smaller than its successor.As an example, array of integers : [ 5, 1, 4, 2, 3 ] Sort the array using insertion / selection / bubble sort, so that the final array obtained is[1, 2, 3, 4, 5].* /

#include <stdio.h>

void bubble_sort(int a[], int n)
{
    int i = 0, j = 0, t;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
}

int main()
{
    int a[100], n;
    printf("Enter no of elements in the array: \n");
    scanf("%d", &n);

    printf("Enter %d elements: \n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
        
    bubble_sort(a, n);
    printf("The sorted array is: \n");
    printf("[ ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf(" ]");
    printf("\n");

    return 0;
}