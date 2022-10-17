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
   int x;
   float F, g;
   printf("Nhap so nguyen x: ");
   scanf("%d",&x);
   F= (float)(1+x)/(1-x);
   g= (float)(3*pow(x,5)+2*x+sqrt(x+1))/(5*pow(x,2)-3);
   printf("F(x)= %.3f",F);
   printf("\ng(x)= %.3f",g);
   return 0;
}
