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
   int x, F, G;
   printf("Nhap so nguyen x: ");
   scanf("%d",&x);
   F= 5*pow(x,2) + 6*x + 1;
   G= 2*pow(x,4) - 5*pow(x,2) + 4*x + 1;
   printf("F(x)= %d",F);
   printf("\nG(x)= %d",G);
   return 0;
}
