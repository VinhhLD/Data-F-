#include <stdio.h>
#include <math.h>
int main()
{
  int a, b, c, d, e;
  float TB;
  printf("Nhap vao 5 so nguyen a, b, c, d, e =");
  scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
  TB=(float)(a+b+c+d+e)/5;
  printf("TB cong cua 5 so nguyen = %.2f", TB);
  return 0;
 
}
