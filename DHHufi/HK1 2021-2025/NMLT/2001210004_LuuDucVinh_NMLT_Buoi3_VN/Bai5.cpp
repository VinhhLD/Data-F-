#include <stdio.h>
#include <math.h>
int main()
{
  float a, b, Chuvi, DienTich;
  printf("Nhap chieu dai chieu rong a, b cua HCN =");
  scanf("%f%f",&a,&b);
  Chuvi= (float)(a+b)*2;
  DienTich= (float)(a*b);
  printf("Chu vi HCN = %.2f", Chuvi);
  printf("\nDien tich HCN = %.2f", DienTich);
  return 0;
 
}