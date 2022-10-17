/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
#define PI 3.14
int main()
{
  float r, D, Chuvi, DienTich;
  printf("Nhap ban kinh r cua hinh tron = ");
  scanf("%f",&r);
  D=r+r; //Duong kinh D 
  Chuvi=D*PI;
  DienTich=PI*r*r;
  printf("Chu vi hinh tron =%.2f", Chuvi);
  printf("\nDien tich hinh tron =%.2f", DienTich);
  return 0;
 
}
