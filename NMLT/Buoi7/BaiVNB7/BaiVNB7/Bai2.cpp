/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
int kiemtra (int n)
{
	if (n % 5 == 0)
		return 1;
	return 0;
}
int main ()
{
	int n;
	printf("Nhap n: "); scanf_s("%d", &n);
	if (kiemtra(n))
	{
		printf("%d la boi cua 5\n", n);
		printf("Cac so la boi so cua 5 nho hon %d la: ", n);
		for (int i = 0; i < n; i++)
		if (kiemtra(i))
			printf("%d ", i);
	}
	else
	{
		printf("%d khong phai boi cua 5\n", n);
	}
	printf("\n");
	return 0;
	getch ();
}*/