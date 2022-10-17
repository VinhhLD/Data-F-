#include<stdio.h>
int main()
{
  int n, i, s;
  printf("Nhap n: "); scanf("%d",&n);
  s = 0;
  for(i = 1 ; i < n; i++)
    s = s + i;
    printf("Tong cac so tu nhien nho hon %d la: %d", n, s);
  return 0;
}
