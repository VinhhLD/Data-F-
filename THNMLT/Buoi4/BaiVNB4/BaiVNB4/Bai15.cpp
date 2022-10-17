#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
void lietkescp (long n)
{
	printf("\n%d so chinh phuong dau tien la: \n", n);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", i * i);
	}
}
int main ()
{
	long n;
	printf("Nhap n: "); scanf_s("%d", &n);
	lietkescp(n);
	return 0;
	getch ();
}