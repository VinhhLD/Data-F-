/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
int kiemtra (int n)
{
	if (n % 2 != 0)
		return 1;
	return 0;
}
int main ()
{
	int n;
	printf("Nhap n: "); scanf_s("%d", &n);
	printf("Kiem tra %d co la so le hay khong: ", n);
	if (kiemtra(n))
	{
		printf("%d la so le\n", n);
	}
	else
		printf("%d khong phai la so le\n", n);
	printf("Cac so le nho hon %d la: ", n);
	for (int i = 1; i < n; i++)
	{
		if (kiemtra(i))
			printf("%d ", i);
	}
	printf("\n");
	return 0;
	getch ();
}*/
