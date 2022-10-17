/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float a, b;
    printf("Nhap he so a: "); scanf("%f",&a);
    printf("Nhap he so b: "); scanf("%f",&b);
    printf("Phuong trinh bac 1: ax + b = 0");
    if (a==0)
    {
        if (b==0)
            printf("\nPhuong trinh co vo so nghiem\n");
        else
            printf("\nPhuong trinh vo nghiem\n");
    }
    else
        printf("\nPhuong trinh co nghiem x = %.2f", -b/a);
    return 0;
}
