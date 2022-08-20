// SEM : 2 - ASS : 6
// Author - YASH CHINCHOLE
// Roll No. - FY21H837

// Problem statement :- Write a program that uses functions to perform the following operations:
// a) Reading a complex number
// b) Writing a complex number
// c)  Addition of two complex numbers
// d) Multiplication of two complex numbers.

#include <stdio.h>

struct complex
{
    float real, imag;
} a, b, c;

struct complex accept(void)
{
    struct complex x;
    printf("Enter the real part\n");
    scanf("%f", &x.real);
    printf("Enter the imaginary part\n");
    scanf("%f", &x.imag);
    return x;
}

void display(struct complex x)
{
    printf("Complex number  is\n");
    printf(" %.1f + i %.1f \n", x.real, x.imag);
}

struct complex add(struct complex p, struct complex q)
{
    struct complex x;
    x.real = (p.real + q.real);
    x.imag = (p.imag + q.imag);
    return x;
}

struct complex mul(struct complex p, struct complex q)
{
    struct complex x;
    x.real = (p.real * q.real) - (p.imag * q.imag);
    x.imag = (p.real * q.imag) + (p.imag * q.real);
    return x;
}

// struct complex div(struct complex p, struct complex q)
//{
//  struct complex t;
// t.real = ((p.imag * q.real) - (p.real * q.imag)) / ((q.real * q.real) + (q.imag * q.imag));
// t.imag = ((p.real * q.real) + (p.imag * q.imag)) / ((q.real * q.real) + (q.imag * q.imag));
// return(t);
//}

int main()
{
    int choice;
    printf("Enter the 1st complex number\n");
    a = accept();
    printf("Enter  the 2nd complex number\n");
    b = accept();
    display(a);
    display(b);

label:
    printf("1.Addition\n");
    printf("2.Multiplication\n");
    printf("3.Exit\n");
    printf("Enter your choice:\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Addition\n ");
        c = add(a, b);
        display(c);
        goto label;
        break;
    case 2:
        printf("Multiplication\n");
        c = mul(a, b);
        display(c);
        goto label;
        break;
    case 3:
        printf("Thank you");
        break;
    default:
        printf("\nInvalid choice\n");
    }

    return 0;
}