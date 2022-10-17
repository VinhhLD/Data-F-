/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n, i, j;
    printf("Nhap n: "); scanf("%d",&n);
    printf("\nCac so la boi so cua 5 nho hon %d: ",n);
    for (i = 0; i < n; i++){
        if (i % 5 == 0)
        printf("%d ",i);
    }
    return 0;
}
