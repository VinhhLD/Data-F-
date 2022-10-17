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
    int nhap;
    printf("=====Hay chon phep toan ma ban muon tinh=====");
    printf("\n\t1.Phep cong\t2.Phep tru\t3.Phep nhan\t4.Phep chia");
    printf("\nNhap so: "); scanf("%d",&nhap);
    switch (nhap){
        case 1:{
            printf("Nhap a = "); scanf("%f",&a);
            printf("Nhap b = "); scanf("%f",&b);
            tong = (float)a + b;
            printf("Ket qua la: %.2f",tong);
            break;
        }
        case 2:{
            printf("Nhap a = "); scanf("%f",&a);
            printf("Nhap b = "); scanf("%f",&b);
            hieu = (float)a - b;
            printf("Ket qua la: %.2f",hieu);
            break;
        }
        case 3:{
            printf("Nhap a = "); scanf("%f",&a);
            printf("Nhap b = "); scanf("%f",&b);
            tich = (float)a * b;
            printf("Ket qua la: %.2f",tich);
            break;
        }
        case 4:{
            printf("Nhap a = "); scanf("%f",&a);
            printf("Nhap b = "); scanf("%f",&b);
            thuong = (float)a / b;
            printf("Ket qua la: %.2f",thuong);
            break;
        }
        default:
            printf("So vua nhap khong hop le!");
    }

    return 0;
}
