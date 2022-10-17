/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
int main ()
{
	int N, a, b;
	do
	{
	printf("Nhap N: "); scanf_s("%d", &N);
	printf("Nhap [a,b] (b > a): "); scanf_s("%d%d", &a, &b);
	}
	while (b < a);
	printf("Cac uoc cua %d thuoc khoang [%d,%d] gom: ", N, a, b);
	for (int i = a; i <= b; i++)
	{
		if (N % i == 0)
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return 0;
	getch ();
}*/