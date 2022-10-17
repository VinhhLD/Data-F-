/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n, i;
    printf("Nhap n: "); scanf("%d",&n);
    printf("\nCac so le nho hon %d la: ",n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        printf("%d ",i);
    }

    return 0;
}
