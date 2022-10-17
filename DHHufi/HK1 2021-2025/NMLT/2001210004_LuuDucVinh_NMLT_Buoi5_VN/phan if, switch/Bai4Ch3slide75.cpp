/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int so;
    printf("Nhap so: "); scanf("%d",&so);
    switch (so){
        case 0:
            printf("So vua nhap: Khong");
            break;
        case 1:
            printf("So vua nhap: Mot");
            break;
        case 2:
            printf("So vua nhap: Hai");
            break;
        case 3:
            printf("So vua nhap: Ba");
            break;
        case 4:
            printf("So vua nhap: Bon");
            break;
        case 5:
            printf("So vua nhap: Nam");
            break;
        case 6:
            printf("So vua nhap: Sau");
            break;
        case 7:
            printf("So vua nhap: Bay");
            break;
        case 8:
            printf("So vua nhap: Tam");
            break;
        case 9:
            printf("So vua nhap: Chin");
            break;
        default:
            printf("So vua nhap khong hop le!");
    }

    return 0;
}
