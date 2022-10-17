/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <math.h>
int mu(int a, int b);
int ucln(int a, int b);
int main ()
{
	int chon;
	do
	{
	printf("1.Tinh m^n\n");
	printf("2.Tim uoc chung lon nhat cua 2 so nguyen duong a, b\n");
	printf("Chon chuc nang: "); scanf_s("%d", &chon);
	switch (chon)
	{
	case 1:
		{
			int m, n;
			printf("Nhap so m: ");
			scanf("%d",&m);
			printf("Nhap so mu n: ");
			scanf("%d",&n);
			printf("%d^%d = %d\n", m, n, mu(m, n));
			break;
		}
	case 2:
		{
			int a, b;
			printf("Nhap a, b: "); scanf_s("%d%d", &a, &b);
			printf("UCLN(a, b) la: %d", ucln(a, b));
		}
	}
	}
	while (chon != 0);
	return 0;
	getch ();
}
int mu(int a, int b)
{
     if(b == 1)
		return a;
     return mu(a, b - 1) * a;
}
int ucln(int a, int b)
{
    if (b == 0) return a;
    if (a % b == 0) return b;
    return ucln(b, a%b);
}*/