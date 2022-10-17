/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
int demuocsonguyen (int n)
{
	int dem = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
			dem++;
	}
	return dem;
}
int main ()
{
	int n;
	printf("Nhap n: "); scanf_s("%d", &n);
	int dem = demuocsonguyen(n);
	printf("Dem uoc cua so nguyen %d: %d\n", n, dem);
	return 0;
	getch ();
}*/