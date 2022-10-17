/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char c ='%';
    float a, thanhtien, giamgia, tongthanhtien;
    int b;
    printf("Nhap don gia mot mat hang = "); scanf("%f",&a);
    printf("Nhap so luong ban cua mat hang = "); scanf("%d",&b);
    thanhtien= (float)a*b;
    giamgia= (float)(thanhtien) * 0.03;
    tongthanhtien= (float)thanhtien - (float)giamgia;
    printf("Thanh tien: %.3f ",thanhtien);
    if (thanhtien > 100)
        printf("\n=> Duoc giam 3%c thanh tien\n=> Tong thanh tien: %.3f",c, tongthanhtien);
    else
        printf("\n=> Khong duoc giam 3%c thanh tien\n=> Tong thanh tien: %.3f",c, thanhtien);
    return 0;
}
