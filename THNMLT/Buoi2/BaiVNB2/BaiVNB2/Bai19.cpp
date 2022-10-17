/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
int main ()
{
	float n; 
	long double tong = 0;
	do
	{
	printf("Nhap n (n >= 0): "); scanf_s("%f", &n);
	}
	while (n < 0);
	for (int i = 0; i <= n; i++)
	{
		tong = tong + ((2.0 * i + 1.0) / (2.0 * i + 2.0));
	}
	printf("Cong thuc tinh tong: 1/2 + 3/4 + ... + 2n+1/2n+2\n");
	printf("KQ la: %.4lf\n", tong);
	return 0;
	getch ();
}*/
