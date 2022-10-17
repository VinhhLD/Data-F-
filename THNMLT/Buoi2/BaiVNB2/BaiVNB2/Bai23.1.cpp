/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
int main ()
{
	int n, i, dem;
	dem = 0;
	printf("Nhap n: "); scanf_s("%d", &n);
	printf("Cac so chan tu 1 den %d la: ", n);
	for (i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
		{
		printf("%d ", i);
		dem++;
		}
	}
	printf("\nSo luong so chan tu 1 den %d: co %d so chan\n", n, dem);
	return 0;
	getch ();
}*/
