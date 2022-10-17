/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a, b;
    float z;
    printf("Nhap a = "); scanf("%d",&a);
    printf("Nhap b = "); scanf("%d",&b);
    z= (float)a/b;
    printf("Kiem tra a co phai la boi so cua b khong: %d/%d = %.2f ",a ,b, z);
    if (a%b == 0)
        printf("\n=> a la boi so cua b");
    else
        printf("\n=> a khong phai la boi so cua b");

    return 0;
}
