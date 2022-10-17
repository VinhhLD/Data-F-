/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
int main()
{
    float a, CV, DT, DC;
    printf("Nhap chieu dai canh HV = ");
    scanf("%f",&a);
    CV=4*a;
    DT=pow(a,2);
    DC=sqrt(a);
    printf("Chu vi hinh vuong = %.2f",CV);
    printf("\nDien tich hinh vuong = %.2f",DT);
    printf("\nDuong cheo hinh vuong = %.2f",DC);
    return 0;
}
