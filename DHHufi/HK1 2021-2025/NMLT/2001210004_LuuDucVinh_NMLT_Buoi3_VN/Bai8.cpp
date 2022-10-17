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
   int a, b, max;
   printf("So nguyen a la: "); scanf("%d",&a);
   printf("So nguyen b la: "); scanf("%d",&b);
   if (a > b)
   max = a;
   else 
   max = b;
   printf("So lon nhat la: %d", max);
   return 0;
  
}
