#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
void xuatsodao (long n)
{
	long sodao = n % 10;
	n = n / 10;
	long socuoi;
	while (n > 0)
	{
		socuoi = n % 10;
		n = n / 10;
		sodao = sodao * 10 + socuoi;
	}
	printf("%ld\n", sodao);
}
int main ()
{
	long n;
	printf("Nhap n: "); scanf_s("%ld", &n);
	printf("So nghich dao cua %ld la: ", n);
	xuatsodao(n);
	return 0;
	getch ();
}