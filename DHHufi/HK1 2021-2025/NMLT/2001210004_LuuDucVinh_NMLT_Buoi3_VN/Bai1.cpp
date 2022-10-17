/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    float a, b, tong, hieu, tich, thuong;
    printf("Nhap so thuc a = ");
    scanf("%f",&a);
    printf("Nhap so thuc b = ");
    scanf("%f",&b);
    tong= a+b;
    hieu= a-b;
    tich= a*b;
    thuong= a/b;
    printf("KQ la: \nTong: %.2f \nHieu: %.2f \nTich: %.2f \nThuong: %.2f",tong, hieu, tich, thuong);
    return 0;
    
}
