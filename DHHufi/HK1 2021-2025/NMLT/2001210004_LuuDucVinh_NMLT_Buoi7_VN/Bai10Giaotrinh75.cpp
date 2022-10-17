/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
void kiemtratuanle(long n)
{
	if (n < 7 )
		printf("co %ld ngay\n", n);
	else if (n > 7)
		printf("%ld co %ld tuan va %ld ngay le\n", n, n / 7, n % 7);
}
int main ()
{
	long n;
	do
	{
	printf("Nhap vao ngay (ngay > 0): "); scanf_s("%ld", &n);
	}
	while (n <= 0);
	kiemtratuanle(n);
	return 0;
	getch ();
}*/