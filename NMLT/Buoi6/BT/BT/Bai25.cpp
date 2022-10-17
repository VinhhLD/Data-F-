/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
int main()
{
    int n, i;
	long tong = 0;
    printf("Nhap n: "); scanf_s("%d",&n);
	for (i = 1; i <= n; i++)
	{
        if (i % 2 == 0)
        tong = tong + i;
	}
	printf("Tong cac so chan nho hon %d la: %ld\n", n, tong);
    return 0;
	getch ();
}*/