/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int d, r, i, j;
    printf("Nhap chieu dai: "); scanf("%d",&d);
    printf("Nhap chieu rong: "); scanf("%d",&r);
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= d; j++)
        printf(" * ");
        printf("\n");
    }
    return 0;
}
