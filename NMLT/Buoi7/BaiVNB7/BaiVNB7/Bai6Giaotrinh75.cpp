#/*define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
void lietkescp (long x)
{
	printf("\n%d so chinh phuong dau tien la: \n", x);
	for (int i = 0; i <= x; i++)
	{
		printf("%ld ", i * i);
	}
}
int main ()
{
	long x;
	printf("Nhap x: "); scanf_s("%ld", &x);
	lietkescp(x);
	return 0;
	getch ();
}*/