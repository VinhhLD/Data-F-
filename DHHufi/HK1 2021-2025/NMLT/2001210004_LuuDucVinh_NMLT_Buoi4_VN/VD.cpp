/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a;
    printf("Nhap thang: "); scanf("%d",&a);
    if (a == 1 || a == 3 || a == 5 || a == 7 || a == 8 || a == 10 || a == 12)
        printf("\nThang %d co 31 ngay",a);
    if (a == 4 || a == 6 || a == 9 || a == 11)
        printf("\nThang %d co 30 ngay",a);
    if (a == 2)
        printf("\nVi la nam 2021 nen thang %d co 28 ngay",a);

    return 0;
}
