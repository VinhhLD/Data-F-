/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define PI 3.141592654

int main()
{
    int nhap;
    printf("=====Hay chon hinh ma ban muon tinh Chu Vi va Dien Tich=====");
    printf("\n\t1.Hinh Vuong\t2.Hinh Chu Nhat\t3.Hinh Tron");
    printf("\nNhap so: "); scanf("%d",&nhap);
    switch (nhap){
        case 1:{
            float a, p, s;
            printf("Nhap chieu dai canh Hinh Vuong = "); scanf("%f",&a);
            p = (float)4 * a;
            s = (float)a * a;
            printf("Chu vi Hinh Vuong = %.2f",p);
            printf("\nDien tich Hinh Vuong = %.2f",s);
            break;
        }
        case 2:{
            float a, b, p, s;
            printf("Nhap chieu dai HCN = "); scanf("%f",&a);
            printf("Nhap chieu rong HCN = "); scanf("%f",&b);
            p = (float)(a + b) * 2; 
            s = (float)(a * b);
            printf("Chu vi HCN = %.2f",p);
            printf("\nDien tich HCN = %.2f",s);
            break;
        }
        case 3:{
            float r, D, p, s;
            printf("Nhap ban kinh r cua Hinh Tron = "); scanf("%f",&r);
            D = r + r; //Duong Kinh D
            p = D * PI;
            s = PI * r * r;
            printf("Chu vi Hinh Tron = %.2f",p);
            printf("\nDien tich Hinh Tron = %.2f",s);
            break;
        }
        default:
            printf("So vua nhap khong hop le!");
    }

    return 0;
}
