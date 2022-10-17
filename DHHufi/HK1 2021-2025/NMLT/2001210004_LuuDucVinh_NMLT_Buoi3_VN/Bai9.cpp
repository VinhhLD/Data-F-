#include <stdio.h>
int main()
{
   int a, b, c, max, min;
   printf("So nguyen a la: "); scanf("%d",&a);
   printf("So nguyen b la: "); scanf("%d",&b);
   printf("So nguyen c la: "); scanf("%d",&c);
   max=min=a;
   if (b>a)
   max = b;
   if (c>a)
   max = c;
   printf("So lon nhat la: %d ", max); 
   if (b<a)
   min = b;
   if (c<a)
   min = c;
   printf("\nSo nho nhat la: %d ", min); 
  
}
